using namespace std;

class Input {
public:
void cetak (){
  cout<<"Masukkan Jumlah Data\t: "; cin>>menu;
  cout<<endl;
  string input[menu][3];
  for(int i=0; i<menu; i++){
    cout<<"Data ke-"<<i+1<<endl;
    for(int j=0; j<3; j++){
      if(j==0)
        cout<<"Masukkan Nama barang : ";
      else if(j==1)
        cout<<"Masukkan Stok barang : ";
      else 
        cout<<"Masukkan Harga barang : ";

      cin>>input[i][j];
    }
  }
    cout<<"Total penjualan\n";
    cout<<"|====================================|\n";
    cout<<"|Nama\t|"<<"|Stok\t|"<<"|Harga Satuan\t|"<<endl;
    cout<<"|====================================|\n";
   for(int i=0;i<menu;i++){
        cout<<input[i][0]<<"\t"<<input[i][1]<<"\t\t"<<input[i][2]<<"\t\t"<<endl;
    }
}

void toFile(){
  tulis_data.open("api_data.txt");
  tulis_data << menu << endl;
  string input[menu][3];
  for(int i=0; i<menu; i++){
      tulis_data<<input[i][0]<<" "<<input[i][1]<<" "<<input[i][2];
  }
  tulis_data.close();
}

private:
ofstream tulis_data;
int menu;
int elemen;
};