#include <string>
#include <iostream>
#include <cmath>

using namespace std;


class A{

};

class B{
private: int func1(){
        return 0;
    }

protected: int func3(){
        cout << 'else';
        return 'func3';
    }

public: int func2(){
        cout << func3();
        return 0;
    }
};


int main() {
    B * instance;
    instance = new B;
    cout << instance->func2();
}