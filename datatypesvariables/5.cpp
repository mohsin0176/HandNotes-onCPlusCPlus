#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int x=10;
    int &y=x;
    cout<<y<<endl;
    cout<<&y<<endl;
    y=20;
    cout<<x<<endl;
    cout<<y<<endl;
	return 0;
}