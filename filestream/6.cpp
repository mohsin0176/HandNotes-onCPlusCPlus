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
    ifstream f1("test.txt");
    ofstream f2("test1.txt");
    if(!f1)
    	cerr<<"Can Not Open In File"<<endl;
    if(!f2)
    	cerr<<"Can Not Open out File"<endl;
    while(f1&&f1.get(ch))
    	f2.put(ch);
    cout<<"File Copied Sucess"<<endl;
    f1.close();
    f2.close();
	return 0;
}