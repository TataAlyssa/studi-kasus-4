using namespace std;
class Output{
  public:
    void cetak(){
      cout << "Laporan keuangan selama " << bulan <<" bulan \n";
      for (int i=0; i<bulan; i++){
        cout << "Total Pengeluaran pada bulan ke-"<<i+1<<" = " <<pengeluaran[i];
        total_pengeluaran+=pengeluaran[i];
        cout << endl;
      }
      cout << "Total pengeluaran keseluruhan = " <<total_pengeluaran<<endl;
      cout << "Sisa tabungan yang tersisa = " << sisa_tabungan;
      
    }
    void getData(){
      ambil_data.open("apidata.txt");
      bool bnyk = true;
      bool bln = true;
      while(!ambil_data.eof()){
        if(bnyk){
        ambil_data>>sisa_tabungan;
        bnyk=false;
      }
      else if(bln){
        ambil_data>>bulan;
        bln=false;
      }
      else{
        while(!ambil_data.eof()){
          ambil_data>>pengeluaran[index];
          index += 1;
        }
      }
      }
      ambil_data.close();
    }
  private:
    ifstream ambil_data;
    int bulan, pengeluaran[30],total_pengeluaran,sisa_tabungan;
    int index = 0;
};
