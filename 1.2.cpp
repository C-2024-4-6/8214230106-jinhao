#include<iostream>
#define PI 3.14 
using namespace std;
int main() {
	double r, h, v;
	cout << "Բ׶�׵İ뾶Ϊ:";
	cin >> r;
	cout << "Բ׶�ĸ�Ϊ:";
	cin >> h;
	v = (1.0 / 3.0) * PI * r * r * h;
	cout << "Բ׶�����Ϊ:" << v << endl;
	return 0;
}