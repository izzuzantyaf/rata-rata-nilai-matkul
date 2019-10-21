#pragma once

#include <iostream>

using namespace std;

class mahasiswa
{
public:
	int matkul[10],jumlahMatkul,jumlahNilai;

	int inputJumlahMatkul();
	void inputNilai();
	float hitungRata();
};

