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
float Simp_Int(float,float,float);
float Simp_Int(float,float);
float Simp_Int(float );
float Simp_Int();
float Simp_Int(float p,float r,float t)
{
   float si;
   si=(p*r*t)/100;
   return si;
}
float Simp_Int(float p,float r)
{
   float si;
   si=(p*r*3)/100;
   return si;
}
float Simp_Int(float p)
{
   float si;
   si=(p*10*3)/100;
   return si;
}
float Simp_Int()
{
   float si;
   si=(1000*10*3)/100;
   return si;
}

int main()
{

	float p,r,t,si;
    si=Simp_Int(2000,15,2);
    cout<<si;
    si=Simp_Int(2000,15);
    cout<<si;
    si=Simp_Int(2000);
    cout<<si;
    si=Simp_Int();
    cout<<si;
	return 0;
}