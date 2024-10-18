#include <bits/stdc++.h>
using namespace std;

void tower_of_hanoi(int n,char from,char to, char aux){
    //Base case
    if(n==0){
        return;
    }
    tower_of_hanoi(n-1,from,aux,to);
    //Printing Cases
    cout<<"Move ring "<<n<<" from "<<from<<" to "<<to<<endl;
    tower_of_hanoi(n-1,aux,to,from);
}
int main(){
    int n;
    cin>>n;
    
    tower_of_hanoi(n,'A','C','B');
    
    return 0;
}
