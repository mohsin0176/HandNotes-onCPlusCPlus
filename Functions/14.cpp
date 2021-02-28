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

int length(char ch[])
{
	int i,l=0;
	for (int i = 0; ch[i]!='\0'; ++i)
	{
		l=i;
	}
	return l;
}

int main()
{
    int len=0;
    char str[20];
    cout<<"Enter String"<<endl;
    cin>>str;
    len=length(str);
    cout<<"Length of string"<<len;
	return 0;
}