#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{



    int num[10],i,beg,end,mid,pos=-1,value;
    cout<<"Enter 10 number in ascending order"<<endl;
    for (int i = 0; i < 10; ++i)
    {
    	cin>>num[i];
    }
    cout<<"Enter number to be searched"<<endl;
    cin>>value;
    beg=0;
    end=10-1;
    while(beg<=end)
    {
    	mid=(beg+end)/2;	
        if (value==num[mid])
        {
        	pos=mid+1;
        	break;
        } 
        else if(value>=num[mid])
        {
        	beg=mid+1;
        }
        else
        {
        	end=mid-1;
        }
    }
    
    if (pos==-1)
    {
    	cout<<"The Element is"<<value<<"not found"<<endl;
    }
    else
    {
    	cout<<"The Position of "<<value<<"value"<<pos<<endl;
    }
	return 0;
}
