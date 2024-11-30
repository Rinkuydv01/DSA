#include <bits/stdc++.h>
using namespace std;

int main() {
    ofstream out("Sample.txt");
    out<<"String 1"<<endl;
    out<<"String 2"<<endl;
    out<<564533<<endl;
    out.close();

    ifstream in("Sample.txt");
    string s;
    getline(in,s);
    cout<<s<<endl;
    getline(in,s);
    cout<<s<<endl;
    int a;
    in>>a;
    cout<<a<<endl;

    return 0;
}
