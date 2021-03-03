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
    int i,j,n,c=0,s=0,d=0,ss=0;
    char ch[100];
    gets(ch);

    for (int i = 0; ch[i]!='\0'; ++i)
    {
    	if (ch[i]=>65&&ch[i]<=90)
    	{
    		c++;
    	}
    	else if(ch[i]>=97&&ch[i]<=122)
    	{
    		s++;
    	}
    	else if (ch[i]>=48&&ch[i]<=57)
    	{
    		d++
    	}
    	else
    	{
    		ss++;
    	}
    }

	cout<<c<<endl;
	cout<<s<<endl;
	cout<<d<<endl;
    cout<<ss<<endl;	
	return 0;
}