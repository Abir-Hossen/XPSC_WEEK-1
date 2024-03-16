#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int cnt=0;
    int j=-1;
    for(int i=a;i<=b;i++)
    {
        if(i%c==0)
        {
            j=i;
            break;
        }
    }
    cout<<j;
}

