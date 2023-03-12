#include <iostream>
using namespace std;

int main(){
	int tinggi, baris, kolom;
	cout<<"Tinggi Segitiga: ";
	cin>>tinggi;
	cout<<endl;
	baris=1;
	
	do{
		kolom=1;
		do {
			cout<<"*";
			kolom++;
		} while (kolom<=baris);
		cout<<endl;
		baris++;
	} while (baris<=tinggi);
}