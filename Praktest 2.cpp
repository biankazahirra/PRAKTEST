#include <iostream>
using namespace std;
int main() {
	int angka;
	cin >> angka;
	switch (angka){
		case 1:
			cout << "Satu";
			break;
		case 2:
			cout << "Dua";
			break;
		case 3:
			cout << "Tiga";
			break;
		default:
			cout << "Bilangan lebih besar dari tiga";
	} return 0; 
}
