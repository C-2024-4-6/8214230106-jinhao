#include <iostream>
using namespace std;
int main() {
    double m, n, b;
    char a;
    cout << "请输入一个符号:";
    cin >> a;
    cout << "请输入两个数字:";
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
            cout << "除数不能为0！";
        }
        break;
    case '%':
        if (n != 0) {
            cout << static_cast<int>(m) % static_cast<int>(n);
        }
        else {
            cout << "除数不能为0！";
        }
        break;
    default:
        cout << "错误: 无效的运算符！" << endl;
        break;
    }

    return 0;
}

