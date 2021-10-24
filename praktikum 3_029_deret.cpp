#include<iostream>
#include<conio.h>
using namespace std;

main(){
	int a=1, b, c, jml=0, i, n;
	
	cout<<"Menghitung Jumlah Deret"<<endl;
	
	cout<<"Masukkan Bilangan Awal : ";
	cin>>a;
	cout<<"Masukkan Beda : ";
	cin>>b;
	cout<<"Masukkan Jumlah Sampai Deret Ke-n = ";
	cin>>n;
	
	cout<<"Deret ke-"<<n<<" = ";
	 cout<<a<<",";
    jml=jml+a; 
    for(i=0; i<n-1; i++){
        c=a+b;
        a=c;
        cout<<c<<",";
    	jml=jml+c;                      
    }
     
    cout<<"Jumlah deret ke-"<<n<<" = ";
    cout<<jml; 
     
    getch();
    return 0;    
}
