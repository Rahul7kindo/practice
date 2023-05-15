#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
#include<stack>
#include<queue>
#include<math.h>
using namespace std;



int main()
{   
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=i;k++)
        {
            cout<<"*";

        }
        for(int k=1;k<=(2*(n-i));k++)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<"*";

        }
        cout<<endl;
    }
    
    for(int i=1;i<=n;i++)
    {
        for(int k=n;k>=i;k--)
        {
            cout<<"*";
        }
        for(int k=2*n;k>=(2*(n-(i-1)));k--)
        {
            cout<<" ";
        }
        for(int k=n;k>=i;k--)
        {
            cout<<"*";
        }
        cout<<endl;

    }
    

    return 0;
}
