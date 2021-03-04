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

#define MAX 1

int main()
{
    int a=10,b=20,m;
    #if MAX==1
    cout<<Maximum<<(a>b?a:b);
    #else
    cout<<Minimum<<(a<b?a:b);
    #endif
	return 0;
}

