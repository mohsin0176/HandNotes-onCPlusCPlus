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

void square(int *);
void square(int *px)
{
	*px=(*px)*(*px);
	cout<<*px;
}
int main()
{
    int a=10;
    square(&a);
    cout<<a;
	return 0;
}

