#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<cstdlib.h>
#include<limits.h>
#include<iomanip.h>
#include<fstream.h>
#define PI 3.1416
using namespace std;

const char *filename="test.txt";

int main()
{
    
    long sz;
    ifstream file(filename,ios::in|ios::binary);
    file.seekg(0,ios::end);
    sz=file.tellg();
    file.close();

    cout<<filename<<endl;
    cout<<sz;
	return 0;
}