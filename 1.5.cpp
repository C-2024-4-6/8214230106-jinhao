#include <iostream>
#include <iomanip> 
using namespace std;
int main() {
    double f;
    cout << "�����뻪���¶�: ";
    cin >> f;
    double c = (5.0 / 9.0) * (f - 32);
    cout << fixed << setprecision(2);
    cout << "�����¶�Ϊ: " << c << "��C" << endl;
    return 0;
}