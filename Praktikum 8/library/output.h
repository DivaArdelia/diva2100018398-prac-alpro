using namespace std;

class Output {
public:
  void cetak(){
    string input[menu][3];
    for(i=0;i<menu;i++){
        cout<<input[i][0]<<"\t"<<input[i][1]<<"\t\t"<<input[i][2]<<"\t\t"<<endl;
    }
    }

    void getData(){
      ambil_data.open("api_data.txt");
      ambil_data >> menu;
      string input[menu][3];
        for(i=0;i<menu;i++){
            ambil_data>>input[i][0]>>input[i][1]>>input[i][2];
        }
      ambil_data.close();
    }
private:
  ifstream ambil_data;
  string data_file[50];
  int menu;
  int elemen;
  int i,j;
  int index=0;
};