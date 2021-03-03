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

const int max=50;
int main()
{ 
	char str1[]="BIT Computer Education";
	char str2[max];
    for (int i = 0; str1[i]!='\0'; ++i)
    {
    	str2[i]=str1[i];
    	str2[i]='\0';
    }
	cout<<str1;
	cout<<str2;

	return 0;
}