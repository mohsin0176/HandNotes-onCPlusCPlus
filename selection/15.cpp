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
    char ch;
    cin>>ch;
    switch(ch)
    {
    	case 'a':
    	case 'A':
    	case 'e':
    	case 'E':
    	case 'i':
    	case 'I':
    	case 'o':
    	case 'O':
    	case 'u':
    	case 'U':
    	cout<<"Vowel"<<endl;
    	break;
    	default:
    	cout<<"Constant"<<endl;
    	break;
    }
	return 0;
}