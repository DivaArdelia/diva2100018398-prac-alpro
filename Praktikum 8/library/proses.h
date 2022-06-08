using namespace std;

class proses{
  public:
  void getData(){
    ambil_data.open("api_data.txt");
    ambil_data >> menu;
    string input[menu][3];
    for(i=0;i<menu;i++){
        ambil_data >> input[i][0] >> input[i][1] >> input[i][2];
    }
    ambil_data.close();

    
  }

  void toFile(){
    tulis_data.open("api_data.txt");
    tulis_data<<menu<<endl;
    string input[menu][3];
    for(i=0;i<menu;i++){
        tulis_data<<input[i][0]<<" "<<input[i][1]<<" "<<input[i][2]<<endl;
    }
    tulis_data.close();
  }

  private:
  ifstream ambil_data;
  ofstream tulis_data;
  int i,j;
  int menu, elemen;
 
  
};