#include <iostream>
using namespace std;
int main() {
    double a, b, c, sum;
    cout << "������a,b,c��ֵ:";
    cin >> a >> b >> c;
    sum = a + b + c;
    if (a + b > c && a + c > b && b + c > a) {
        cout << "����һ�������Σ�" << endl;
        cout << "�������ܳ�Ϊ:" << sum << endl;
        if (a == b || b == c || a == c) {
            cout << "����������һ�����������Ρ�" << endl;
        }
    }
    else {
        cout << "�ⲻ��һ��������!" << endl;
    }

    return 0;
}