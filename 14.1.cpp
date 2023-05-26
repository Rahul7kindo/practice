#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
#include<stack>
#include<queue>
#include<math.h>
using namespace std;

int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n*fact(n-1);
}

int main()
{   
    int n;
    cin>>n;
    
    cout<<fact(n)<<endl;


    return 0;
}

