#include<bits/stdc++.h>
using namespace std;

vector <int> v;
int p(int n){
     v.push_back(n);
     if(n==5)return 5;
     else return n+p(n+1);

}
int main()
{
    int n;
    cin>>n;
    p(n);
    cout<<v[v.size()-1];
    for(int i=v.size()-2; i>=0; i--){
        cout<<'+'<<v[i];
    }
    cout<<" = "<<p(n)<<endl;


}

