#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    while(q--)
    {
        int x;
        cin>>x;
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            if(ar[i]==x)
            {
                flag=true;
            }
        }
        if(flag==true)
        {
            cout<<"Found"<<endl;
        }
        else
        {
            cout<<"Not found"<<endl;
        }
    }
    return 0;
}