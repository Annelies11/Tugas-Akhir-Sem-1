#include <iostream>
/*
Tugas Akhir Semester 1
Nama : Aris Mahmudi
NPM  : 2113020015
Kelas: TI 1A
*/
using namespace std;

int main() {
	const int n_ipa[4] = {80,78,78,78}; //{matematika, biologi, fisika, kimia}					inisialisasi array tiap jurusan
	const int n_ips[4] = {80,78,80,78}; //{matematika, geografi, ekonomi, sosiologi}			untuk menentukan nilai minimal
	const int n_bhs[4] = {75,80,78,75};	//{matematika, b. indo, b. inggris, b. lain}			pada tiap jurusan
	string matpel[10] = {"Matematika\t", "Biologi\t\t", "Fisika\t\t", "Kimia\t\t", "Geografi\t", "Ekonomi\t\t", "Sosiologi\t", "Bahasa Indonesia", "Bahasa Inggris\t", "Bahasa Lainnya\t"};
	int n_plj[10], i;
	string nama, pilihan, saran, ulangi = "y";
	
	while(ulangi=="y"||ulangi=="Y") {			//perulangan while untuk mengulangi proses jika user ingin mengulanginya dengan mengetik y pada akhir layanan
	
		ulangi="n";
		cout<<"Nama : ";
		getline(cin, nama);
		cout<<"Kamu ingin masuk ke jurusan apa?\n(IPA/IPS/Bahasa) : "; cin>>pilihan;
		cout<<"Masukkan nilaimu pada tiap pelajaran ini : "<<endl;
		
		for(i = 0; i < 10; i++) {				//Perulangan untuk memasukkan nilai pelajaran
			cout<<matpel[i]<<" : ";				//pada tiap index array nilai pelajaran
			cin>>n_plj[i];
		}
		//Membandingkan isi index array dengan nilai tiap jurusan
		if(n_plj[0]>=n_ipa[0]&&n_plj[1]>=n_ipa[1]&&n_plj[2]>=n_ipa[2]&&n_plj[3]>=n_ipa[3]){
			saran="masuk jurusan IPA. Karena kamu unggul pada pelajaran Matematika, Biologi, Fisika, dan Kimia.";
		} else if(n_plj[0]>=n_ips[0]&&n_plj[4]>=n_ips[1]&&n_plj[5]>=n_ips[2]&&n_plj[6]>=n_ips[3]){
			saran="masuk jurusan IPS. Karena kamu unggul pada pelajaran Matematika, Geografi, Ekonomi, dan Sosiologi.";
		} else if(n_plj[0]>=n_bhs[0]&&n_plj[7]>=n_bhs[1]&&n_plj[8]>=n_bhs[2]&&n_plj[9]>=n_bhs[3]){
			saran="masuk jurusan Bahasa. Karena kamu unggul pada pelajaran Bahasa Indonesia, Bahasa Inggris, dan bahasa lainnya.";
		} else{
			saran="memilih jurusan yang kamu anggap cocok. Karena menurut klasifikasi kami keunggulanmu belum jelas.";
		}
		
		cout<<endl;
		cout<<"Hei, "<<nama<<". Kamu memilih "<<pilihan<<" untuk jurusanmu."<<endl;
		cout<<"Kami menyarankan kamu untuk "<<saran<<" Semoga kamu berkenan menerimanya.\n"<<endl;			//mengeluarkan saran dari hasil perbandingan
		cout<<"Apakah anda ingin mengulanginya lagi?(y/n)"<<endl; cin>>ulangi;
		system("CLS");
		cin.ignore();
	}
	cout<<"\nTerima kasih telah menggunakan layanan kami.\nCopyright 2021 - Aris Mahmudi\a"<<endl;
	return 0;
}
