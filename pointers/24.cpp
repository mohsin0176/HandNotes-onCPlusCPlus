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

class String
{
char *ps;
public:
	String(char s[])
	{
		int len=strlen(s);
		ps=new char[len+1];
		strcpy(ps,s);
	}
	~String()
	{
		delete ps;
	}
	void display()
	{
		cout<<ps;
	}
};
int main()
{  
   String s1="BIIT";
   cout<<s1;
   s1.display();

	return 0;
}