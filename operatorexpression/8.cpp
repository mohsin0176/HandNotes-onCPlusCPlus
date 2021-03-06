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
    int a=10;
    int b=20;
    int c;
    cout<<a;
    cout<<b;
	c=a&b;
	cout<<c;
	c=a|b;
	cout<<c;
	c=a^b;
	cout<<c;
	c=~a;
	cout<<c;
	c=a<<3;
	cout<<c;
	c=b>>2;
	cout<<c;
	return 0;
}