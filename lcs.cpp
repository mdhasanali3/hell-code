#include<bits/stdc++.h>
#define ll long
using namespace std;

main()
{
    ll n,t=0,x,r,v=0,a[100],b[100]={1};

    cin>>n;
    for(ll i=0;i<n;i++)
    cin>>a[i];


    for(ll i=1;i<=n;i++)
    {
        for(ll j=0;j<i;j++)
        {
            if(a[i]>a[j]&& b[j]+1>b[i])
            b[i]=b[j]+1;
            if(t<b[i])
            t=b[i];
        }
         for(ll k=0;k<n;k++)
            {
//                //cout<<b[k]<<" ";
               }
//         //cout<<endl;
    }


    x=t;
      for(ll i=n-1;i>=0;i--)
    {
        if(b[i]==x)
        {cout<<a[i]<<" ";x--;}
    }



cout<<"\n";


    for(ll i=n-1;i>=0;i--)
    {
        if(b[i]==t&&v==0)
        {cout<<a[i]<<" ";t--;v++;r=a[i];}
        if(b[i]==t&&(r+b[i]&1)){
            cout<<a[i]<<" ";t--;r=a[i];
        }
    }



}
