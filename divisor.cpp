#include<bits/stdc++.h>
using namespace std;
vector <int> v[100];
void divisor(int n){
    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j+=i){
            v[j].push_back(i);
        }
    }
}
int main(){
    int n,sum=0;
    cin>>n;
    divisor(n);
    for(int i=1; i<=n; i++){
        cout<<i<<"-> ";
        cout<<v[1][0];
        for(int j=1; j<v[i].size(); j++){
            cout<<"+"<<v[i][j];
            sum+=v[i][j];
        }
        cout<<" = "<<sum+1<<endl;
        sum=0;
    }

}
