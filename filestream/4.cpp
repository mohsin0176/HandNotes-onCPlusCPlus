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
    char ch;
    ifstream in("test.txt");
    while(in)
    {
    	in.get(ch);
    	cout<<ch<<endl;
    }
    in.close();
	return 0;
}