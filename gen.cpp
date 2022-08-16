#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define pb push_back
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define ROF(i,a,b) for(int i=a;i>=b;i--)
using ll = long long;
int MOD=1000000007;

vector<double> t;
vector<bool> notPrime;
void totient(int calc);

void solve()
{
    int n = rand()%1000000;
    
    int calc = n;
    t.resize(n);
    notPrime.resize(n);
    if(calc>1)
    {
        t[1]=1;
        notPrime[1]=true;
    }

    totient(calc);
    ll ans=0;
    for(int i=1;i<=n/2;i++)
    {
        double totient = t[i];
        if(notPrime[i])
        totient=totient*i;

        ans+=totient;
        ans%=MOD;
    }

    ans*=2;//symmetry about y=x line
    ans%=MOD;
    ans-=1;//don't want to count (1,1) twice
    ans%=MOD;
    ans*=4;//4 quadrants
    ans%=MOD;
    ans+=4;//up down left right
    ans%=MOD;
    cout<<"Input: "<<n;
    cout<< endl<<"Output: "<<ans;

}

void totient(int calc)
{
    for(int i=2;i<calc;i++)
    {
        if(!notPrime[i])
        {
            t[i]=i-1;
            for(int j=2*i;j<calc;j+=i)
            {
                if(t[j]==0)
                t[j]=1;
                notPrime[j]=true;
                t[j]*=(1.0-1.0/i);
            }
        }
    }
}

 /*
    every time a prime is encountered, factor of(1-1/p) is pushed into totient of all numbers divisible by the prime
    and t of that prime is set to p-1. When totient of n is being evaluated in main, if it is not prime,
    a leading factor of n is multiplied
*/


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // #ifndef ONLINE_JUDGE
    //     freopen("input", "r", stdin);
    //     freopen("output", "w", stdout);
    //     freopen("error", "w", stderr);
    // #endif
    
    {
        solve();
    }
    return 0;
}