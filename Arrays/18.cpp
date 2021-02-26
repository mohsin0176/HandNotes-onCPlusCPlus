#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<limits.h>
using namespace std;

int main()
{
   
   int a[2][3],b[3][2],c[2][2];
   int i,j,k;
   cout<<"Enter Value of Matrix A"<<endl;
   for (int i = 0; i < 2; ++i)
       {
       	for (int j = 0; j < 3; ++j)
       	{
       		cin>>a[i][j];
       	}
       } 

       cout<<"Enter Value of Matrix B"<<endl;
    for (int i = 0; i < 2; ++i)
          {
          	for (int j = 0; j < 3; ++j)
          	{
          		cin>>a[i][j];
          	}
          }  

    for (int i = 0; i < 2; ++i)
     {
     	for (int j = 0; j < 2; ++j)
     	{
     		c[i][j]=0;
     		for (int k = 0; k < 3; ++k)
     		{
     			c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
     		}
     	}
     } 

     cout<<"Matrix A"<<endl;
     for (int i = 0; i < 2; ++i)
     {
     	for (int j = 0; j < 3; ++j)
     	{
     		cout<<a[i][j];
     	}
     	cout<<endl;
     }

     cout<<"Matrix B"<<endl;
     for (int i = 0; i < 3; ++i)
     {
     	for (int j = 0; j < 2; ++j)
     	{
     		cout<<b[i][j];
     	}
     	cout<<endl;
     } 

     cout<<"Matrix C"<<endl;
     for (int i = 0; i < 2; ++i)
     {
     	for (int j = 0; j < 2; ++j)
     	{
     		cout<<c[i][j];
     	}
     	cout<<endl;
     }


	return 0;
}
