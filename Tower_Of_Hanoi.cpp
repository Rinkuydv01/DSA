#include <bits/stdc++.h>
using namespace std;

void tower_of_hanoi(int n,char source, char destination, char aux){
    if(n==0){
        return;
    }
    tower_of_hanoi(n-1,source,aux,destination);
    cout<<"move ring "<<n<<" from "<<source<<" to "<<destination<<endl;
    tower_of_hanoi(n-1,aux,destination,source);
}
int main() {
    int n;
    cin>>n;
    
    tower_of_hanoi(n,'A','C','B');
    return 0;
}
