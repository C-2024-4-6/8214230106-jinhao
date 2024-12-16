#include<iostream>
using namespace std;

class cuboid {
private:
    int length;
    int width;
    int height;
public:
    void input() {
        cout << "请输入 length, width, height: ";
        cin >> length >> width >> height;
    }
    int volume() {
        return length * width * height;
    }
    void print() {
        cout << "体积是: " << volume() << endl;
    }
};

int main() {
    cuboid cuboid1, cuboid2, cuboid3;
    cuboid1.input();
    cuboid2.input();
    cuboid3.input();
    cuboid1.print();
    cuboid2.print();
    cuboid3.print();
    return 0;
}