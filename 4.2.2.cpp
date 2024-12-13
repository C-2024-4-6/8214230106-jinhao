#include <iostream>
using namespace std;
int parseHex(const char* const hexString) {
    int result = 0;
    for (int i = 0; hexString[i] != '\0'; i++) {
        char c = hexString[i];
        if (c >= '0' && c <= '9') {
            result = result * 16 + (c - '0');
        }
        else if (c >= 'a' && c <= 'f') {
            result = result * 16 + (c - 'a' + 10);
        }
        else if (c >= 'A' && c <= 'F') {
            result = result * 16 + (c - 'A' + 10);
        }
        else {
            return -1;
        }
    }
    return result;
}
int main() {
    const char* hexString = "A5";
    int result = parseHex(hexString);
    cout << result << endl;
    return 0;
}