#include <bits/stdc++.h>
using namespace std;
class student{
    int science;
    int maths;
    int eng;
    
    public:
    //constructor declaration
    student();
    friend void printnumber(student& st){
        cout<<"Science: "<<st.science<<endl;
        cout<<"maths: "<<st.maths<<endl;
        cout<<"English: "<<st.eng<<endl;
    }
};
//constructor intialization
student::student(){
    cout<<"Enter marks "<<endl;
    cin>>science;
    cin>>maths;
    cin>>eng;
}
int main() {
    student s;
    //setnumber(s);
    printnumber(s);
}
