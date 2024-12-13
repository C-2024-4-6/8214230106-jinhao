#include <iostream>
#include <cstring>
using namespace std;
int indexOf(const char* s1, const char* s2) {
    int len1 = strlen(s1), len2 = strlen(s2);
    for (int i = 0; i <= len2 - len1; ++i) {
        int j;
        for (j = 0; j < len1; ++j) {
            if (s2[i + j] != s1[j]) {
                break;
            }
        }
        if (j == len1) {
            return i; 
        }
    }
    return -1; 
}
int main() {
    char s1[100], s2[100];
    cout << "Enter the first string: ";
    cin.getline(s1, 100);
    cout << "Enter the second string: ";
    cin.getline(s2, 100);
    int pos = indexOf(s1, s2);
    if (pos != -1) {
        cout << "the position is: " << pos << endl;
    }
    else {
        cout << pos << endl;
    }
    return 0;
}