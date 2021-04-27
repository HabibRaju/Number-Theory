#include<bits/stdc++.h>
using namespace std;

vector <int> v;
int fact(int n){
     v.push_back(n);
    if(n==1)return 1;
    else return n*fact(n-1);
}
int main(){
    int n,x;
    cin>>n;
     x= fact(n);
    cout<<n<<"! = "<<v[0];
    for(int i=1; i<v.size(); i++){
        cout<<'*'<<v[i];
    }
    cout<<'.'<<endl<<"Answer = "<<x<<endl;
}
