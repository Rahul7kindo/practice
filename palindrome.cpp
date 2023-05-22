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

    int r=n;
	int cnt=0;
    int check=0;
    while(r!=0)
    {
       cnt++;
       r/=10;
    }
    int arr[cnt];
    for(int i=0;i<cnt;i++)
    {
       arr[i]=(n%10);
        n/=10;
    }
    for(int i=0;i<=((cnt-1)/2);i++)
    {
        if(arr[i]==arr[cnt-1-i])
        {
            check=1;
        }
        else
        {
            check=0;
            break;
        }
    }
    string yes="Yes";
    string no="No";
    if(check==0)
    {
        cout<<"no";
    }
    else
    {
        cout<<"yes";
    }
    cout<<endl;

    return 0;
}
