#include<bits/stdc++.h>
#define pb push_back
#define ll long long int

using namespace std;

int mod=1e9+7;
ll mod_pow(ll num, ll pow, ll mod)
{
    ll test=1;
    while(pow)
    {
        if (pow & 1)
            test = (test * num) % mod;
        num = (num * num) % mod;
        pow>>=1;
    }
    return test;
}

bool check(int count[], int n, int k, int t)
{
    for(int i=k;i<=n;i++)
    {
        if(count[i]-count[i-k]<=t)
            return 1;
    }
    return 0;
}


int func_search(int n, int arr[], int t )
{
    int low,mid,high;
    low = 0;
    high = n;
    while(low<high)
    {
        mid = (low+high)/2;
        if(check(arr,n,mid,t))
            low=mid+1;
        high = mid - 1;
    }
    if(check(arr,n,low,t))
        return low;
    else
        return low-1;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

        int n,t;
        cin>>n>>t;
        int arr[n+1];
        arr[0]=0;
        for(int i=1;i<=n;i++)
            cin>>arr[i];
        for(int i=1;i<=n;i++)
        {
            arr[i] = arr[i] + arr[i-1];
        }
        int ans = func_search(n,arr,t);
        cout<<ans<<'\n';
    
}
