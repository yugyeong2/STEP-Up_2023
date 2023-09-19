#include <iostream>
using namespace std;

// max() 함수 구현
template <class T>
T max(T t[], int n) {
    T m = t[0];

    for(int i = 1; i < n; i++) {
        if(m < t[i]) {
            m = t[i];
        }
    }

    return m;
}

int main() {
    int x[] = {3, 4, 1, 5, 2};
    char c[] = {'e', 'a', 'c', 'd', 'b', 'f'};

    cout << max(x, 5) << " " << max(c,6) ;
}