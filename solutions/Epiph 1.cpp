//Data Structure includes
#include<vector>
#include<stack>
#include<set>
#include<map>
#include<queue>
#include<deque>
#include<string>
#include<list>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cassert>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<sstream>
#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define FOR(i,a,b)              for(int i=a;i<b;i++)
#define FORs(i,a,b)             for(int i=a;i>=b;i--)
#define fill(a,v)               memset(a,v,sizeof a)
#define abS(x)                  ((x)<0?-(x):(x))
#define mP                      make_pair
#define pB                      push_back
#define error(x)                cout << #x << " : " << (x) << endl
#define ITER(i,a) for( typeof(a.begin()) i=a.begin();i!=a.end();i++)
#define mod 1000000007
#define MAXN 1000010
#define MP make_pair
#define INF mod
#define s(n)                        scanf("%d",&n)
#define sc(n)                       scanf("%c",&n)
#define sl(n)                       scanf("%lld",&n)
#define sf(n)                       scanf("%lf",&n)
#define ss(n)                       scanf("%s",n)
#define p(n)                        printf("%d",n)
#define pc(n)                       printf("%c",n)
#define pl(n)                       printf("%lld",n)
#define pf(n)                       printf("%lf",n)
#define ps(n)                       printf("%s",n)

using namespace std;

typedef long long LL;
typedef pair<int,int> PII;
typedef pair<LL,LL> PLL;
typedef pair<int,PII> TRI;
typedef vector<int> VI;
typedef vector<LL> VL;
typedef vector<PII> VII;
typedef vector<PLL> VLL;
typedef vector<TRI> VT;
typedef vector<VI> VVI;
typedef vector<VL> VVL;
typedef vector<VII> VVII;
typedef vector<VLL> VVLL;
typedef vector<VT> VVT;

void chekarre(int * arr,int n)
{
    cout<<"[";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<"]"<<endl;
}
inline int haint()
{
    int h;
    register char c=0;
    while (c<33) c=getchar();//getchar_unlocked();
    h=0;
    while (c>33)
    {
        h=h*10+c-'0';
        c=getchar();//getchar_unlocked();
    }
    return h;
}
int n, m ;
bool p[1000009];
int vp[1000009], pos=0;
void prime()
{
    int n=1000000;
    FOR(i,0,n+6)
    p[i]=true;
    p[0]=p[1]=false;    //shit happend ;-)
    for(int i=2; i<=sqrt(n+6)+1; i++)
        if(p[i])
            for(int j=2; i*j<=n+6; j++)
                p[i*j]=false;
    /*
    	for(int i=2; i<=n ;i++)
    		if(p[i])
    			vp[pos++]=i;
    */
}


bool chek(long long n)
{
    while(n)
    {
        int x=n%10;
        if(x==2 || x==3 || x==5 || x==7 )
        {
            n/=10;
        }
        else
            return false;

    }
    return true;
}
int is_prime(long long n)
{
    if(n==1)
        return 0;
    for (int i=2; i*i<=n; i++)
        if (n%i == 0)
            return 0;
    return 1;
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int i;
    int *pi=&i;
    scanf("%d",&pi);
    printf("%d",i);
    //	printf("%d",*pi);
    return 0;
}




















