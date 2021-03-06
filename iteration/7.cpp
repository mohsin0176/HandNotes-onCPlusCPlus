#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<cstdlib.h>
#include<limits.h>
#include<iomanip.h>
#include<fstream.h>
#include<process.h>
#define PI 3.1416
using namespace std;


int main()
{   

	long int n,r,x,rev;
	cin>>n;
    x=n;
    rev=0;
    while(n!=0)
    {
    	r=n%10;
    	rev=(rev*10)+r;
    	n=n/10;
    }
    cout<<rev;
    if (rev==x)
    {
    	cout<<"palindrome"<<endl;
    }
    else

    {
    	cout<<"Not Palindrome"<<endl;
    }


	return 0;
}