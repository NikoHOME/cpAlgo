
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


struct edge
{
    int a, b, cost;
};

int n, m, v; // n-vertices medges
vector<edge> e;
const int INF = 1000000009;

void solve()
{
    vector<int> vec (n, INF);
    vec[v] = 0;
    while(1)
    {
        bool any = false;

        for (int j=0; j<m; ++j)
            if (vec[e[j].a] < INF)
                if (vec[e[j].b] > vec[e[j].a] + e[j].cost)
                {
                    vec[e[j].b] = vec[e[j].a] + e[j].cost;
                    any = true;
                }

        if (!any) break;
    }
auto
}



int main()
{
    return 0;
}
