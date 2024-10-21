// You are using GCC
#include <bits/stdc++.h>
using namespace std;

class student{
    int marks;
    public:
    void setmarks(int m){
        marks=m;
    }
    friend void afterIncrement(student s){
        cout<<"After Increment the marks are "<<s.marks+10;
    }
};
int main() {
    student st;
    int mrks;
    cin>>mrks;
    st.setmarks(mrks);
    afterIncrement(st);
    
}
