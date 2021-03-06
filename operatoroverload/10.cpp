#include<cstdlib.h>
#include<limits.h>
#include<iomanip.h>
#include<fstream.h>
#include<process.h>
#define PI 3.1416
using namespace std;

const int SZ=80;
enum boolean{false,true};
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
	boolean operator==(String);
};

boolean String::operator==(String s2)
{
	return ((strcmp(str,s2.str)==0)?true:false);
}
int main()
{
    String s1("BIIT");
    String s2="Computer";
    String s3("Eduaction");
    if (s1==s2)
    {
    	cout<<"s1==s2";
    }
    else
    {
    	cout<<"s1!=s2";

    }
    if (s1==s3)
    {
    	cout<<"s1==s3";
    }
    else
    {
    	cout<<"s1!=s3";
    }
	return 0;
}