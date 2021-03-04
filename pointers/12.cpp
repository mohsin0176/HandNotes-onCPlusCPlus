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

void Add(int,int);
void Sub(int,int);
void Add(int x,int y)
{
	int s;
	s=x+y;
	cout<<s;
}
void Sub(int x,int y)
{
	int d;
	d=x-y;
	cout<<d;
}
int main()
{
    int a=10,b=20;
    void (*pf)(int,int);
    pf=Add;
    (*pf)(a,b);
    pf=Sub;
    (*pf)(a,b);

	return 0;
}

