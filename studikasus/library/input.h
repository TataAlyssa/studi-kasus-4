using namespace std;

class Input {
	public :
		void cetak (){
			cout << " Menghitung total pengeluaran, pemasukan dan sisa uang jajan" <<endl;
			cout << " Masukan jumlah pemasukan : ";cin>>masuk;
			cout << " Masukan jangka waktu(bulan) yg ingin dihitung : ";cin>>bulan;
			for (int i = 0; i < bulan; i++)
			{
				cout << " Uang jajan bulan ke "<< i+1 << " = ";
				cin >>jajan[i];
				cout << " Uang kuliah bulan ke "<< i+1 << " = ";
				cin >> kuliah[i];
			}
			cout << "Pengeluaran setiap bulan adalah : "<< endl;
			for (int i=0;i<bulan; i++){
				pengeluaran[i]=jajan[i]+kuliah[i];
				cout << "Pengeluaran bulan ke-" <<i+1<<" = "<<pengeluaran[i]<<endl;

			}
		}
		void tofile(){
			tulis_data.open("apidata.txt");
			tulis_data << masuk <<endl;
			tulis_data << bulan <<endl;
			for (int i = 0; i < bulan; i++)
			{
				tulis_data << pengeluaran[i]<<endl;
			}
			tulis_data.close();
		}
		
	private :
		ofstream tulis_data;
		int masuk,bulan,jajan[30],kuliah[30],pengeluaran[30];
};
