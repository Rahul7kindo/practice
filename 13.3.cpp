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
    int real=n;
    int res=0;
    while(n!=0)
    {
        res=((res*10)+(n%10));
        n/=10;
    }

    if(real==res)
    {
        cout<<"armstrong";
    }
    else
    {
        cout<<"non armstrong";
    }
    cout<<endl;


    return 0;
}