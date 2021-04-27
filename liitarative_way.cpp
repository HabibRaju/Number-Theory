#include<bits/stdc++.h>
using namespace std;
void p(int n,int c=0,int sum=0,int k=0){
     k=n;
    while(n>=3){
        if(n%3!=0)
        {
            n--;
            c++;
        }
        else {
       n=n/3;
       sum+=n;
       n+=c;
       c=0;
    }
    }
    cout<<sum+k;
}
int main()
{
    int n;
    cin>>n;
    p(n);

}
