#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<limits.h>
using namespace std;

int main()
{

    int a[2][3]={{10,20,30},{40,50,60}};
    int i,j;
    cout<<"Matrix A"<<endl;
    for (int i = 0; i < 2; ++i)
    {
    	for (int j = 0; j < 3; ++j)
    	{
    		cout<<a[i][j];
    	}
    	cout<<endl;
    }
	return 0;
}
