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
   
   char str1[25],str2[25];
   int i,j,l;
   gets(str1);
   for (int i = 0; str1[i]!='\0'; ++i)
   {
   	 l=i;
   	 for (int i = 0,j=l-1; j>=0;j--, ++i)
   	 {
   	 	str2[i]='\0';
   	 }
   }
   str2[i]='\0';
   puts(str2);
	return 0;
}