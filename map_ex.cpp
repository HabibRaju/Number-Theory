#include<bits/stdc++.h>
using namespace std;
map <int,int > mp;
vector <long long int> v;
int mark[100000000];
void raju()
{
    int lim = sqrt(1000000)+7;
    mark[1] = 1;
    v.push_back(2);
    for(int i=4; i<=lim; i+=2)
    {
        mark[i]=1;
    }
    for(int i=3; i<=lim; i+=2)
    {
        if(!mark[i])
        {
            v.push_back(i);
            if(i<=lim)
            {
                for(int j=i*i; j<=lim; j+=i)
                {
                    mark[j]=1;
                }
            }
        }
    }
}
void doMap()
{
    int len= v.size();
    for(int i=0; i<len; i++)
    {
        mp[v[i]*v[i]]=1;
    }
}
int main()
{
    raju();
    doMap();
    long long int k,x;
    cin>>k;
    while(k--)
    {
        cin>>x;


        if(mp[x]==1)cout<<"YES"<<endl;

        else cout<<"NO"<<endl;

    }

}

