#include<iostream>
#include <cmath> 
using namespace std;
int main() {
	double a, x, y;
	cout << "������a��ֵΪ:";
	cin >> a;
	x = a;
	do
	{
		y = x;
		x = (1.0 / 2.0) * (x + (a / x));
	} while (fabs(x - y) >= 1e-5);
	cout << "�����ƽ����Ϊ:" << y << endl;
	return 0;
}
