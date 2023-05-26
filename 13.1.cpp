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
    int check=0;

    for(int i=2;i<(sqrt(n));i++)
    {
        if((n%i)==0)
        {
            check=1;
            cout<<"non prime";
            break;
        }
    }
    if(check==0)
    {
        cout<<"prime";
    }
    cout<<endl;




    return 0;
}