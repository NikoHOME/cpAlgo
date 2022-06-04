
#include <bits/stdc++.h> //standard library

#define ff first
#define ss second
#define pb push_back
#define pf push_front

#define popf pop_front

typedef unsigned int uint;
typedef long long ll;
typedef unsigned long long ull;

using namespace std; //standard library

int gcd(int a,int b)
{
    if(b==0) return a;
    else return(gcd(b,a%b));
}
int lcm(int a,int b)
{
    return a*b/gcd(a,b);
}

int main()
{
    return 0;
}
