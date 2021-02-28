
#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<cstdlib.h>
#include<limits.h>
#include<iomanip.h>
#include<fstream.h>
#define PI 3.1416
using namespace std;

long fact(int);
long fact(long a)
{
	if (a==1)
    {
        return 1;
    }
    else
    {
        return (a*fact(a-1));
    }
     
}
int main()
{
     
    long n;
    cout<<"Enter The Number"<<endl;
    cin>>n;
    long f=fact(n);
    cout<<f;
	return 0;
}