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
	void operator+=(String);
};

void String::operator+=(String s2)
{
	if ((strlen(str)+strlen(s2.str))<SZ)
    {
        strcat(str,s2.str);
    }
    else
    {
        cout<<"String too Long"<<endl;
    }
}
int main()
{
    String s1("BIIT");
    String s2="Computer";
    String s3("Eduaction");
    s1.display();
    s2.display();
    s3.display();
    s1+=s2;
    s1.display();
    s1+=s3;
    s1.display();
    
	return 0;
}