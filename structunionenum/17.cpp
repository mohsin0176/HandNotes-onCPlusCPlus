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

union Abc
{
char c;
int i;
float f;
};
int main()
{ 
	union Abc x;
	x.c='B';
	cout<<x.c;
	x.i=100;
	cout<<x.i;
	x.f=123.4f;
	cout<<x.f;

	return 0;
}