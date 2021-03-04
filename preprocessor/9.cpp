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

void fun1();
void fun2();


#pragma startup fun1
#pragma exit fun2

void fun1()
{
	cout<<"Inside function 1"<<endl;
}
void fun2()
{
	cout<<"Inside function 2"<<endl;
}
int main()
{
    cout<<"Inside Main"<<endl; 
	return 0;
}

