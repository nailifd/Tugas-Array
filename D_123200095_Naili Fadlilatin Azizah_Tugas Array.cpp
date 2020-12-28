#include <iostream>
using namespace std;
int main () {
	int deret, maksimum, minimum, selisih, angka, angka1, angka2, angka3, angka4, ratarata;{
		cout<<"Masukkan banyak angka :"; cin>>angka;
		cout<<"Angka ke - 1"; cin>>angka1;
		cout<<"Angka ke - 2"; cin>>angka2;
		cout<<"Angka ke - 3"; cin>>angka3;
		cout<<"Angka ke - 4"; cin>>angka4;
	}
	
	cout<<"______Hasil______\n";
	cout<<"Deret :"; cin>>angka1, angka2, angka3, angka4;
	cout<<"Maksimum :"; cin>>angka4;
	cout<<"Minimum :"; cin>>angka1;
	ratarata = angka1 + angka2 + angka3 + angka4/4;
	selisih = angka4 - angka1;
	cout<<"Rata-rata :"<<ratarata<<endl;
	cout<<"Selisih Max :"<<selisih<<endl;
	
	return 0;
	
}
