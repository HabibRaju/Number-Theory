#include<bits/stdc++.h>
using namespace std;

int StringMod(string num, int a){
    int res = 0;
    for (int i = 0; i < num.length(); i++)
         res = (res*10 + (int)num[i] - '0') %a;
    return res;
}
int BigMod(int b,int p, int m){
   if(p==0)return 1;
   else if(p%2==1){
        int part1=b%m;
        int part2=BigMod(b,p-1,m);
        return (part1*part2)%m;

   }
   else if(p%2==0){
        int half=BigMod(b,p/2,m);
        return (half*half)%m;
   }
}
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    cout<<BigMod(x,y,z);
    return 0;
}

///BigMod (89, 14 ,2589)==1849
///StringMod(1956410986640441413344189841, 2589)==1849;
