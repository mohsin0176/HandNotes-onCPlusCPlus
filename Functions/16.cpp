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


void dispaly(int [2][3]);
void dispaly(int a[2][3])
{
    int i,j;
	cout<<"Matrix A:"<<endl;
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 3; ++j)
        {
            cout<<setw(5)<<a[i][j]<<endl;
        }
        cout<<endl;
	}
}
int main()
{
    int ar[2][3]={{10,20,30},{40,50,60}}; 
    dispaly(ar);
	return 0;
}