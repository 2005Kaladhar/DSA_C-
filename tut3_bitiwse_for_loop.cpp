/*

IN this tutorial we will discuss about
Bitwise operators, for loop, operator precedence and vairable scope

1. Bitwise operators:   2.Logical operators
AND, OR, NOT, XOR           AND, OR, NOT
&  , | , ~  , ^             && , || , !

Differnce between ~ and !
~ is called Bitwise not operator while ! is called logical not operator

~ will convert all the zeroes to one and vice-versa in the binary form of the number.
! - (any value except zero will be treated as True and it will make its opposite)

similary & - bitwise AND operator
        && - logical AND operator

---------------------------------------------------------------------------------------------
                >> and << , Right shift and left shift bitwise operator

>> RIght shift operator shifts the bits' position towards right
0000000101 >> 1 - it means right shift one time
Result : 0000000010  

<< Left shifts the bits' position towards left
0000000101 >> 2 - it means shift the position towards left by 2 positions
Result : 0000010100

Conclusion : 
While shifting right the result (in decimal form) will be multiplied by 2
RIght shifting by 2 position will multiply 2 two times to the original number
101 = 5(in decimal), 5 >> 1 Result : 10

While shifting right (for small numbers) the result (in decimal form) will be divivded by 2
RIght shifting by 2 position will divide 2 two times to the original number
101 = 5(in decimal), 5 << 1 Result : 2(Quotient)

For a large number
0100100101010 when we shift left then first bit will be 1 therefore it represents a negative number, hence it is not always true that the number will be multiplied by 2 when shifting left.

NOTE - for left shift padding(empty positions will be filled by zeroes) will be done with zeros but for negative numbers padding will be compiler dependent.


-----------------------------------------------------------------------------------
                Post-increament/decrement, Pre-increment/decrement


int i =1;               int i=1;
int j = ++i;            int j=i++;
cout << j << i;         cout << j << i;
Output : 22             Output : 12

++i -> It will increase the value of i by 1 and then return the value 
i++ -> It will first return then value of i and then increase its value by 1

Similarly for decrement operator --i,i--

VVIMP Concept clearing example
    int a =1;
    int b= 2;
    if (a-- > 0 || ++b >2){
    cout<< "INside 1" << endl;}
    else{
    cout<< "Inside2" << endl;}
    cout << a << b << endl;
    Output : 02

    Here, it was expected that the value of b will be 3 at the end but it remains 2, this is because in the if condition the first condition becomes true hence it doesn't check for the remaining condition and hence ++b is never executed, that's why the value of b remains2

    int a =1;
    int b= 2;
    if (++b >2 || a-- >0){
    cout<< "INside 1" << endl;}
    else{
    cout<< "Inside2" << endl;}
    cout << a << b << endl;
    Output : 13

    Here the second condition is never checked as the first was true
---------------------------------------------------------------------------------
                            For loop
Syntax :

    for(  int i =0;           i<10;        i++){ //Statement to execute;}
        initialisation      Condition    Updation

1. It is not necessary to specify all three inside parenthesis, we can specify outside of it
     int i=0;
     for (;i<=10;){   //Here by specifying any one it will know which is the loop variable
        cout<<i<<endl;
        i++;
     }

2. Infinit loop using for loop
    for(;;){
        //THis will behave as infinte loop as it does not know when to stop and which variable to target as loop variable
    }

    for(int i=0;;i++){
        //This is also an infinte loop
    }

    To stop the loop we use 'break statement'
    To skip a particular iteration we use 'continue statement'

3. We can use multiple initialisation, conditions and updations
    for(int a =0, b=1, c=2; a>0 && b>1 && c>2; a--, b++,c--)

-------------------------------------------------------------------------------------------------
                                    Scope of a variable

It tells us about the accessibility of the variable
Scope of an identifier is always defined by the block in which it is declared.

Example :

    1.  int i=0;
        for(;i<10;i++){}
        cout<< i;
        Output : 10;

        for(int i=0;i<10;i++){}
        cout<< i;
        Ouput : Error!! 'i' was not declared in this scope

    In second exaple, 'i' was decalred in the scope of 'if' (in 'if' block) therefore when tried to access it outside that block it showed error.

    2.
        int a =5;
        if(1){a=7;cout<<a<<" Printed fronm inside"<<endl;}
        cout<<a << " Printed outside "<<endl;
        OUTPUT:
                7 Printed fronm inside
                7 Printed outside 

        int a =5;
        if(1){int a=7;cout<<a<<" Printed from inside"<<endl;}
        cout<<a << " Printed outside "<<endl;
        Output : 
                7 Printed from inside
                5 Printed outside

        In the first example, 'a' was declared outside the if block therefor its value was accessible to the inner block ( e.g if block).
        When value of was changed inside 'if block' then it actually changed the value of 'a' which was defined outisde the 'if block'

        In second example, when another variable of same name and type was declared inside the 'if block' with a different value, it did not change the value of the variable which was defined outside the 'if block', they were treated as two different variables.

       Conclusion :
                    Declaring a variable inside a child block with the same name an type as that in the parent block will not affect the parent variable's value rather it would be treated as a different variable. 


---------------------------------------------------------------------------------------
                                     Questions 
1. print from 1 to n
     int n;
     cout << "ENter the number n : ";
     cin >> n;
     for(int i=1; i<=n; i++){
        cout<< i<<endl;
     }

2. Print fibbonaci sequence
    
    int n =10;
    int a=0,b=1;
    cout<<a<<" "<<b<< " ";
    for(int i=0;i<n-2;i++){
        int temp =b;
        b  = b+a;
        a=temp;
        cout<<b<< " ";
    }

3. Check prime
    
    int inp;
    cout<<"ENter a number to check : ";   
    cin>>inp;
    for (int i=2; i<inp;i++){
        if(inp%i == 0){cout<<"Not prime"<<endl;break;}
        else{
            //Check if it is the last iteration and then print that the number is prime
            if(i+1==inp){cout<<"Is prime!"<<endl;}
        } 
    }


                                LEETCODE QUESTIONS
                                ``````````````````

4. Difference between product of digits and sum of digits of a number
   
    int x= 34;
    int prod=1,sum=0;
    while(x!=0){
        //Logic : keep dividing by 10 get the remainder and update x 
        int digit = x%10;
        prod *=digit;
        sum +=digit;
        x = x/10;
    }
    cout<< "Sum : "<< sum << "\nProduct : "
        << prod << "\nDifference : "
        << prod-sum << endl;


5.Print the number of '1' bit in the binary representation of a decimal number
    Logic :
        // If on dividing it by 2 the remainder is 1 then increase one_bit by 1 else 
        // x = x/2 (floor division e.g get only the integral part not the fraction part)
        // as x is int then it will be floor division
    
    int x=10;
    int one_bit =0;
    while(x!=0){
        if(x%2 == 1){one_bit++;}
        x /=2;    
    }
    cout<< "Number of one bits are : "<<one_bit<<endl;


6. Reversing an integer 
    int x = 38222;
    int reverse =0;
    
    while(x!=0){
        int remainder = x%10;
        reverse = reverse * 10 + remainder;
        x /=10;
    }
    cout<<"Reversed : "<<reverse<<endl;


*/
#include<iostream>

using namespace std;

int main(){
    cout << (7&3)<<endl;
    return 0;
}

