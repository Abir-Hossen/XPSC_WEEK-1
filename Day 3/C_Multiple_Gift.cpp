#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int a,b;
  cin>>a>>b;
  int cnt=0;
  long long sum=a;
  for(long long int i=a;sum<=b;i++)
  {
    cnt++;
    sum=sum*2;
  }   
  cout<<cnt;
}