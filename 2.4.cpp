#include <iostream>
using namespace std;
int main() {
    double m, n, b;
    char a;
    cout << "������һ������:";
    cin >> a;
    cout << "��������������:";
    cin >> m >> n;
    switch (a) {
    case '+':
        b = m + n;
        cout << b;
        break;
    case '-':
        b = m - n;
        cout << b;
        break;
    case '*':
        b = m * n;
        cout << b;
        break;
    case '/':
        if (n != 0) {
            cout << static_cast<int>(m) / static_cast<int>(n);
        }
        else {
            cout << "��������Ϊ0��";
        }
        break;
    case '%':
        if (n != 0) {
            cout << static_cast<int>(m) % static_cast<int>(n);
        }
        else {
            cout << "��������Ϊ0��";
        }
        break;
    default:
        cout << "����: ��Ч���������" << endl;
        break;
    }

    return 0;
}

