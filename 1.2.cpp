#include<iostream>
#define PI 3.14 
using namespace std;
int main() {
	double r, h, v;
	cout << "圆锥底的半径为:";
	cin >> r;
	cout << "圆锥的高为:";
	cin >> h;
	v = (1.0 / 3.0) * PI * r * r * h;
	cout << "圆锥的体积为:" << v << endl;
	return 0;
}