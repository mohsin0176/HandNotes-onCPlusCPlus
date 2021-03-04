#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<cstdlib.h>
#include<limits.h>
#include<iomanip.h>
#include<fstream.h>
#include<process.h>
#define PI 3.1416
#define Volume(r) (4/3)*PI*(r)*(r)*(r)
using namespace std;



int main()
{
   float r,v;
   cin>>r;
   v=Volume(r);
   cout<<v;
	return 0;
}

