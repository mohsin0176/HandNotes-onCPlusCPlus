#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<cstdlib.h>
#include<limits.h>
#include<iomanip.h>
#include<fstream.h>
#define PI 3.1416
using namespace std;

int fibo(int);
int fibo(int n)
{
	if (n==0||n==1)
	{
		return n;
	}
	else
	{
		return fibo(n-1)+fibo(n-2);
	}
}

int main()
{
    
    int n,t;
    cout<<"Enter term"<endl;
    cin>>n;
    t=fibo(n);
    cout<<n<<"th term of fibonacci series"<<t;
	return 0;
}