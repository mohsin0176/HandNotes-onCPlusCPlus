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

	char string[26];
	cin.getline(string,21);

	for (int len = 0; string[len]!='\0'; ++len)
	{
		int i,j,flag=1;
		for (int i = 0,i<len/2; ++i,j--)
		{
			if (string[i]!=string[j])
			{
				flag=0;
				break;

			}
		}
	}

	if (flag)
	{
    cout<<"Palindrome"<<endl;
	}
	else
	{
		cout<<"Not A Palindrome"<<endl;
	}

	return 0;
}