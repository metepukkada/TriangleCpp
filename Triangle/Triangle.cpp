#include <iostream>

using namespace std;

int main() {
	cout << "Bir Deger Giriniz:";
	int input;
	cin >> input;
	cout << "Bir Sembol Giriniz:";
	string inputSymbol;
	cin >> inputSymbol;
	for(int i= 1 ; i <= input ; i++ ){
		for (int j = 1; j <= i; j++) {
			cout << inputSymbol;
		}
		cout << "" << endl;
	}


	return 0;

}