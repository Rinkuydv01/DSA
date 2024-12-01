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
    friend class spy;
};

class spy{
    public:
    void setdata(student &s){
        s.eng=34;
        s.mth=45;
        s.phy=56;
    }
    void getdata(student &s){
        cout<<s.eng<<endl;
        cout<<s.mth<<endl;
        cout<<s.phy<<endl;
    }
};

int main() {
    student s1;
    spy S;
    S.setdata(s1);
    S.getdata(s1);
}
