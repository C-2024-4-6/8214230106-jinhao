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
    cout << "�������һ�������� a: ";
    cin >> a;
    cout << "������ڶ��������� b: ";
    cin >> b;
    if (a <= 0 || b <= 0) {
        cout << "��������������" << endl;
    }
    c = m(a, b);
    d = n(a, b);
    cout << a << " �� " << b << " �����Լ����: " << c << endl;
    cout << a << " �� " << b << " ����С��������: " << d << endl;

    return 0;
}
  