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

void display(char *);
void display(char *p)
{
	int i;
	for (int i = 0; *(p+i) !='\0'; ++i)
	{
		cout<<*(p+i)<<endl;
	}
}
int main()
{ 
	char a[]="BIIT Computer Education";
	display(a);

	return 0;
}

