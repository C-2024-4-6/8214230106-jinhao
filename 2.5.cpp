#include <iostream>
#include<string>
using namespace std;
int main() {
    string c;
    int letter = 0;
    int space = 0;
    int digit = 0;
    int other = 0;
    cout << "������һ���ַ�:" << endl;
    getline(cin, c);
    for (int i = 0; i < c.size(); i++) {
        if (c[i] == '\n') {
            break;
        }
        if ((c[i] >= 'A' && c[i] <= 'Z') || (c[i] >= 'a' && c[i] <= 'z')) {
            letter++;
        }
        else if (c[i] == ' ') {
            space++;
        }
        else if (c[i] >= '0' && c[i] <= '9') {
            digit++;
        }
        else {
            other++;
        }
    }
    cout << "Ӣ����ĸ����: " << letter << endl;
    cout << "�ո����: " << space << endl;
    cout << "�����ַ�����: " << digit << endl;
    cout << "�����ַ�����: " << other << endl;

    return 0;
}