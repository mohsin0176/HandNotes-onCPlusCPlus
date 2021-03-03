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
     char mpass[7]="STAR",npass[7];
     int ctr=0;
     cin>>npass;
     ctr=strcmpi(mpass,npass);
     if (ctr==0)
     {
       cout<<"Correct Password"<<endl;
     }
     else
     {
     	cout<<"Wrong Password"<<endl;
     }
	return 0;
}