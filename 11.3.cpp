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
        for(int j=1;j<=(n-i);j++)
        {
            cout<<" ";
            
        }
        for(int j=1;j<=n;j++)
        {
            cout<<"*";
            
        }
        cout<<endl;
    }
    cout<<endl;



    return 0;
}
