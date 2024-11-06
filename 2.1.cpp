#include <iostream>
using namespace std;
int main() {
    char a;
    cout << "ÇëÊäÈëÒ»¸ö×Ö·û:" << endl;
    cin >> a;
    if (a >= 'a' && a <= 'z') {
        a -= 32;
        cout << a;
    }
    else {
        int b = a + 1;
        cout << b;
    }
    return 0;

}