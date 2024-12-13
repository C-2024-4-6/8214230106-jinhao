#include<iostream>
using namespace std;
int main() {
	bool* box = new bool[100];
	for (int i = 0; i < 100; i++) {
		box[i] = false;
	}
	for (int i = 1; i <= 100; i++) { 
		for (int j = i - 1; j < 100; j += i) { 
			box[j] = !box[j]; 
		}
	}

	for (int i = 0; i < 100; i++) {
		if (box[i] == true) {
			cout << i + 1 << " ";
		}
	}
	delete[] box;
	return 0;
}