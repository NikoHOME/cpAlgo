
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

const int size=1024
const int treeSize=2048

int tree[treeSize];

int output;

int query1 (int a,int b)
{
    int output=0;
    a+=size;
    b+=size;
    while(a<b)
    {
        if(a&1)
        {
            output+=tree[a];
            ++a;        
        }
        if(!(b&1))
        {
            output+=tree[b];
            --b;
        }
        a<<=1;
        b<<=1;
    }
    if(a==b) output+=tree[a];

    return output;
}

void add1 (int a,int val)
{
    a+=size;
    while(a!=0)
    {
        tree[a]+=val;
        a<<=1;
    }
}


int output;

void push(int w)
{
	int a=tree[w][1];
	tree[w*2][0]*=a;
	tree[w*2][1]*=a;
	tree[w*2+1][0]*=a;
	tree[w*2+1][1]*=a;
	tree[w][1]=1;
}

void add2 (int w, int p, int k, int x, int y, int val)
{
	if (k<x || p>y) return;
	if (p>=x && k<=y)
	{
		tree[w][0]*=val;
		tree[w][1]*val;
		return;
	}
	push(w); //before coming down update
	add(w*2,p,(p+k)/2,x,y,val);
	add(w*2+1,(p+k)/2+1,k,x,y,val);
	tree[w][0]=tree[w*2][0]+tree[w*2+1][0]; //update the node
}

void query2(int w, int p, int k, int x, int y)
{
	if (k<x || p>y) return;
	if (p>=x && k<=y) 
	{
		output+=tree[w][0];
		return;
	} 
	push(w); //before coming down update
	query(w*2,p,(p+k)/2,x,y);
	query(w*2+1,(p+k)/2+1,k,x,y);
}



int main()
{
    return 0;
}
