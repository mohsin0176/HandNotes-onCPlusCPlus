
#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<cstdlib.h>
#include<limits.h>
#include<iomanip.h>
#include<fstream.h>
#define PI 3.1416
using namespace std;

long fact(long);
long fact(long a)
{
	long f=1;
    int i;
    for (int i = 1; i <=a; ++i)
    {
    	f=f*i;
    }
    return f;
}
int main()
{
     
    long n,f;
    cout<<"Enter The Number"<<endl;
    cin>>n;
    f=fact(n);
    cout<<f;
	return 0;
}