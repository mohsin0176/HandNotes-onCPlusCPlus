#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<cstdlib.h>
#include<limits.h>
#include<iomanip.h>
#include<fstream.h>
#define PI 3.1416
using namespace std;


int main()
{
    char str[50];
    ifstream in("test.txt");
    while(in)
    	{
    		in.getline(str,50);
    		cout<<str<<endl;
    		 
    	}
    	in.close();
	return 0;
}