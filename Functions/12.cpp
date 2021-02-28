
#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<cstdlib.h>
#include<limits.h>
#include<iomanip.h>
#include<fstream.h>
#define PI 3.1416
using namespace std;

int power(int,int);
int power(int x,int n)
{
    if (n==0)
    {
        return 1;
    }
    else
    {
        return x*power(x,n-1);
    }
}
int main()
{
     
    long n,x,p;
    cout<<"Enter The Base"<<endl;
    cin>>x;
    cout<<"Enter The Power"<<endl;
    cin>>n;
    p=power(x,n);
    cout<<n<<"th power of"<<x<<"is"<<p;
	return 0;
}