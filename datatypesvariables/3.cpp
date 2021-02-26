#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 

 	float rad;
 	const float PI=3.1416;
 	cout<<"Enter Radius of Sphere:"<<endl;
 	cin>>rad;
 	float vol=(4/3)*PI*rad*rad*rad;
 	cout<<"Volume of Sphere is"<<vol;
	return 0;
}