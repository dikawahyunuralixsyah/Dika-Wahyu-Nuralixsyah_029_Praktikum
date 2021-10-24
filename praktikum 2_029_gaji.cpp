#include<iostream>
using namespace std;
int main()
{
	string nama;
	char plh;
	int jam = 0, jml, total, sisa, sisa1;
		
	cout << "PT MAKMUR" << endl;
	cout << "Gaji Perminggu" << endl;
	cout << "================================ " << endl;	
	cout << "Nama Karyawan : "; 
	cin >> nama;
	cout << "Total Jam Kerja Dalam 1 Minggu= "; 
	cin >> jam;
	cout << "Masukkan Golongan(A/B/C/D) = "; cin >> plh;
	
	if (plh == 'A')
	{
		jml = 5000;
	}
	else if (plh == 'B')
	{
		jml = 7000;
	}
	if (plh == 'C')
	{
		jml = 8000;
	}
	else if (plh == 'D')
	{
		jml = 10000;
	}
	
	if (jam > 48)
	{
		sisa = jam - 48;
		sisa1 = jml * (jam-sisa);
		total = 4000 * sisa;
		jml = sisa1 + total;
	}
	else
	{
		jml = jml * jam;
	}	
	cout << endl;
	cout << "Nama Karyawan : " << nama << endl;
	cout << "Total Gaji : " << jml << endl;
}
