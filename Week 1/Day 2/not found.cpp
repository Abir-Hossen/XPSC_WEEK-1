#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int arr[26]= {0};
    char c;
    int cnt=0;
    int l=s.length();
    for(int i=0; i<l; i++)
    {
        arr[s[i]-'a']++;

    }
    for(int i=0; i<26; i++)
    {
        if(arr[i]==0)
        {
            c=char('a'+i);
            cnt++;
            break;
        }
    }
    if(cnt)
    {
        cout<<c;
    }
    else
    cout<<"None";
}

