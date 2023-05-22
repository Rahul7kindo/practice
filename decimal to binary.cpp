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
    while(sca!=0)
    {
        cnt++;
        sca/=2;
    }
    int arr[cnt];
    for(int i=0;i<cnt;i++)
    {
        arr[i]=n%2;
        n/=2;

    }
    for(int i=(cnt-1);i>=0;i--)
    {
        cout<<arr[i];
    }
    
    cout<<endl;

    return 0;
}

