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
    char s1[25]="BIIT Computer Education";
    int len=strlen(s1);
    char *ps;
    ps=new char[len+1];
    strcpy(ps,s1);
    cout<<ps;
    delete ps;
	return 0;
}