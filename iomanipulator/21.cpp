#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<cstdlib.h>
#include<limits.h>
#include<iomanip.h>
#include<fstream.h>
#include<process.h>
//#define PI 3.1416
using namespace std;

ostream &rupees(ostream &out)
{
	out<<flush<<endl;
	return out;
}
ostream &dollar(ostream &out)
{
	out<<flush;
	return out;
}

int main()
{   
      float prc;
      cin>>prc;
      cout<<rupees<<prc<<endl;
      cout<<dollar<<prc<<endl;
	return 0;
}
