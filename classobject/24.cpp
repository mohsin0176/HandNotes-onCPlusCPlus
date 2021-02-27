#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<cstdlib.h>
#include<limits.h>
#include<iomanip.h>
#define PI 3.1416
using namespace std;
class String
{

char str[80];
public:
	String()
	{
		str[0]='\0';
	}
	String(char s[])
	{
		strcpy(str,s);
	} 
	void display()
	{
		cout<<str;
	}

};
int main()
{
    
String s1("JU");
String s2="IIT";
String s3("Education");
s1.display();
s2.display();
s3.display();
return 0;
}