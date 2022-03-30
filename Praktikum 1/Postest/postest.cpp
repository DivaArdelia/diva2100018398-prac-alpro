#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

class jarak {
	friend istream& operator >> (istream&, jarak&);
	friend ostream& operator << (ostream&, const jarak&);

public:
	jarak();
	void hitung(){
	     AB = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
	};
private:
    float x1,y1,x2,y2;
    float AB;
};

jarak::jarak(){
	cout << "mencari jarak antara titik A(x1,y1) dan B(x2,y2)\n" << endl;
	}
istream& operator >>(istream& cin, jarak& masukan){
    cout << "Nilai titik A " <<endl;
    cout << "Masukkan nilai x1 : ";   cin >> masukan.x1;
    cout << "Masukkan nilai y1 : ";   cin >> masukan.y1;
    cout << "Nilai titik B " <<endl;
    cout << "Masukkan nilai x2 : ";   cin >> masukan.x2;
    cout << "Masukkan nilai y2 : ";   cin >> masukan.y2;
    cout<<endl;

	return cin;
}

ostream& operator << (ostream& out, const jarak& keluaran){
    out<< "jarak antara titik tersebut adalah : " <<keluaran.AB<<endl;

	return out;
}
main(){
	jarak titik;
	cin>>titik;
	titik.hitung();
	cout<<titik;
	
	getch();
}
