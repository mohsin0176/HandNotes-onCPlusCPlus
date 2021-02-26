#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<limits.h>
using namespace std;

int main()
{
    
    int a[3][3];
    int i,j,spd=0,sod=0,sut=0,slt=0,sa=0;
    cout<<"Enter Value of A"<<endl;
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
    		if(i==j)
    		{
    			spd=spd+a[i][j];
    		}
    		if((i+j)==2)
    		{
    			sod=sod+a[i][j];
    		}
    		if(i<=j)
    		{
    			sut=sut+a[i][j];
    		}
    		if(i>=j)
    		{
    			slt=slt+a[i][j];
    			sa=sa+a[i][j];
    		}
    	}
    }
    cout<<"Matrix A"<<endl;
    for (int i = 0; i < 3; ++i)
    {
    	for (int j = 0; j < 3; ++j)
    	{
    		cout<<a[i][j];
    	} 
    	cout<<endl;
    }

cout<<"Sum of All Elements"<<sa<<endl;
cout<<"Sum of Principal Diagonal"<<spd<<endl;
cout<<"Sum of Other Diagonal"<<sod<<endl;
cout<<"Sum of Upper Triangle"<<sut<<endl;
cout<<"Sum of Lower Triangle"<<slt<<endl;

	return 0;
}
