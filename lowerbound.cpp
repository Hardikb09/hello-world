#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> vec;
    for(int i=0;i<n;i++)
    {
        int temp;
        vec.pb(temp);
    }
    int q;
    cin>>q;
    int y;
    for(int i=0;i<q;i++)
    {
        cin>>y;
        for(int k=0;k<n;k++)
        {
            if(vec[k]==y)
            cout<<"Yes "<<lower_bound(vec.begin(),vec.end(),y)-vec.begin();
            else
            {
                cout<<"No "<<lower_bound(vec.begin(),vec.end(),y)-vec.begin();
            }
            
        }
    }
}