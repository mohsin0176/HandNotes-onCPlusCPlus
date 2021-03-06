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
   int d,y,m,w;
   cin>>d;
   y=d/365;
   d=d%365;
   m=d/30;
   d=d%30;
   w=d/7;
   d=d%7;
   cout<<y;
   cout<<m;
   cout<<d;
   return 0;
}