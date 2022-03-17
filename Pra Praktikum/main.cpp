#include<iostream>
using namespace std;
int main(){
	int pil;
	float bil1,bil2,hasil;
	
	cout<<"\tKalkulator dua bilangan"<<endl;
	cout<<"======================================="<<endl;
	cout<<"Pilihan : "<<endl;
	cout<<"1.Penjumlahan \n2.Pengurangan \n3.Perkalian \n4.Pembagian\n";
	cout<<endl;
	cout<<"bil 1 = "; cin>>bil1;
	cout<<"bil 2 = "; cin>>bil2;
	cout<<"Pilihan = "; cin>>pil;
	cout<<endl;
	if(pil==1){
		hasil = bil1 + bil2;
		cout<<bil1<<" + "<<bil2<<" = "<<hasil;
	}
	else if(pil==2){
		hasil = bil1 - bil2;
		cout<<bil1<<" - "<<bil2<<" = "<<hasil;
	}
	else if(pil==3){
		hasil = bil1 * bil2;
		cout<<bil1<<" x "<<bil2<<" = "<<hasil;
	}
	else if(pil==4){
		hasil = bil1 / bil2;
		cout<<bil1<<" : "<<bil2<<" = "<<hasil;
	}
	else{
		cout<<"Pilihan tidak tersedia"<<endl;
	}
	
	return 0;
}
