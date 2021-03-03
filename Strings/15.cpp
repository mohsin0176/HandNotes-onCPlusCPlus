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
    char str1[100];
    int i,j,k,c=0,w=1;
    gets(str1);
    i=strlen(str1);
    for (int i = 0; str1[i]!='\0'; ++i)
    {
    	if (str1[i]==''&&(str1[i-1]!=''))
    	{
    		w++;
    	}
    	else if (str1[i]!='.')
    	{
    		c++;
    	}

    }
    cout<<w<<endl;
    cout<<c<<endl;
	return 0;
}