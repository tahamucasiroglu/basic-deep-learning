#pragma once
int classNumber = -1;//se�ilen class �n numaras�n� tutacak de�i�ken -1 verildi e�er se�ip yap�lmam��sa hata vericek
int size[7] = { 0,0,0,0,0,0,0 };//size[0] toplam di�erleri 1 2 3 4 diye giridyor
double* w, ** W, * v, ** V;//a��rl�klar
double norm;//koordinat normalizasyon sonucundaki de�er
int hiddenlayer = -1;
struct koordinat {
	double x1;
	double x2;
	int id;
}*p;


