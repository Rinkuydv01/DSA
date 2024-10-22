#include <bits/stdc++.h>
using namespace std;
class student{
    int science;
    int maths;
    int eng;
    
    public:
    //constructor declaration
    student(int a,int b, int c);
    //another constructor declaration
    student(int a);
    friend void printnumber(student& st){
        cout<<"Science: "<<st.science<<endl;
        cout<<"maths: "<<st.maths<<endl;
        cout<<"English: "<<st.eng<<endl;
    }
};
//parameterized constructor 
student::student(int a,int b,int c){
    science=a;
    maths=b;
    eng=c;
    
}
//constructor overloading
student::student(int a){
    science=a;
    maths=0;
    eng=0;
}
int main() {
    student s(60,90,95);
    printnumber(s);
    //constructor overloading
    cout<<"Another constructor invoked"<<endl;
    student s2(50);
    printnumber(s2);
}
