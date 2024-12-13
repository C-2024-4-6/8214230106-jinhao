#include<iostream>
using namespace std;
int main() {
	int* num = new int[10];
	int t;
	int count = 0;
	cout << "Enter ten numbers :";
	for (int i = 0; i < 10; i++) {
		cin >> t;
		bool flag = false;
		for (int j = 0; j < count; j++) {
			if (num[j] == t) {
				flag = true;
				break;
			}
		}
		if (!flag) {
			num[count] = t;
			count++;
		}
	}
	cout << "The distinct numbers are: ";
	for (int i = 0; i < count ; i++) {
		cout << num[i] << " ";
	}
	delete[] num;
	return 0;
}