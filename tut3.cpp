/*
IN this tutorial we will discuss about
Bitwise operators, for loop, operator precedence and vairable scope

1. Bitwise operators:
AND, OR, NOT, XOR
&  , | , ~  , ^

Differnce between ~ and !
~ is called Bitwise not operator while ! is called logical not operator

~ will convert all the zeroes to one and vice-versa in the binary form of the number.
! - (any value except zero will be treated as True and it will make its opposite)

similary & - bitwise AND operator
        && - logical AND operator
*/
#include<iostream>

using namespace std;
int main(){
    int i =1;
    int j = i++;
    cout << j << endl;

    return 0;
}

