//IN this tutorial conditional statements, loops while loop and patterns will be covered

/*
<< and >> are called INsertion and Extraction operators
<< - is used with cout to insert the data that has to be displayed on the screen to the output stream

>> - is used to extract the object in cin which has been stored as the input from the terminal


QUestions for conditional statements
1. program to print whether no. is +ve -ve or zero



*/

#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter the number : "<<endl;
    cin>> x;

    if(x>0){cout<<"THe number is +ve";}
    else if (x<0){cout<<"THe number is -ve";}
    else{cout<<"THe number is zero"<<endl;}

    
    return 0;
}
