#include<iostream>
using namespace std;

int main()
{
    float a,b;

    cout<<"give 2 floating point numbes as input"<<endl;
    cin>>a>>b;

    if(a>0.01 && b>a) // 1 and 0 // The first statement is true and the second statement is false : a=2 and 1.9=b.
    {
        cout<<"the condition in if statement is correct"; // will only be printed if the statement in the paranthesis is correct.

    }
    else
    {
        cout<<"The condition is false ";
    }
}