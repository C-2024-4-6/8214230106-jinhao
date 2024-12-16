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
		cout << "坐标值为: " << x << "," << y << endl;
	}

};
int main() {
	Point point(60, 80);
	float i, j;
	cout << "请输入i,j的值:" << endl;
	cin >> i >> j;
	point.setPoint(i, j);
	point.display();
}
