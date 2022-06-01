using namespace std;

class Input {
public:
void cetak (){
  cout<<"Masukkan banyaknya data : "; cin >> bnyk_data;
  for(i=0;i<bnyk_data;i++){
    cout<<"Data ke-"<<i+1<<" : "<<endl;
    cout<<"Masukkan ID barang : "; cin>>id[i];
    cout<<"Masukkan nama barang : "; cin>>nama_brg[i];
    cout<<"Masukkan stock barang : "; cin>>stock[i];
  }
}
void toFile(){
  tulis_data.open("api_data.txt");
  tulis_data << bnyk_data << endl;
  for(i = 0;i<bnyk_data;i++){
      tulis_data << id[i] <<"  "<< nama_brg[i]<<"  "<< stock[i]<< endl;
    }
  tulis_data.close();
}
private:
ofstream tulis_data;
int bnyk_data,i;
int id[10];
string nama_brg[20];
int stock[50];
int cari;
};