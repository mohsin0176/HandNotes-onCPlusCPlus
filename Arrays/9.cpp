#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{

    int i,j;
    int n[]={30,40,50,10,20};
    cout<<"Before Sorting"<<endl;
    for (int i = 0; i < 5; ++i)
    {
        cout<<n[i]<<endl;
    }
    for (int i = 0; i < 5-1; ++i)
    {
        for (int j = 0; j < 5-i-1; j++)
        {
            if (n[j]>n[j+1])
            {
               int t=n[j];
               n[j]=n[j+1];
               n[j+1]=t;
            }
        }
    } 
    cout<<"Afetr Sorting"<<endl;
    for (int i = 0; i < 5; ++i)
    {
        cout<<n[i]<<endl;
    }
	return 0;
}
