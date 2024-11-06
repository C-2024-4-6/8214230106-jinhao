#include <iostream>
#include <iomanip> 
using namespace std;
int main() {
    double f;
    cout << "请输入华氏温度: ";
    cin >> f;
    double c = (5.0 / 9.0) * (f - 32);
    cout << fixed << setprecision(2);
    cout << "摄氏温度为: " << c << "°C" << endl;
    return 0;
}