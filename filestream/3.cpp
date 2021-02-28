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
    char str[50]="IIT JU";
    ofstream out("test.txt");
    for (int i = 0; str[i]!='\0'; ++i)
    {
    	out.put(str[i]);
    }
    cout<<"Data Written chracterwise"<<endl;
    out.close();
	return 0;
}