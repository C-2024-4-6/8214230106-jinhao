#include<iostream>
using namespace std;
bool is_prime(int m) {
	if (m == 2) return true;
	for (int i = 2; i < m; i++) {
		if (m % i == 0) {
			return false;
		}
	}
	return true;
}
int main() {
	int j = 0;
	int count = 0;
	for (int i = 2; j < 200; i++) {
		if (is_prime(i)) {
			cout << i << " ";
			j++;
			count++;
			if (count == 10) {  
				cout << endl;
				count = 0; 
			}
		}
	}
	return 0;
}