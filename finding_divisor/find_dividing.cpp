#include <iostream>

using namespace std;
int main() {
	int start, end;
	cout << "Hangi sayidan itibaren bolenleri kontrol edeceksiniz: ";
	cin >> start;
	cout << "Bitis sayisini girin: ";
	cin >> end;
	for (int i = start; i <= end; i++){ 
		cout << i << " sayisinin bolenleri: ";
		for (int a = 1; a <= i; a++) {
			if (i % a == 0) {
				cout << a << ", ";
			}
		}
		cout << endl;
	
	
	}

	cout << endl;
	return 0;
}