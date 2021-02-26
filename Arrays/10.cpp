#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{

    int i,j,small,pos,tmp;
    int n[]={10,30,40,5,60};
    cout<<"Before Sorting"<<endl;
    for (int i = 0; i < 5; ++i)
    {
    	cout<<n[i]<<endl;
    } 
    for (int i = 0; i < 5; ++i)
    {
    	small=n[i];
    	pos=i;
    	for (int j = i+1; j<5; ++j)
    	{
    		if (n[j]<small)
    		{
    			small=n[j];
    			pos=j;
    		}
    	}

    	tmp=n[i];
    	n[i]=n[pos];
    	n[pos]=tmp;
    }

    cout<<"After Sorting:"<<endl;
    for (int i = 0; i < 5; ++i)
    {
    	cout<<n[i]<<endl;
    }
	return 0;
}
