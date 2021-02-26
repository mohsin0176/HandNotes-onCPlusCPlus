#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
 
int main()
{
    
    int num[5];
    int i,sum=0;
    for(i=0;i<5;i++)
    {
    	cout<<"Enter Value"<<(i+1)<<endl;
    	cin>>num[i];
    } 
    cout<<"The Elements are:"<<endl;
    for(i=0;i<5;i++)
    {
    	
    	cout<<num[i];
    } 

     
	return 0;
}