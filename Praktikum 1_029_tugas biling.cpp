#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int jam_mulai, menit_mulai, detik_mulai,
		jam_selesai, menit_selesai, detik_selesai, 
		totalDetikMulai, totalDetikselesai,
		durasi, sisa, totalbiling, jam, menit, detik;
	
	cout<<"Menghitung Biaya  Penggunaan Biling"<<endl;
	cout<< "Masukkan waktu awal memulai biling"<<endl;
	cout<< "Jam : "; 
	cin >> jam_mulai;
	cout<< "Menit : "; 
	cin >> menit_mulai;
	cout<< "Detik : "; 
	cin >> detik_mulai;
	cout<< "===================" << endl;
	totalDetikMulai = (jam_mulai*3600) + (menit_mulai*60) + detik_mulai;
	
	cout<< "Masukkan waktu selesai menggunakan biling" << endl;
	cout<< "Jam : "; 
	cin >> jam_selesai;
	cout<< "Menit : "; 
	cin >> menit_selesai;
	cout<< "Detik : "; 
	cin >> detik_selesai;
	cout<< "===================" << endl;
	totalDetikselesai = (jam_selesai*3600) + (menit_selesai*60) + detik_selesai;
	durasi = totalDetikselesai - totalDetikMulai;
	
	jam = durasi/3600;
	sisa = durasi%3600;
	menit = sisa/60;
	detik = sisa%60;
	totalbiling = (jam*5000.0)+(menit*5000.0/60.0)+(detik*5000.0/3600.0);
	cout << endl;
	
	cout << "Waktu penggunaan Billing anda adalah= " << jam << " jam " << menit << " menit " << detik << " detik" << endl;
	cout << "total biling" <<totalbiling <<endl;
	
	return 0;
}
