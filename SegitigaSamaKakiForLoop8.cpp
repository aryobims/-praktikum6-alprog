#include<iostream>
using namespace std;

int main(){
	int tinggi, baris, kolom;
	cout<<"Masukan jumlah tinggi= ";
	cin>>tinggi;
	for(baris=1; baris<=tinggi; baris++) {
		for(kolom=tinggi; kolom>baris; kolom--) {
			cout<<" ";
		}
		for(kolom=1; kolom<=baris; kolom++) {
			cout<<"*";
		}
		cout<<endl;
	}	
	for(baris=2; baris<=tinggi; baris++) {
		for(kolom=1; kolom<baris; kolom++) {
			cout<<" ";
		}
		for(kolom=tinggi; kolom>=baris; kolom--) {
			cout<<"*";
		}
		cout<<endl;
	}
}