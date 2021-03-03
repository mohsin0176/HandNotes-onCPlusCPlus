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
   char line[81];
   int vowctr=0;
   int conctr=0;
   gets(line);

   for (int i = 0; line[i]!='\0'; ++i)
   {
   	  
   	  switch(line[i])
   	  {
   	  	case 'a':
   	  	case 'A':
   	  	case 'e':
   	  	case 'E':
   	  	case 'i':
   	  	case 'I':
   	  	case 'o':
   	  	case 'O':
   	  	case 'u':
   	  	case 'U':
   	  	vowctr++;
   	  	break;
   	  	default:
   	  	conctr++;
   	  	break;
   	  }
   }
   cout<<vowctr;
   cout<<conctr;
	return 0;
}