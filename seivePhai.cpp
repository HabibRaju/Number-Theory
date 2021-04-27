#include <bits/stdc++.h>
using namespace std;


int phai[1000007],mark[1000007];

void sivephai(int n){
    for(int i=1; i<=n; i++)phai[i] = i;
    memset(mark,0,sizeof(mark));
    phai[1] = 1;
    mark[1] = 1;
    for(int i=2; i<=n; i++){
        if(mark[i]==0){
            for(int j=i; j<=n; j+=i){
                mark[j] = 1;
                phai[j] = (phai[j]/i)*(i-1);
            }
        }
    }
    for(int i=1; i<=n; i++)cout<<i<<" "<<phai[i]<<endl;
}

int main(){

    sivephai(50);
}


