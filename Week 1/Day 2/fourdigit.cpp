#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>stk;
    int num;
    cin>>num;
    int cnt=0;
    while(num)
    {
        int r=num%10;
        stk.push(r);
        cnt++;
        num=num/10;
    }
    cnt=4-cnt;
    string s(4,'0');

    for(int i=cnt;i<4;i++)
    {
        int d=stk.top();
        s[i]='0'+d;
        stk.pop();
    }
    cout<<s;

}
