#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
#include<stack>
#include<queue>
#include<math.h>
using namespace std;



int main()
{   
    int row,col;
    cin>>row>>col;

    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if(j==1 || j==col || i==1 || i==row)
            {
                cout<<"*";

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