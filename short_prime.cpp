#include<bits/stdc++.h>
using namespace std;
vector<int> v;
bool mark[1000007];
void raju(){
    int  n=1000007;
    int lim = sqrt(n)+7;
    mark[1]=1;
    v.push_back(2);

    for(int i=4; i<=n; i+=2)mark[i] = 1;
    for(int i=3; i<=n; i+=2){
        if(!mark[i]){
            v.push_back(i);
            if(i<=lim){
                for(int j=i*i; j<=n; j+=i){
                    mark[j]=1;
                }
            }
        }
    }
    for(int i=1; i<=n; i++){
        if(mark[i]==1)cout<<i<<endl;
    }

}
int main(){
    raju();
}
