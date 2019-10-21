#include <iostream>
#include <typeinfo>
#include "mahasiswa.h"

using namespace std;

int main() {

	mahasiswa mhs;

	int jumlahMatkul;

	jumlahMatkul=mhs.inputJumlahMatkul();

	if (typeid(jumlahMatkul).name()=="int" && jumlahMatkul>0 && jumlahMatkul<=10)
	{
		mhs.inputNilai();
		cout << endl << "Nilai rata-rata matkul : " << mhs.hitungRata() << endl;
	}
	else {
		cout << endl << "Error..." << endl;
	}
	

	return 0;
}