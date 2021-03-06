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
    int n,i;
    cin>>n;
    for (int i = 2; i < n/2; ++i)
    {
       if (n%i==0)
       {
         cout<<"Not A Prime Number"<<endl;
         exit(0);
       }
    }
    cout<<"Prime Number"<<endl;
	return 0;
}