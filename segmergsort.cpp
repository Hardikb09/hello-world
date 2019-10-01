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



ll n;
ll arr[2000000];
ll ans[2000000];
vector<int> vec;

void mergesort(int arr[],int low,int high)
{
    vec.clear();
    low = 0;
    high = n-1;

    if(low==high)
        vec.push_back(arr[low]);
    else
    {
        ll mid = (low+high)>>1;
        mergesort(arr, low,mid);
        mergesort(arr, mid+1,high);
    }
    //int i=0,j=0;
    sort(arr,arr+n);
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    //int arr[n];

    n=1;
    while(cin>>arr[n])
        n++;
    n--;

    mergesort(arr,0,n-1);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
