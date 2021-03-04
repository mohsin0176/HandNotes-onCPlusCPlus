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
    int *p,**pp,***ppp,****pppp;
    p=&a;
    cout<<p;
    cout<<*p;
    pp=&p;
	cout<<pp<<endl;
	cout<<*pp<<endl;
	cout<<**pp<<endl;
	ppp=&pp;
	cout<<ppp<<endl;
	cout<<*ppp<<endl;
	cout<<**ppp<<endl;
	cout<<***ppp<<endl;
	pppp=&ppp;
	cout<<pppp<<endl;
	cout<<*pppp<<endl;
	cout<<**pppp<<endl;
	cout<<***pppp<<endl;
	cout<<****pppp<<endl;

	return 0;
}

