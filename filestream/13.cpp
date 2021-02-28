#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<cstdlib.h>
#include<limits.h>
#include<iomanip.h>
#include<fstream.h>
#define PI 3.1416
using namespace std;

 

int main(int argc,char *argv[])
{
     
    if (argc!=3)
    {
    	cout<<"Copy Scource dest"<<endl;
    	exit(1);
    }
    ifstream in(argv[1],ios::binary);
    if(!in)
    {
    	cerr<<"Can not Open Scource file"<<endl;
    	exit(1);
    }
    ofstream out(argv[2],ios::binary);
    if(!in)
    {
    	cerr<<"Can not Open Destination  file"<<endl;
    	exit(1);
    }

    char ch;
    while(in.get(ch))
    	out.put(ch);
    in.close();
    out.close();
	return 0;
}