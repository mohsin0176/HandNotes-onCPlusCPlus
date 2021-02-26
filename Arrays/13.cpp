#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<limits.h>
using namespace std;

int main()
{

   int a[2][3];
   int i,j;
   for (int i=0; i<2; ++i)
    {
      for (int j=0; j<3; ++j)
      {
         cout<<"Enter Value"<<endl;
         cin>>a[i][j];
      }
    } 

    cout<<"The matrix is"<<endl;
    for (int i=0; i<2; ++i)
    {
      for (int j=0; j<3; ++j)
      {
      
         cout<<a[i][j];
      }
    } 
	return 0;
}
