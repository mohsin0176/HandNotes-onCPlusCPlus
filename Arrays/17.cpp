#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<limits.h>
using namespace std;

int main()
{

     
    int n,i,j,temp;
    int a[n][n];
    cout<<"Enter Order of A matrix(n*n)"<<endl;
    cin>>n;
    cout<<"Enter Elements of Matrix A"<<endl;
    for (int i = 0; i < n; ++i)
    {
    	for (int j = 0; j < n; ++j)
    	{
    		cin>>a[i][j];
    	}
    } 
    cout<<"Matrix A"<<endl;
    for (int i = 0; i < n; ++i)
    {
    	for (int j = 0; j < n; ++j)
    	{
    		cout<<a[i][j];
    	} 
    	cout<<endl;
    }
    
    for (int i = 0; i < n; ++i)
    {
    	for (int j = 0; j < n; ++j)
    	{
    		temp=a[i][j];
    		a[i][j]=a[j][i];
    		a[j][i]=temp;
    	}
    }
    cout<<"Transpose of A Matrix"<<endl;
    for (int i = 0; i < n; ++i)
    {
    	for (int j = 0; j < n; ++j)
    	{
    		cout<<a[i][j];
    	} 
    	cout<<endl;
    }
	return 0;
}
