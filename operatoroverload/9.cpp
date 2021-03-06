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
	String operator+(String);
};

String String::operator+(String s2)
{
	String tmp;
	if ((strlen(str)+strlen(s2.str))<SZ)
	{
		strcpy(tmp.str,str);
		strcat(tmp.str,s2.str);
	}
	else
	{
		cout<<"String too Long"<<endl;
	}
	return tmp;
}
int main()
{
    String s1("BIIT");
    String s2="Computer";
    String s3("Eduaction");
    String s4;
	s1.display();
	s2.display();
	s3.display();
	s4=s1;
	s4=s1+s2;
	s4.display();

	s4=s1+s2;
	s4.display();
	s4=s4+s3;
	s4.display();
	return 0;
}