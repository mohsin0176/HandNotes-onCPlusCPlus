#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<cstdlib.h>
#include<limits.h>
#include<iomanip.h>
#include<fstream.h>
#include<process.h>
//#define PI 3.1416
using namespace std;
const int SZ=80;


class String
{

char str[SZ];
public:
	String()
	{
		strcpy(str,"\0");
	}
	String(char s[])
	{
		strcpy(str,s);
	}
	void display()
	{
		cout<<str;
	}
	operator char*()
	{
		return str;
	}

};
int main()
{
    String s1;
    char st[]="BIIT";
    s1=st;
    String s2="Computer";
    String s3("Education");
	cout<<(char*)s1<<endl;
	cout<<(char*)s2<<endl;
 	cout<<(char*)s3<<endl;  
	return 0;
}