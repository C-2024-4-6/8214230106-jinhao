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
    cout << "第一天猴子共摘了 " << total << " 个桃子。" << endl;
    return 0;
}