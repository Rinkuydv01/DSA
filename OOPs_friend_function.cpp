// // You are using GCC
// #include <bits/stdc++.h>
// using namespace std;

// class student{
//     int marks;
//     public:
//     void setmarks(int m){
//         marks=m;
//     }
//     friend void afterIncrement(student s){
//         cout<<"After Increment the marks are "<<s.marks+10;
//     }
// };
// int main() {
//     student st;
//     int mrks;
//     cin>>mrks;
//     st.setmarks(mrks);
//     afterIncrement(st);
    
// }


#include <bits/stdc++.h>
using namespace std;

class student{
    int eng;
    int mth;
    int phy;
    
    public:
    student(){
        eng=0;
        mth=0;
        phy=0;
    }
    friend void setdata(student& s){
        s.eng=95;
        s.mth=96;
        s.phy=97;
    }
    friend void getdata(student &s){
        cout<<s.eng<<endl;
        cout<<s.mth<<endl;
        cout<<s.phy<<endl;
        
    }
};

int main() {
    student s1;
    setdata(s1);
    getdata(s1);
}
