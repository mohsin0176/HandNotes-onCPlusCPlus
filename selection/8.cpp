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
    int year;
    cin>>year;
    if ((year%4)=0)
    {
    	cout<<"Leap Year"<<endl;
    } 
    else
    {
    	cout<<"Not Leap Year"<<endl;
    }
	return 0;
}