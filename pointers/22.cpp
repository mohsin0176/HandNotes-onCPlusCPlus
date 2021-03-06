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
    int *p;
    int i;
    p=new int[5];
    for (int i = 0; i < 5; ++i)
    {
    	cin>>*(i+p);
    }
       for (int i = 0; i < 5; ++i)
    {
    	cout<<*(i+p);
    }
    delete[] p;
	return 0;
}