
// In this tutorial we will learn about datatypes and operators
/*
Datatypes - 
If the result of division is stored in an in type variable then again the value will be int not float.
1. int - NOTE - divisoin of int and int is always int make atleast one of them float
2.float - 
3.bool 
4.long 
5.double
6. unsigner int - if we try to store a negative number in an unsigner int variable then first it will find the 2's complement of the number and then the number will be treated as a positive number and then stored in the variable therefore a large value will be stored. Hence be careful when storing values in unsigner int type variable
7. long double
-------------------------------------------------------------------------------------------
Typecasting : 
int a = 'a';

In C++, characters are stored according to their ASCII code, ASCII code of 'a' is 97 therefore 97 will be stored in variable a.

char b = 98;
This will give output 'b' as ASCII code of b is 98

NOTE-
IF we try to store a large number in a variable which is out of its range then some value will be taken from the right side according to the size of the variable and that will be stored. It will not throw any error
----------------------------------------------------------------------------------------
Operators : 
&& - and 
|| - or 
! - not
== - equal to check
*/
#include<iostream>
using namespace std;

int main(){
cout << "hello world this is Kaladhar gopal" << endl;
    int a = 98;
    cout << "Value of a is : "<<char(a) <<endl; //This will print : Value of a is : b
    cout << "Value of a is : "<<a  <<endl; //This will print : Value of a is : 98

    

    return 0;
}



