
#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<cstdlib.h>
#include<limits.h>
#include<iomanip.h>
#include<fstream.h>
#define PI 3.1416
using namespace std;
void cube(int *);
void cube(int *x)
{
	*x=(*x)*(*x)*(*x);
	cout<<*x;
} 
int main()
{
     
    int a=10;
    cube(&a);
    cout<<a;
	return 0;
}