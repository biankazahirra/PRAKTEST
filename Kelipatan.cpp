#include <iostream>
using namespace std;
int main() {
	
	int a,b,kelipatan;
	cin >> a >> b;
	for(kelipatan = a; kelipatan <= b; kelipatan = kelipatan + a){
		cout << kelipatan << endl;
	}
}
