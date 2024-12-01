// You are using GCC
#include <bits/stdc++.h>
using namespace std;

class Base{
    public:
    virtual void f1() {
        cout<<"Base1";
    }
    virtual void f2(){
        cout<<"Base2";
    }
    virtual void f3(){
        cout<<"Base3";
    }
};

class Derived:public Base{
    public:
    void f1(){
        cout<<"Derived 1"<<endl;
    }
    void f2(){
        cout<<"Derived 2"<<endl;
    }
    void f3(){
        cout<<"Derived 3"<<endl;
    }
};

int main() {
    
    Base *ptr;
    Derived d;
    ptr=&d;
    
    ptr->f1();
    ptr->f2();
    ptr->f3();
    
    return 0;
}
