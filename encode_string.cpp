#include <bits/stdc++.h>
using namespace std;
void encoded(string &s,int j){
    int i=-1,n=s.size();
    while(i<n)
    {
        i+=j+1;
        s[i]+=2;
    }
}
int main(){
    string s;
    int j;
    getline(cin,s);
    cin>>j;
    encoded(s,j);
    cout<<s<<endl;
    return 0;
}
