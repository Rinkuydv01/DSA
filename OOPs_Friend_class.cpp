// You are using GCC
#include <bits/stdc++.h>
using namespace std;

class student{
    int maths;
    int science;
    int eng;
    public:
    friend class frnd;
    
};
class frnd{
    public:
    void setdata(student& st) {
            st.maths=50;
            st.science=240;
            st.eng=340;
    }
    void printdata(student& st){
            cout<<"Maths: "<<st.maths<<endl;
            cout<<"Science: "<<st.science<<endl;
            cout<<"English: "<<st.eng<<endl;
    }
    };

int main() {
    student s;
    frnd f;
    f.setdata(s);
    f.printdata(s);
}
