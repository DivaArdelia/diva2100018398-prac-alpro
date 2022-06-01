using namespace std;

class Output {
public:
  void cetak() {
    cout << "Toko Kelontong\n";
    cout << "=========================\n";
    cout << "Data barang Anda : \n";
    cout << "id\t"<<"Nama barang\t"<<"Stock barang\t"<<endl;
    for(i=0;i<bnyk_data;i++){
      cout << id[i] << "\t" << nama_brg[i] << "\t\t" << stock[i] << endl;
    }
    cout << "\nBarang setelah diurutkan : ";
    cout << endl;
    cout << "id\t"<<"Nama barang\t"<<"Stock barang\t"<<endl;
    for(i=1;i<bnyk_data+1;i++){
      cout << id[i] << "\t" << nama_brg[i] << "\t\t" << stock[i] << endl;
    }
    cout<<"\nid yang dicari : "; cin>>cari;
    cout<<"Id barang : "<<cari<<endl;
    for(i = 0;i<=bnyk_data+1;i++){
      if(cari==id[i]){
          cout<<"Nama Barang : " << nama_brg[i] << endl; 
          cout<<"Jumlah Barang : "<< stock[i] << endl;
    }
  }
   }
  void getData(){
    ambil_data.open("api_data.txt");
    ambil_data >> bnyk_data;
    for(i = 0;i<bnyk_data;i++){
      ambil_data >> id[i] >> nama_brg[i] >> stock[i];
    }
    for(i=1;i<bnyk_data+1;i++){
      ambil_data >> id[i] >> nama_brg[i] >> stock[i];
    }
    ambil_data.close();
  }

private:
  ifstream ambil_data;
  string data_file[30];
  int bnyk_data,i,j;
  int cari;
  int id[10];
  int stock[50];
  string nama_brg[20];
  int index = 0;
};