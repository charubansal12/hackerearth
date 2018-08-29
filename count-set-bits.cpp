#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cnt,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cnt = 0;
        while(n)
        {
            n&=(n-1);
            cnt++;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}