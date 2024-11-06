#include <iostream>
using namespace std;
int main() {
    double a, b, c, sum;
    cout << "请输入a,b,c的值:";
    cin >> a >> b >> c;
    sum = a + b + c;
    if (a + b > c && a + c > b && b + c > a) {
        cout << "这是一个三角形！" << endl;
        cout << "三角形周长为:" << sum << endl;
        if (a == b || b == c || a == c) {
            cout << "该三角形是一个等腰三角形。" << endl;
        }
    }
    else {
        cout << "这不是一个三角形!" << endl;
    }

    return 0;
}