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

const int SZ=5;
void dispaly(int a[SZ]);
void dispaly(int a[SZ])
{
	cout<<"Values Are:"<<endl;
	for (int i = 0; i < SZ; ++i)
	{
		cout<<setw(3)<<a[i]<<endl;
	}
}
int main()
{
    int ar[SZ],i;
    for (int i = 0; i < SZ; ++i)
    {
    	cout<<"Enter Value:"<<endl;
    	cin>>ar[i];
    }
    dispaly(ar);
	return 0;
}