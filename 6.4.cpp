#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
#include<stack>
#include<queue>
#include<math.h>
using namespace std;



int main()
{   
    int row;
    cin>>row;
    int mark;

    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=(row-i+1);j++)
        {
            cout<<" ";
            mark=j;
        }
       
        while(mark<=row)
        {
            cout<<"*";
            mark++;
        }
        cout<<endl;
    }
    cout<<endl;

    
    

    return 0;
}
