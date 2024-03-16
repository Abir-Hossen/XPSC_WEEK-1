#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int cnt=0;
     if(a>b)
     {
         cnt=a+(a-1);
     }
     else if(a<b)
     {
         cnt=b+(b-1);
     }
     else
        cnt=a+b;

    cout<<cnt;
}

