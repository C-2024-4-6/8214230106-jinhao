#include<iostream>
using namespace std;
class Point
{
public:
	float x;
	float y;
	Point(float X, float Y) {
		x = X;
		y = Y;
	}
	void setPoint(float i, float j) {
		x += i;
		y += j;
	}
	void display() {
		cout << "����ֵΪ: " << x << "," << y << endl;
	}

};
int main() {
	Point point(60, 80);
	float i, j;
	cout << "������i,j��ֵ:" << endl;
	cin >> i >> j;
	point.setPoint(i, j);
	point.display();
}
