#include<iostream>
using namespace std;

int main()
{
   int a;

   cout<<"enter a integer a ";
   cin>>a;

   switch (a) // to the condition in this paranthesis // it will first evaluate the value inside the switch paranthesis.
   {
    case 1:
      cout<<"the value of a is 1 ";
      break;
    case 2:
      cout<<"the value of a is 2 ";

    default:
       cout<<"default will be always printed";
       break;
   }
}