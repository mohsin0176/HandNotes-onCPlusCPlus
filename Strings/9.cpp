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
    char str1[25],str2[25],tmp[25];
    cin>>str1>>str2;
    cout<<str1<<str2;
	strcpy(tmp,str1);
	strcpy(str1,str2);
	strcpy(str2,tmp);
	cout<<str1<<str2;
	return 0;
}