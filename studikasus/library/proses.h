using namespace std;

class Proses{
  public : 
    void cetak(){
      jumlah_uang=bulan * pemasukan;
      for(int i=0; i<bulan; i++){
        total_pengeluaran += pengeluaran[i];
      }
      sisa_tabungan=jumlah_uang - total_pengeluaran;

      cout << "Jumlah uang yang didapatkan selama "<<bulan<<" bulan = " << jumlah_uang<<endl;
      cout << "Total pengeluaran selama "<<bulan<<"bulan = "<<total_pengeluaran<<endl;
      cout << "Sisa tabungan = "<<sisa_tabungan<<endl;
    }
    void getData(){
      ambil_data.open("apidata.txt");
      bool bnyk = true;
      bool bln = true;
      while(!ambil_data.eof()){
        if(bnyk){
        ambil_data>>pemasukan;
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

    void toFile(){
      tulis_data.open("apidata.txt");
      tulis_data << sisa_tabungan <<endl;
      tulis_data << bulan <<endl;
      for(int i =0; i<bulan; i++){
        tulis_data << pengeluaran[i] << endl;
      }
      tulis_data.close();    

    }



    private : 
      ifstream ambil_data;
      ofstream tulis_data;
      int jumlah_uang;
      int pengeluaran[30];
      int total_pengeluaran; 
      int sisa_tabungan;
      int nabung;
      int pemasukan;
      int index = 0;
      int bulan;
};
