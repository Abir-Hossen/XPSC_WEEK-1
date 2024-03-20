#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++)
  {
    cin>>v[i];
  }  
 long long int sum=0; 
  for(int i=0;i<n;i++)
  {
    sum=sum+v[i];
  }
  if(sum%2==0)
  {
    cout<<sum;
  }
  else
  {
    int mn=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(v[i]%2==1)
        {
            if(v[i]<mn)
            {
                mn=v[i];
            }
        }
    }
    sum=sum-mn;
    cout<<sum;
  }

}