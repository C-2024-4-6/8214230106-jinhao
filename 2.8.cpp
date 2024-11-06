#include<iostream>
#include <cmath> 
using namespace std;
int main() {
	double a, x, y;
	cout << "请输入a的值为:";
	cin >> a;
	x = a;
	do
	{
		y = x;
		x = (1.0 / 2.0) * (x + (a / x));
	} while (fabs(x - y) >= 1e-5);
	cout << "所求的平方根为:" << y << endl;
	return 0;
}
