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


void repchar(char='*',int =20);
void repchar(char ch,int n)
{
	for (int j = 0; j < n; ++j)
	{
		cout<<ch;
	}
}
int main()
{
    repchar();
    repchar('=');
    repchar('+',30);
	return 0;
}