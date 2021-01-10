#pragma once
#include <iostream>
#include <random>
#include <ctime>
#include <cmath>
#include <iostream>
#include <random>
#include <string>


#define E 2.718281828459
#define PI 3.141592653589



int YPoint(int x, double* w, int factor = 1) {
	return (int)((double)(-1 * (double)factor * w[2] - w[0] * x) / (double)(w[1]));
}
double* random_weight(int size)//random aðýrlýk atama kodum
{
	double* Weight = new double[size];
	for (int i = 0; i < size; i++)
	{
		std::random_device rd;
		std::mt19937 mt(rd());
		std::uniform_real_distribution<double> dist(0.00, 1.00);
		Weight[i] = dist(mt);


	}
	return Weight;
}
double** random_matrix(int size, int size2 = 3) {
	double** Weight;
	Weight = new double* [size];
	for (int i = 0; i < size; i++) {
		Weight[i] = new double[size2];
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size2; j++) {
			std::random_device rd;
			std::mt19937 mt(rd());
			std::uniform_real_distribution<double> dist(0.00, 1.00);
			Weight[i][j] = dist(mt);
		}
	}
	return Weight;
}
int GetClassNumber() {
	int counter = 0;
	for (int i = 1; i < 7; i++) {
		if (size[i] != 0) {
			counter++;
		}
	}
	return counter;
}
int signum(double value) {	return (value >= 0) ? 1 : -1;}
double sigmoid(double value) {	return 1 / (1 + exp(-value));}
koordinat* normalizeXY(koordinat* xy, int size, double& norm) {//
	koordinat* temp = new koordinat[size];
	double faktor = 0;
	for (int i = 0; i < size; i++) {
		temp[i].x1 = xy[i].x1;
		temp[i].x2 = xy[i].x2;
		temp[i].id = xy[i].id;
	}

	for (int i = 0; i < size; i++) {
		faktor += xy[i].x1 * xy[i].x1;
		faktor += xy[i].x2 * xy[i].x2;

	}
	faktor = sqrt(faktor);
	for (int i = 0; i < size; i++) {
		temp[i].x1 /= faktor;
		temp[i].x2 /= faktor;
	}
	norm = faktor;
	return temp;
}
double* update_weight(double* weight, int size, double c, double d, double o, double* x, double fnet = 1) {

	double* temp;//Wn+1 aðýrlýýðý
	temp = new double[size];
	double katsayi = c * (d - o) * fnet;
	for (int i = 0; i < size; i++) {
		temp[i] = katsayi * x[i] + weight[i];
	}
	return temp;
}
koordinat* karistir(koordinat* xy, int size) {
	int k1, k2;
	koordinat temp;
	srand(time(0));
	for (int i = 0; i < size * 3; i++) {

		k1 = rand() % size;
		k2 = rand() % size;
		temp.x1 = xy[k1].x1;
		temp.x2 = xy[k1].x2;
		temp.id = xy[k1].id;
		xy[k1].x1 = xy[k2].x1;
		xy[k1].x2 = xy[k2].x2;
		xy[k1].id = xy[k2].id;
		xy[k2].x1 = temp.x1;
		xy[k2].x2 = temp.x2;
		xy[k2].id = temp.id;
	}
	return xy;
}
double* penceptron(koordinat* XY, int size, double* w, double c, int& cycle, int classid) {

	double* x = new double[3];
	int d, o = 0;//beklenen deðer ve çýkýþ deðeri
	double net = 0;
	double bias = 1;
	bool durum = true;
	while (durum)
	{
		durum = false;
		for (int i = 0; i < size; i++)
		{
			net += w[0] * XY[i].x1;
			net += w[1] * XY[i].x2;
			net += w[2] * bias;
			d = (XY[i].id == classid) ? 1 : -1;//class 1 ise 1 class 2 ise -1 beklenen deðer
			o = signum(net);
			net = 0;
			if (d != o) {//denk olursa deðiþim olmaz fazla iþlemden kurtardýk
				x = new double[3];
				x[0] = XY[i].x1;
				x[1] = XY[i].x2;
				x[2] = bias;
				w = update_weight(w, 3, c, d, o, x, 1);
				delete[]x;
				durum = true;
			}

		}
		cycle++;
	}
	return w;
}
double* penceptronDelta(koordinat* XY, int size, double* w, double c, int& cycle, double& e, int classid, double alpha = 1.0) {
	double* x, d, o, bias = 1, net = 0, fnet = 0, error = 0;
	bool durum = true;
	while (durum)
	{
		error = 0;
		for (int i = 0; i < size; i++)
		{
			net += w[0] * XY[i].x1;
			net += w[1] * XY[i].x2;
			net += w[2] * bias;
			o = (2 / (1 + exp(alpha * -net))) - 1;
			d = (XY[i].id == classid) ? 1 : -1;//class 1 ise 1 class 2 ise -1 beklenen deðer
			fnet = 0.5 * (1.0 - (o * o));
			error += 0.5 * pow((d - o), 2);
			x = new double[3];
			x[0] = XY[i].x1;
			x[1] = XY[i].x2;
			x[2] = bias;
			w = update_weight(w, 3, c, d, o, x, fnet);
			delete x;
			net = 0;
		}
		cycle++;
		durum = (error < 0.1) ? false : true;

	}
	e = error;



	return w;
}
double** MultiPenceptron(koordinat* XY, int size, double** W, double c, int& cycle) {
	int sinifsayisi = GetClassNumber();
	double* x, * net = new double[sinifsayisi], bias = 1;
	int* o = new int[sinifsayisi], * d = new int[sinifsayisi];
	bool durum = true;
	for (int i = 0; i < sinifsayisi; i++) { net[i] = 0; }
	while (durum) {
		durum = false;
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < sinifsayisi; j++)
			{
				net[j] += W[j][0] * XY[i].x1;
				net[j] += W[j][1] * XY[i].x2;
				net[j] += W[j][2] * bias;
			}
			for (int j = 0; j < sinifsayisi; j++)
			{
				d[j] = (j + 1 == XY[i].id) ? 1 : -1;
				o[j] = signum(net[j]);
			}
			for (int j = 0; j < sinifsayisi; j++)
			{
				if (d[j] != o[j])
				{
					x = new double[3];
					x[0] = XY[i].x1;
					x[1] = XY[i].x2;
					x[2] = bias;
					W[j] = update_weight(W[j], 3, c, d[j], o[j], x, 1);
					durum = true;
					delete x;
				}
			}
			for (int j = 0; j < sinifsayisi; j++) { net[j] = 0; }
		}
		cycle++;
	}
	delete net, o, d;
	return W;
}
double** MultiPenceptronDelta(koordinat* XY, int size, double** W, double c, int& cycle, double alpha = 1.0) {
	int sinifsayisi = GetClassNumber();
	int counter = 0;
	double* error = new double[sinifsayisi];
	double* o = new double[sinifsayisi];
	double* fnet = new double[sinifsayisi];
	double* d = new double[sinifsayisi];
	double* net = new double[sinifsayisi];
	double* x;
	double bias = 1.0;
	bool durum = true;
	for (int i = 0; i < sinifsayisi; i++) { net[i] = 0; }
	while (durum)
	{
		delete error;
		error = new double[sinifsayisi];
		for (int i = 0; i < sinifsayisi; i++) { error[i] = 0.0; }
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < sinifsayisi; j++)
			{
				net[j] += W[j][0] * XY[i].x1;
				net[j] += W[j][1] * XY[i].x2;
				net[j] += W[j][2] * bias;
			}
			for (int j = 0; j < sinifsayisi; j++)
			{
				d[j] = (j + 1 == XY[i].id) ? 1.0 : -1.0;
				o[j] = (2 / (1 + exp(alpha * -net[j]))) - 1;

			}
			for (int j = 0; j < sinifsayisi; j++)
			{
				net[j] = 0;
				fnet[j] = 0.5 * (1 - pow(o[j], 2));
				error[j] += 0.5 * pow((d[j] - o[j]), 2);
			}
			for (int j = 0; j < sinifsayisi; j++)
			{
				x = new double[3];
				x[0] = XY[i].x1;
				x[1] = XY[i].x2;
				x[2] = bias;
				W[j] = update_weight(W[j], 3, c, d[j], o[j], x, fnet[j]);
				delete x;
			}
		}
		cycle++;
		for (int i = 0; i < sinifsayisi; i++) {
			if (error[i] < 0.1) { counter++; }
		}

		if (counter == sinifsayisi) { break; }
		else { counter = 0; }
	}
	for (int i = 0; i < sinifsayisi; i++) {
		W[i][3] = error[i];
	}
	delete o, d, net, fnet, error;

	return W;
}
void multilayer(koordinat* XY, int size, double**& W, double**& V, double cw, double cv, int& cycle, double& error, int hiddensize, int classsize) {
	double* oj, * ok, * netj, * netk, * fnetj, * fnetk, * d;
	oj = new double[hiddensize + 1];
	ok = new double[classsize];
	netj = new double[hiddensize];
	netk = new double[classsize];
	fnetj = new double[hiddensize + 1];
	fnetk = new double[classsize];
	d = new double[classsize];
	double bias = -1.0;
	bool durum = true;
	for (int i = 0; i < hiddensize; i++) { netj[i] = 0; }
	for (int i = 0; i < classsize; i++) { netk[i] = 0; }
	while(durum)
	{
		error = 0;
		for(int i=0;i<size;i++)
		{
			for (int j = 0; j < hiddensize; j++)
			{
				d[j] = (j + 1 == XY[i].id) ? 1 : -1;
			}
			for(int j=0;j<hiddensize;j++)
			{
				netj[j] += V[0][j] * XY[i].x1;
				netj[j] += V[1][j] * XY[i].x2;
				netj[j] += V[2][j] * bias;
			}
			for (int j = 0; j < hiddensize; j++)
			{
				oj[j] = tanh(netj[j]);
			}
			oj[hiddensize] = bias;
			for (int j = 0; j < hiddensize+1; j++)
			{
				fnetj[j] = 0.5 * (1 - oj[j] * oj[j]);
			}
			for (int j = 0; j < classsize; j++)
			{
				for(int k=0;k<hiddensize+1;k++)
				{
					netk[j] += W[k][j] * oj[k];
				}
			}
			for(int j=0;j<classsize;j++)
			{
				ok[j] = tanh(netk[j]);
			}
			for (int j = 0; j < classsize; j++)
			{
				fnetk[j] = 0.5 * (1.0 - ok[j] * ok[j]);
			}
			for (int j = 0; j < classsize; j++)
			{
				error += 0.5 * (d[j] - ok[j]) * (d[j] - ok[j]);
			}
			for(int j=0;j<classsize;j++)
			{
				for(int k=0;k<hiddensize+1;k++)
				{
					W[k][j] += cw * (d[j] - ok[j]) * fnetk[j] * oj[k];
				}
			}
			for(int j=0;j<hiddensize+1;j++)
			{
				for(int k=0;k<classsize;k++)
				{
					V[0][j] += cv * XY[i].x1 * fnetj[j] * (d[k] - ok[k]) * fnetk[k] * W[j][k];
					V[1][j] += cv * XY[i].x2 * fnetj[j] * (d[k] - ok[k]) * fnetk[k] * W[j][k];
					V[2][j] += cv * bias * fnetj[j] * (d[k] - ok[k]) * fnetk[k] * W[j][k];
					
				}
			}
			for (int j = 0; j < hiddensize; j++) { netj[j] = 0; }
			for (int j = 0; j < classsize; j++) { netk[j] = 0; }
		}
		cycle++;
		if (error < 0.01) { durum = false; }
	}
	delete oj, ok, netj, netk, fnetj, fnetk, d;
}
int multilayershow(double** W, double** V, koordinat x, int classsize, int hiddensize, int norm) {
	double* oj, * ok, * netj, * netk, * fnetj, * fnetk;
	oj = new double[hiddensize + 1];
	ok = new double[classsize];
	netj = new double[hiddensize];
	netk = new double[classsize];
	fnetj = new double[hiddensize + 1];
	fnetk = new double[classsize];
	int color;
	double bias = -1;
	x.x1 /= norm;
	x.x2 /= norm;
	for (int i = 0; i < hiddensize; i++) { netj[i] = 0; }
	for (int i = 0; i < classsize; i++) { netk[i] = 0; }
	for(int i=0;i<hiddensize;i++)
	{
		netj[i] += V[0][i] * x.x1 + V[1][i] * x.x2 + V[2][i] * bias;
	}
	for(int i=0;i<hiddensize;i++)
	{
		oj[i] = tanh(netj[i]);
	}
	oj[hiddensize] = bias;
	for(int i=0;i<hiddensize+1;i++)
	{
		fnetj[i] = 0.5 * (1 - oj[i] * oj[i]);
	}
	for(int i=0;i<classsize;i++)
	{
		for(int j=0;j<hiddensize+1;j++)
		{
			netk[i] += W[j][i] * oj[j];
		}
	}
	for(int i=0;i<classsize;i++)
	{
		ok[i] = tanh(netk[i]);
	}
	int result = 0;
	double max = ok[0];
	for (int i = 0; i < classsize; i++) 
	{
		if(max<=ok[i])
		{
			result = i;
			max = ok[i];
		}

	}

	delete oj, ok, netj, netk, fnetj, fnetk;
	return result;


}