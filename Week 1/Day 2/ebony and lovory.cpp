#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int cnt=0;
    for(int i=0;i<=c;i++)
    {
        for(int j=0;j<=c;j++)
        {
            if(((a*i)+(b*j))==c)
               {
                  cnt++;
                  break;
               }
        }
    }
    if(cnt)
    {
        cout<<"Yes";
    }
    else
        cout<<"No";
}
