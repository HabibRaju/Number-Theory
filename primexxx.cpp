#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define db double
#define ull unsigned long long
#define MIN INT_MIN
#define MAX INT_MAX
#define Sort(x) sort((x).begin(), (x).end())
#define pb push_back
#define ii pair <int,int>
#define iii pair <int,ii>
#define pll pair <ll,ll>
#define plll pair <ll,pll>
#define ff first
#define ss second
#define minQueue priority_queue <int,vector<int>,greater<int> >
#define maxQueue priority_queue<int,vector<int>,less<int> >
#define pb push_back
#define max3(a,b,c) max(a, max(b,c))
#define min3(a,b,c) min(a, min(b,c))
#define GCD(x,y) __gcd((x), (y))
#define LCM(x,y) ((x / GCD((x), (y))) * y)
#define loop(a,n) for(int i=a; i<n; i++)
#define mem(x,y) memset((x), (y), sizeof (x));
#define Case int T; scanf("%d", &T); for(int cas = 1; cas <= T; ++cas)
#define pf printf
#define sf scanf
#define pr1(x) cout << x << endl
#define pr2(x,y) cout << x << ' ' << y << endl
#define powerOfTwo(x) (x && !(x & (x - 1)))
#define Iterator(type) type <int> :: iterator
#define mapIterator map <int,int> :: iterator //it->ff it->ss
#define FI freopen ("input.txt", "r", stdin)
#define FO freopen ("output.txt", "w", stdout)
using namespace std;

///_______converter______________________________________________________________________________________
//int intConvert(string s){
//    int n;
//    stringstream geek(s);
//    geek >> n;
//    return n;
//}

//string strConvert(int n){
//    string s;
//    stringstream ss;
//    ss << n;
//    s=ss.str();
//    return s;
//}


///***********BigMod************************************************************************************
//int StringMod(string num, int a){
//    int res = 0;
//    for (int i = 0; i < num.length(); i++)
//         res = (res*10 + (int)num[i] - '0') %a;
//    return res;
//}

//int BigMod(ll b,ll p, ll m){
//   if(p==0)return 1;
//   else if(p%2==1){
//        int part1=b%m;
//        int part2=BigMod(b,p-1,m);
//        return (part1*part2)%m;
//
//   }
//   else if(p%2==0){
//        int half=BigMod(b,p/2,m);
//        return (half*half)%m;
//   }
//}

//long long func(long long x,long long y){
//	if(y == 0)return 1;
//	else if(y % 2 == 0){
//		return func(x*x%1000000007,y/2);
//	}else{
//		return x*func(x,y-1)%1000000007;
//	}
//}

///BigMod (89, 14 ,2589)==1849
///StringMod(1956410986640441413344189841, 2589)==1849;

//string findSum(string str1, string str2) {
//    if (str1.length() > str2.length())
//        swap(str1, str2);
//    string str = "";
//    int n1 = str1.length(), n2 = str2.length();
//    reverse(str1.begin(), str1.end());
//    reverse(str2.begin(), str2.end());
//    int carry = 0;
//    for (int i=0; i<n1; i++) {
//        int sum = ((str1[i]-'0')+(str2[i]-'0')+carry);
//        str.push_back(sum%10 + '0');
//        carry = sum/10;
//    }
//    for (int i=n1; i<n2; i++) {
//        int sum = ((str2[i]-'0')+carry);
//        str.push_back(sum%10 + '0');
//        carry = sum/10;
//    }
//    if (carry)
//        str.push_back(carry+'0');
//    reverse(str.begin(), str.end());
//    return str;
//}

///_________________factorial___________________________________________________________________________

//int multiply(int x, int res[], int res_size);
//
//void factorial(int n){
//    int res[500];
//    res[0] = 1;
//    int res_size = 1;
//    for (int x=2; x<=n; x++)
//        res_size = multiply(x, res, res_size);
//    cout << "Factorial of given number is \n";
//    for (int i=res_size-1; i>=0; i--)
//        cout << res[i];
//}
//int multiply(int x, int res[], int res_size){
//    int carry = 0;
//    for (int i=0; i<res_size; i++){
//        int prod = res[i] * x + carry;
//        res[i] = prod % 10;
//        carry  = prod/10;
//    }
//    while (carry){
//        res[res_size] = carry%10;
//        carry = carry/10;
//        res_size++;
//    }
//    return res_size;
//}


//_________________________________________________________________________________________________________
 int sve[10000000];
 int prime[10000000];
 int i,j;

int  cnt=0;
 void seive(){
     for(i=3;i<=sqrt(10000000);i+=2){
        if(sve[i]==0){
            for(j=i*i;j<=10000000;j+=i){
                sve[j]=1;
            }

        }
     }
     prime[cnt++]=2;
     int cnt=0;
     for(i=3;i<=10;i++){
        if(sve[i]==0){
            cout<<i<<endl;
            ++cnt;
            prime[cnt++]=i;
        }
     }
 }
int main(){
    seive();


}

