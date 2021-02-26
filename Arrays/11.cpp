#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<limits.h>
using namespace std;

int main()
{

   int i,j,tmp;
   int n[]={0,30,40,50,10,20};
   cout<<"Before Sorting"<<endl;
   for (int i = 0; i <= 5; ++i)
   {
   	cout<<n[i]<<endl;
   }
   n[0]=INT_MIN;
   for (int i = 1; i <=5; ++i)
   {
   	 tmp=n[i];
   	 j=i-1;
   	 while(tmp<n[j])
   	 {
   	 	n[j+1]=n[j];
   	 	j--;
   	 } 
   	 n[j+1]=tmp;
   }

   cout<<"After Sorting:"<<endl;
   for (int i = 0; i <=5; ++i)
   {
   	 cout<<n[i]<<endl;
   }
	return 0;
}
