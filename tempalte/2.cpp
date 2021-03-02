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

template<class T>
void swap(T a,T b)
{
	T t;
	t=a;
	a=b;
	b=t;
	cout<<a<<b;
}
int main()
{
    swap(10,20);
    swap(10.20,20.15);
    swap('A','B');
	return 0;
}