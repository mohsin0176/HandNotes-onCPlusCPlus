#include<bits/stdc++.h>
#include<math.h>
#include<cstdlib.h>
#include<limits.h>
#include<iomanip.h>
#include<fstream.h>
#include<process.h>
#define PI 3.1416
using namespace std;

inline float lbstokg(float pounds)
{
	return 0.453592*pounds;
}

int main()
{
    float lbs;
    cin>>lbs;
    cout<<lbstokg(lbs);
	return 0;
}