
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

int main()
{
    int n=2048;
    bitset<4096> isPrime;
    isPrime.set();
    isPrime[0].flip(); 
    isPrime[1].flip();
    for (int i = 2; i <= n; i++) {
        if (isPrime.test(i) && i * i <= n) {
            for (int j = i * i; j <= n; j += i)
                isPrime[j].flip();
        }
    }
    return 0;
}
