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

    int fi=3;
    int se=2;
    int th=1;


    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1 && j==fi)
            {
                cout<<"*";
                fi+=4;
            }
            else if(i==2 && j==se)
            {
                cout<<"*";
                se+=2;
            }
            else if(i==3 && j==th)
            {
                cout<<"*";
                th+=4;
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    cout<<endl;



    return 0;
}