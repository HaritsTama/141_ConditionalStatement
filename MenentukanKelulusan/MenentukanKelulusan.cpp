#include <iostream>
using namespace std;

int main()
{

	//Siswa mempunyai 2 nilai = Matematika dan Fisika
	//Kemudian menghitung reratanya, jika rerata lebih dari 60 lulus
	//Atau nilai matematika lebih dari 70, lulus
	//Jika tidak keduanya maka tidak lulus

	float nMtk, nFsk, nRerata;
	string status;

	cout << "Masukan Nilai Matematika = ";
	cin >> nMtk;
	cout << "Masukan Nilai Fisika = ";
	cin >> nFsk;

	nRerata = (nMtk + nFsk) / 2;

	if (nRerata >= 60) {
		status = "Lulus Rerata";
	}

	else if (nMtk >= 70) {
		status = "Lulus Nilai Matematika";
	}

	else
	{
		status = "Tidak Lulus";
	}

	cout << "Anda dinyatakan = " << status << endl;

	system("pause");


}