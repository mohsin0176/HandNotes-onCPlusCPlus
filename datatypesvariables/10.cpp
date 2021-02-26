#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int n=1;
 
int main()
{
   
   int n=2;
   {
   	int n=3;
   	{
   		int n=4;
   		cout<<"In Inner"<<n<<endl;
   		cout<<"Gloabl"<<::n<<endl;
   	}
   		cout<<"In Inner"<<n<<endl;
   		cout<<"Gloabl"<<::n<<endl;
   }
   		cout<<"In Inner"<<n<<endl;
   		cout<<"Gloabl"<<::n<<endl;
    
	return 0;
}