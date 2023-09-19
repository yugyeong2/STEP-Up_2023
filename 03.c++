#include <iostream>
using namespace std;

class Rectangle {
private:
    int width;
    int height;
public:
    void setDimensions(int w, int h) {
        width = w;
        height = h;
    }
    int getWidth() {
        return width;
    }
    int getHeight() {
        return height;
    }
};

void SetGet(Rectangle * r) {
    // width와 height 값을 입력 받아서 setDimensions()를 호출하여 rect 객체의 멤버 변수 값 설정
    // getWidth()와 getHeight() 함수를 각각 호출하여 너비와 높이를 출력
    Rectangle R;
    int w, h;

    cin >> w >> h;
    R.setDimensions(w, h);
    
    cout << R.getWidth() << ' ' << R.getHeight();
}

int main() {
    Rectangle rect;
    Rectangle* rectPtr = &rect;
    SetGet(rectPtr);
    return 0;
}