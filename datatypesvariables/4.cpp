#include<iostream>
#include<bits/stdc++.h>
#define PI 3.1416
using namespace std;

int main()
{
    float r,vol;
    cout<<"Enter Radius of Hemi-Sphere:"<<endl;
    cin>>r;
    vol=(2/3)*PI*r*r*r;
    cout<<"Volume of Hemi-Sphere:"<<vol<<endl;
	return 0;
}