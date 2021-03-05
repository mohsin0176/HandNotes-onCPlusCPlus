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

void display(char *);
void display(char *ps)
{
	while(*ps)
	{
		cout<<*ps;
		ps++;
	}
}
int main()
{
   
   char s1[25]="BIIT";
   display(s1);
	return 0;
}