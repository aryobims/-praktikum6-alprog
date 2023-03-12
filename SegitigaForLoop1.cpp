#include <iostream>
using namespace std;

int main(){
	int tinggi, baris, kolom;
	cout<<"masukkan jumlah tinggi= ";
	cin>>tinggi;
	
	for(baris=1; baris<=tinggi; baris++) {
		for(kolom=1; kolom<=baris; kolom++) {
			cout<<"*";
		}
		cout<<endl;
	}
}