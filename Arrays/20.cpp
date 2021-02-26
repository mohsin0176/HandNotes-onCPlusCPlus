#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<limits.h>
#include<iomanip.h>
using namespace std;

int main()
{
   
   int a[3][3];
   int i,g,gt=0;
   int rs[3]={0},cs[3]={0};
   cout<<"Enter value of A"<<endl;
   for (int i = 0; i < 3; ++i)
   {
   	for (int j = 0; j < 3; ++j)
   	{
   		cin>>a[i][j];
   	}
   }
   
   for (int i = 0; i < 3; ++i)
    {
    	for (int j = 0; j < 3; ++j)
    	{
    		rs[i]=rs[i]+a[i][j];
    		cs[j]=cs[j]+a[i][j];
    		gt=gt+a[i][j];
    	}
    } 

    cout<<"Matrix A"<<endl;
    for (int i = 0; i < 3; ++i)
    {
    	for (int j = 0; j < 3; ++j)
    	{
    		cout<<setw(4)<<a[i][j];
    	}
    	cout<<"|"<<rs[i]<<endl;
    } 
    cout<<"____________________________"<<endl;
    for (int i = 0; i < 3; ++i)
    {
    	cout<<setw(4)<<cs[i];
    }
    cout<<"|"<<gt;
	return 0;
}
