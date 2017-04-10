#include <iostream>
#include <conio.h>

using namespace std;

//prototype//
void input();
void pilihanA();
void pilihanB();

//variable global//
int angka, jumlah, max, min, pilihan;

main () {
		while (pilihan != 6) {
				cout <<"==============================\n";
				cout <<"MENU\n";
				cout <<" 1. cari nilai terkecil\n";
				cout <<" 2. cari niali terbesar\n";
				cout <<" 3. keluar\n";
				cout <<"==============================\n";
				cout <<"pilihan: ";
				cin >> pilihan;
				
		if (pilihan == 1) {
				pilihanA(); 
		} else if (pilihan == 5) {
				pilihanB();
	}
		
}
}

void pilihanA() {
		int angka, jumlah, max, min;
		
		cout <<"1. mencari nilai terkecil. (jumlah angka ditentukan)" << endl;
		cout <<endl;
		cout <<"maukan jumlah angka: "; cin >> jumlah;
		cout <<endl;
		
		for (int i= 1; i <= jumlah; i++) {
		
		cout << "masukan angka : "; cin >> angka;
		
		if ( i== 1 ) {
				jumlah;
			min = angka;
			max = angka;
			}
			else if ( min > angka ) {
				min = angka;
			}
		   }
		   
		cout << endl;
		cout <<"nilai terkecil : " << min << endl;
		cout <<"jumlah : " << jumlah << endl;
		
	 }
	 
void pilihanB() {
			int angka, jumlah, max, min;
		cout <<"2. mencari nilai terbesar. (jumlah angka ditentukan))" <<endl;
		cout <<endl;
		cout <<"masukan jumlah angka: "; cin >> jumlah;
		cout <<endl;
		
		for (int i = 1; i <= jumlah; i++) {
			 
		cout <<"masukan angka : "; cin >> angka;
		
		if ( i == 1 ) {
			jumlah;
			min = angka;
			max = angka;
			}
			else if ( max < angka ) {
				max = angka;
			}
		   }
		   
		  cout << endl;
		  cout <<"nilai terbesar : " << max << endl;
		  cout << "jumlah : " << jumlah << endl;