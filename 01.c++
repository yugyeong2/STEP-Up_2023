#include <iostream>
using namespace std;

class Tower {
    private:
        int Height;
    public:
        Tower() { Height = 1; }
        Tower(int h) { Height = h; }
        int getHeight() { return Height; }
};

int main() {
    Tower myTower; //1미터
    Tower seoulTower(100);
    cout << myTower.getHeight() << endl;
    cout << seoulTower.getHeight() << endl;
}