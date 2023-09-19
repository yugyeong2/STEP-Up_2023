#include <iostream>
#include <string>
using namespace std;

class Person {
    string name;
    int a;
public:
    void setName(string n) { name = n; }
    void setAge(int a) { this->a = a; }
    string getName() { return name; }
    int age() { return this->a; }

};

int main() {
    Person person; //이름(name)과 나이(age) 속성을 가짐
    person.setName("John");
    person.setAge(25);
    
    cout << person.getName() << endl;
    cout << person.age() << endl;
    return 0;
}