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

enum Suit{clubs,diamonds,hearts,spades};

const int jack=12;
const int queen=11;
const int king=13;
const int ace=14;

struct card
{
	int number;
	Suit suit;
}
int main()
{
   card temp,chosen,prize;
   int position;
   card card1={7,clubs};
   cout<<"card1 is 7 of clubs"<<endl;
   card card2={jack,hearts};
   cout<<"Card2 is jack of hearts"<<endl;
   card card3={ace,spades};
   cout<<"Card3 is ace of spades"<<endl;
   prize=card3;
   cout<<"I am swapping card1 and card3"<<endl;
   temp=card3;
   card3=card1;
   card1=temp;
   cout<<"I am swapping card2 and card3"<<endl;
   temp=card2;
   card3=card2;
   card1=temp;
   cout<<"I am swapping card1 and card2"<<endl;
   temp=card2;
   card2=card1;
   card1=temp;
   cin>>position;
   switch(position)
   {
   	case 1:
   	chosen=card1;
   	break;
   	case 2:
   	chosen=card2;
   	break;
   	case 3:
   	chosen=card3;
   	break;
   }

   if (chosen.number==prize.number&&chosen.suit==prize.suit)
   {
   	cout<<"Thats is right"<<endl;
   }
   else
   {
   	cout<<"You Loose"<<endl;
   }
	return 0;
}