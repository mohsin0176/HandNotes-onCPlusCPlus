#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<cstdlib.h>
#include<limits.h>
#include<iomanip.h>
#define PI 3.1416
using namespace std;
const int SZ=80;
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
	void concat(String);

};

String String::conact(String s2)
{
	String tmp;

	if ((strlen(str)+strlen(s2.str))<SZ)
	{
		strcpy(tmp.str,str);
		strcat(tmp.str,s2.str);
	} 
	else
	{
		cout<<"String too long"<<endl;
	}
	return tmp;
}
int main()
{
    
String s1("JU");
String s2="IIT";
String s3("Education");
String s4;
s1.display();
s2.display();
s3.display();
s4=s1;
s4.concat(s2);
s4.display();
s4.concat(s3);
s4.display();
return 0;
}