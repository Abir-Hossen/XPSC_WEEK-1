#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n-1;i++)
  {
    cin>>arr[i];
  }   
  sort(arr,arr+n-1);
  int x;
  for(int i=0;i<n;i++)
  {
    if(i==n-1)
    {
        x=i+1;
        break;
    }
    if(arr[i]!=i+1)
    {
        x=i+1;
        break;
    }
  }
  cout<<x;
}