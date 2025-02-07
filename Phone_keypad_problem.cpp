// You are using GCC
#include <bits/stdc++.h>
using namespace std;

void solve(string digits,string output,int index,string map[],vector<string> &ans){
    if(index>=digits.length()){
        ans.push_back(output);
        return;
    }
    
    int num = digits[index]-'0';
    string value = map[num];
    
    for(int i=0;i<value.length();i++){
        output.push_back(value[i]);
        solve(digits,output,index+1,map,ans);
        output.pop_back();
    }
}

int main() {
    string digits;
    cin>>digits;
    
    string output;
    int index=0;
    vector<string>ans;
    
    string map[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    
    solve(digits,output,index,map,ans);
    
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
