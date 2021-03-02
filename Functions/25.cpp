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

int &min(int &a,int &b)
{
	if (a<b)
	{
		return a;
	}
	else

	{
		return b;
	}
}
int main()
{
    int x=10,y=20;
    cout<<x<<y;
    min(x,y)=100;
    cout<<x<<y;
	return 0;
}