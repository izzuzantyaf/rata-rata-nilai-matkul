#include "mahasiswa.h"

int mahasiswa::inputJumlahMatkul() {

	cout << "Masukkan jumlah matkul (maks 10) : ";
	cin >> jumlahMatkul;

	return jumlahMatkul;
}

void mahasiswa::inputNilai() {
	
	for (int i = 0; i < jumlahMatkul; i++)
	{
		cout << "Masukkan nilai matkul " << i + 1 << " : ";
		cin >> matkul[i];
	}
}

float mahasiswa::hitungRata() {

	jumlahNilai = 0;

	for (int i = 0; i < jumlahMatkul; i++)
	{
		jumlahNilai += matkul[i];
	}

	return (float)jumlahNilai / jumlahMatkul;
}