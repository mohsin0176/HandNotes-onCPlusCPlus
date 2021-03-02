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

float Simp_Int(float=1000,float=10,float=3);
float Simp_Int(float p,float r,float t)
{
	float si;
	si=(p*r*t)/100;
	return si;
}
int main()
{
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