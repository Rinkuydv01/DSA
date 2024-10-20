#include <bits/stdc++.h>
using namespace std;

int main() {
    deque<int>q;
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int element;
    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>element;
        q.push_front(element);
    }
    cout<<endl<<"Printing elements: ";
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop_front();
    }
    return 0;
}
