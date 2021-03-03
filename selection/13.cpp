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


int main()
{
    int n;
    cin>>n;
    switch(n)
    {
    	case 1:
    	cout<<"Saturday"<<endl;
    	break;
    	case 2:
    	cout<<"Sunday"<<endl;
    	break;
    	case 3:
    	cout<<"Monday"<<endl;
    	break;
    	case 4:
    	cout<<"Tuesday"<<endl;
    	break;
    	case 5:
    	cout<<"Wednesday"<<endl;
    	break;
    	case 6:
    	cout<<"Thursday"<<endl;
    	break;
    	case 7:
    	cout<<"Friday"<<endl;
    	break;
    	default:
    	cout<<"Wrong Number"<<endl;
    	break;

    	    }
	return 0;
}