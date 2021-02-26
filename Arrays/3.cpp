#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
 
int main()
{
    
    int sum;
    int arr[5];
    cout<<"Enter Any Five Numbers"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    sum=0;
    for(int i=0;i<5;i++)
    {
        sum=sum+arr[i];
    } 

    cout<<"The Sum of Array Elements is"<<sum;

     
	return 0;
}