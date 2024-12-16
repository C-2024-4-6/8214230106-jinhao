#include<iostream>
using namespace std;

class Time {
private: 
    int hour;
    int minute;
    int sec;

public: 
    void setTime(int h, int m, int s) {
        hour = h;
        minute = m;
        sec = s;
    }

    void showTime() {
        cout << hour << "£º" << minute << "£º" << sec << endl;
    }
};

int main() {
    Time t1;
    int h, m, s;
    cout << "Enter time (hour minute second): ";
    cin >> h >> m >> s; 
    t1.setTime(h, m, s); 
    t1.showTime(); 
    return 0;
}