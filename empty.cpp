#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,t,r,v,u[100],uu;

int count(ll a[],ll n,ll m)
{
    ll table[m+1];

    memset(table,0,sizeof(table));

    table[0]=1;

    for(ll i=0;i<n;i++)
    {
        for(ll j=a[i];j<=m;j++)
        {
            table[j]+=table[j-a[i]];
        }
    }
    return table[m];
}

int mincoin(ll a[], ll n, ll m)
{
    ll table[m+1];
for(ll i=1;i<=m;i++)
table[i]=INT_MAX;
   // memset(table,INT_MAX,sizeof(table));
 table[0]=0;
    for(ll i=1;i<=m;i++)
    {
        for(ll j=0;j<n;j++)
        {
            if(a[j]<=i)
            {
                int sub_res=table[i-a[j]];
                if(sub_res!=INT_MAX&&sub_res<table[i])
                {
                    table[i]=sub_res+1;
                    if(i==m){
                u[uu]=i-a[j];uu++;}
                }
            }

        }

    }//cout<<table[-3]<<'\n';
    return table[m];
}

int main()
{
    cin>>n>>m;

    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
        r=mincoin(a,n,m);
    cout << "possible way are "<<count(a, n, m)<<" and minimum coins "<<r<<endl;
for(ll j=0;j<uu;j++){
    for(ll i=uu-1;i>=0;i--)
    {if(u[i]+u[j]==m)
        {cout<<u[i]<<' '<<u[j]<<'\n';return 0;}
    }

}}
