#include <iostream>
using namespace std;

class Shape {
public:
    int width;
    int height;

    virtual int area() {
        return width * height;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }
    virtual int area() {
        return width * height;
    }
};

int main() {
    Rectangle rect(5, 3);
    cout << rect.width << " " << rect.height << " " << rect.area() ;
    }