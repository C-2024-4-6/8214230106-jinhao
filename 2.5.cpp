#include <iostream>
#include<string>
using namespace std;
int main() {
    string c;
    int letter = 0;
    int space = 0;
    int digit = 0;
    int other = 0;
    cout << "请输入一行字符:" << endl;
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
    cout << "英文字母个数: " << letter << endl;
    cout << "空格个数: " << space << endl;
    cout << "数字字符个数: " << digit << endl;
    cout << "其他字符个数: " << other << endl;

    return 0;
}