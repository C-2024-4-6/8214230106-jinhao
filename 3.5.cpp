#include <iostream>
using namespace std;
int peaches(int day) {
    if (day == 10) {
        return 1; 
    }
    else {
        return 2 * (peaches(day + 1) + 1); 
    }
}
int main() {
    int total = peaches(1); 
    cout << "��һ����ӹ�ժ�� " << total << " �����ӡ�" << endl;
    return 0;
}