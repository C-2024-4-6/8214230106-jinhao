#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int testUnint = 65534;
    cout << "Output in unsigned int type: " << testUnint << endl;
    cout << "Output in char type: " << static_cast<char>(testUnint) << endl;
    cout << "Output in short type: " << static_cast<short>(testUnint) << endl; // 为什么结果为-2?
    cout << "Output in int type: " << static_cast<int>(testUnint) << endl;
    cout << "Output in double type: " << static_cast<double>(testUnint) << endl;
    cout << "Output in double type (precision 4): " << setprecision(4) << static_cast<double>(testUnint) << endl;
    cout << "Output in Hex unsigned int type: " << hex << testUnint << endl; // 16进制输出
    cout << "Output in Oct unsigned int type: " << oct << testUnint << endl;
    double a = 123.456;
    int b = static_cast<int>(a);
    cout << b << endl;

    system("pause");
    return 0;
}