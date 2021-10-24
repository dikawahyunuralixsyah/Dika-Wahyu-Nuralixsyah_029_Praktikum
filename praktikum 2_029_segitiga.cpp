#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
float a,t,s,k,l;
cout<< "Menghitung Sisi Miring, Luas dan Keliling Segitiga Siku-Siku"<<endl;
cout<< "Masukkan Alas: ";
cin>> a;
cout<< "Masukkan Tinggi: ";
cin>> t;
{
s=sqrt((a*a)+(t*t));
k=a+t+s;
l=0.5*a*t;
cout<< "sisi miring : "<<s<<endl;
cout << " Luas = "<<l<<endl;
cout<< "keliling : "<<k<<endl;
}
getch;
}
