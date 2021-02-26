#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<limits.h>
using namespace std;

int main()
{

    int a[2][3],b[2][3],c[2][3];
    int i,j;
    cout<<"Matrix A"<<endl;
    for (int i = 0; i < 2; ++i)
    {
    	for (int j = 0; j < 3; ++j)
    	{
    		cin>>a[i][j];
    	}
    }
    cout<<"Matrix B"<<endl;
    for (int i = 0; i < 2; ++i)
    {
    	for (int j = 0; j < 3; ++j)
    	{
    		cin>>b[i][j];
    	}
    } 

    cout<<"Matrix C"<<endl;
    for (int i = 0; i < 2; ++i)
    {
    	for (int j = 0; j < 3; ++j)
    	{
    		c[i][j]=a[i][j]+b[i][j];
    	}
    }
    cout<<"Addited Matrix"<<endl;
    for (int i = 0; i < 2; ++i)
    {
    	for (int j = 0; j < 3; ++j)
    	{
    		cout<<c[i][j];
    	}
    	cout<<endl;
    }
	return 0;
}
