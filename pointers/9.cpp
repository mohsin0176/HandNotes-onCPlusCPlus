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

int *max(int *,int *);

int *max(int *pa,int *pb)
{
	if (*pa>*pb)
	{
		return pa;
	}
	else
	{
		return pb;
	}
}

int main()
{
    int a=10,b=20,*p;
    p=max(&a,&b);
    cout<<*p;
	return 0;
}

