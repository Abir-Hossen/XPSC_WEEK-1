#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int cnt=0,dif=0;
    for(int i=0;i<n;i++)
    {
       if(v[i]>(i+1+cnt))
       {
         dif=v[i]-(i+1+cnt);
         cnt=cnt+dif;
       }
    }
    cout<<cnt<<endl;
  }   
}