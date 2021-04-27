#include<bits/stdc++.h>
using namespace std;
vector <int> v;
int main(){
    int p;
    cin>>p;
    while(p--){
    int n,x;
    cin>>n;
    x=sqrt(n);
    for(int i=1; i<=x; i++){
        if(n%i==0){
        v.push_back(i);
        int l=n/i;
        if(l==i)continue;
        else v.push_back(l);
        }
    }
    if(v.size()==3)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    v.clear();
    }
}

