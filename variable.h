#pragma once
int classNumber = -1;//seçilen class ýn numarasýný tutacak deðiþken -1 verildi eðer seçip yapýlmamýþsa hata vericek
int size[7] = { 0,0,0,0,0,0,0 };//size[0] toplam diðerleri 1 2 3 4 diye giridyor
double* w, ** W, * v, ** V;//aðýrlýklar
double norm;//koordinat normalizasyon sonucundaki deðer
int hiddenlayer = -1;
struct koordinat {
	double x1;
	double x2;
	int id;
}*p;


