#include<iostream>
using namespace std;
int main() {
	double* num = new double[10];
	for (int i = 0; i < 10; i++) {
		cin >> num[i];
	}
	for (int i = 0; i < 9; i++) {
		for (int j = 0 ; j < 9; j++) {
			if (num[j] > num[j+1]) {
				double t = num[j];
				num[j] = num[j+1];
				num[j+1] = t;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		cout << num[i] << " ";
	}
	return 0;
}