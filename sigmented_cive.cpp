#include<bits/stdc++.h>
typedef long long int ll;
#define pi acos(-1.0)
using namespace std;

int main()
{
    ll t;
    scanf("%lld",&t);
    while(t--){
        double x, y;
        scanf("%lf", &x);
        x*=8;
        y = x/(6.0-pi);
        y = sqrt(y);
        printf("%0.8lf\n", y);
    }

    return 0;
}
