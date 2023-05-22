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
    int sca=n;
    int res=0;
    int p=1;
    int cnt=0;
    while(n!=0)
    {
        res+=(p*(n%10));
        n/=10;
        p*=2;
    }
    cout<<res;
    
    cout<<endl;

    return 0;
}
