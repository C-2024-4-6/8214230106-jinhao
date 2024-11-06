#include<iostream>
using namespace std;
int m(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}
int n(int a, int b) {
    return a * (b / m(a, b));
}
int main() {
    int a, b, c, d;
    cout << "请输入第一个正整数 a: ";
    cin >> a;
    cout << "请输入第二个正整数 b: ";
    cin >> b;
    if (a <= 0 || b <= 0) {
        cout << "请输入正整数。" << endl;
    }
    c = m(a, b);
    d = n(a, b);
    cout << a << " 和 " << b << " 的最大公约数是: " << c << endl;
    cout << a << " 和 " << b << " 的最小公倍数是: " << d << endl;

    return 0;
}
  