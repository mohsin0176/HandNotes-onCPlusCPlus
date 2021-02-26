#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<limits.h>
using namespace std;

int main()
{

    int a[2][3],b[3][2];
    int i,j;
    for (int i = 0; i < 2; ++i)
    {
    	for (int j = 0; j < 3; ++j)
    	{
    		cout<<"Enter Value"<<endl;
    		cin>>a[i][j];
    	}
    }

    for (int i = 0; i < 2; ++i)
    {
    	for (int j = 0; j < 3; ++j)
    	{
    		b[j][i]=a[i][j];
    	}
    }
    cout<<"Matrix A"<<endl;
    for (int i = 0; i < 2; ++i)
    {
    	for (int j = 0; j < 3; ++j)
    	{
    		cout<<a[i][j]<<endl;
    	}
    }
    cout<<"Matrix B"<<endl;
    for (int i = 0; i < 2; ++i)
    {
    	for (int j = 0; j < 3; ++j)
    	{
    		cout<<b[i][j];
    	}
    	cout<<endl;
    }
	return 0;
}
