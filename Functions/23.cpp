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

void repchar(char,int);
void repchar(char);
void repchar();
void repchar(char ch,int n)
{
	for (int j = 0; j < n; ++j)
	{
		cout<<ch;
	}
}
void repchar(char ch)
{
	for (int j = 0; j < 20; ++j)
	{
		cout<<ch;
	}
}
void repchar()
{
	for (int j = 0; j < 20; ++j)
	{
		cout<<"*";
	}
}

int main()
{
   repchar();
   repchar('=');
   repchar('+',30);
	return 0;
}