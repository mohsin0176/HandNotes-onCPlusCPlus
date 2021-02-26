#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
 
int main()
{
    
     float a[5];
     int i;
     for (int i = 0; i < 5; ++i)
     {
     	cout<<"Enter Value"<<endl;
     	cin>>a[i];
     }
     float s=0;
     for (int i = 0; i < 5; ++i)
     {
     	s=s+a[i];
     }
    float avg=s/5;
    cout<<"Average"<<avg;
     
	return 0;
}