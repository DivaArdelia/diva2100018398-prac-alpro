using namespace std;

class proses{
  public:
  void getData(){
    ambil_data.open("api_data.txt");
    ambil_data >> bnyk_data;
    for(i = 0;i<bnyk_data;i++){
      ambil_data >> id[i] >> nama_brg[i] >> stock[i];
    }
    ambil_data >> cari;
    ambil_data.close();
  }

  void toFile(){
    
    
    for(i = 0;i<=j;i++){
      if(cari==id[i]){
          cout << nama_brg[i] << "  "<< stock[i];
      }
    }
    
    tulis_data.open("api_data.txt");
    tulis_data << bnyk_data << endl;
    for(i = 0;i<bnyk_data;i++){
      tulis_data << id[i] <<"  "<< nama_brg[i]<<"  "<< stock[i]<< endl;
    }
    for(i=0;i<bnyk_data;i++){
      for(j=i+1;j<bnyk_data+1;j++){
        if(stock[i] < stock[j]){
          temp_id = id[i];
          id[i] = id[j];
          id[j] = temp_id;

          temp_nama = nama_brg[i];
          nama_brg[i] = nama_brg[j];
          nama_brg[j] = temp_nama;
          
          temp_stock = stock[i];
          stock[i] = stock[j];
          stock[j] = temp_stock;

        }
      }
      tulis_data<< id[i] <<"  "<< nama_brg[i]<<"  "<< stock[i]<< endl;
    }
    for(i = 0;i<=j;i++){
      if(cari==id[i]){
          tulis_data << nama_brg[i] << "  "<< stock[i];
      }
    }
    tulis_data.close();
  }
  private:
  ifstream ambil_data;
  ofstream tulis_data;
  int bnyk_data,i,j, temp_stock,a,b;
  int cari;
  int id[10];
  int stock[50];
  string nama_brg[20];
  int temp_id;
  string temp_nama;
  
};