//IN this tutorial conditional statements, loops while loop and patterns will be covered

/*
<< and >> are called INsertion and Extraction operators
<< - is used with cout to insert the data that has to be displayed on the screen to the output stream

>> - is used to extract the object in cin which has been stored as the input from the terminal


QUestions for conditional statements
1. program to print whether no. is +ve -ve or zero

    int x;
    cout<<"Enter the number : ";
    cin>> x;
    if(x>0)
    {cout<<"THe number is +ve";}
    else if (x<0)
    {cout<<"THe number is -ve";}
    else
    {cout<<"THe number is zero"<<endl;}

2. Program to print whether entered character is Upper case, lower case or numeric
    
    char inp;
    cout << "ENter the character : ";
    cin >> inp;
    
    if (inp >= 'A' && inp <= 'Z'){
        cout << "It is in upper case" << endl; 
    }
    else if (inp >='a' && inp<='z'){
        cout << "It is in lower case" << endl;
    }
    else if ( inp>='0' && inp<='9'){ // NOTE that here '0' and '9' are used not just 0 and 9 to compare to the ASCII values of zero and nine
        cout << "It is a digit" << endl;
    }

---------------------------------------------------------------------------------------------
                                    ## Pattern Questions ##


3.  1 2 3 4  pattern
    1 2 3 4 
    1 2 3 4 
    1 2 3 4

    int n =4;
    int i =1;

    while(i<=n){
        int j=1;
        while(j<=n){
            cout<< j << " ";
            j +=1;
        }
        cout<< endl;
        i+=1;
    }

4.  4 3 2 1  pattern
    4 3 2 1
    4 3 2 1
    4 3 2 1

    int n=4;
    int i =1;

    while(i<=n){
        int j = n;
        while(j>=1){
            cout << j << " ";
            j -= 1;
        }
        cout << endl;
        i+=1;
    }
    
5.  *   star pattern
    **
    ***
    ****
    int rows = 10;
    int i =1;
    while(i<=rows){
        int j =1;
        while(j<=i){
            cout << '*';
            j+= 1;
        }
        cout << endl;
        i+=1;
    }

6. Pattern
    1
    22
    333
    4444
    55555

    int rows = 5;
    int i =1;

    while(i<=rows){
        int j=1;
        while(j<=i){
            cout << i;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    
7. Pattern
    1
    23
    456
    78910

    int rows =4;
    int counter =1;
    int i=1;

    while(i<=rows){
        int j=1;
        while(j<=i){
            cout<< counter;
            counter +=1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }   

8. Pattern 
    1
    23
    345
    5678

    int rows =4;
    int counter =1;
    int i=1;

    while(i<=rows){
        int j=1;
        while(j<=i){
            cout<< counter;
            if(!(i==j) || i==1){
                counter +=1;
            }
            j+=1;
        }
        cout<<endl;
        i+=1;
    }

9. Pattern
    1
    21
    321
    4321

    int n=4;
    int row =1;
    while(row<=n){
        int j=1;
        int counter =row;
        while(j<=row){
            cout << counter;
            counter-=1;
            j+=1;
        }
        cout << endl;
        row +=1;

    }

10.
    A A A A 
    B B B B
    C C C C

    int n =4;
    int rows=1;
    while(rows<n){
        int column = 1;
        while(column <=n){
            cout << char ('A' +rows -1) << " ";
            column += 1;
        }
        cout << endl;
        rows +=1;
    }


11. Pattern
        A B C 
        D E F
        G H I

    int n =3;
    int rows =1;
    int counter = 1;

    while(rows<=n){
        int column =1;
        while(column <= n){
            cout << char('A' + counter -1)<<" ";
            column += 1;
            counter +=1;
        }
        cout<< endl;
        rows+=1;
    }

12.
    ABC
    BCD 
    CDE

    int n=3;
    int row =1;
    
    while(row<=n){
        char start = 'A' +row -1;
        int column =1;
        while(column <= n){
            cout << char(start + column -1);
            column +=1;
        }
        cout<< endl;
        row+=1;
    }

13.
    A
    BB
    CCC
    DDDD

    int n =4;
    int rows =1;
    char start = 'A';
    while(rows<=n){
        int column =1;
        while(column<=rows){
            cout << char(start) ;
            column +=1;
        }
        cout << endl;
        rows+=1;
        start = char(start + 1);
    }


14.
    A
    BC
    DEF
    GHIJ


   int n =4;
    int rows =1;
    char start = 'A';
    while(rows<=n){
        int column =1;
        while(column<=rows){
            cout << char(start) ;
            column +=1;
            start = char(start +1);
        }
        cout << endl;
        rows+=1;
    }

15.
    ABCD
    BCDE
    CDEF
    DEFG

    int n =4;
    int rows =1;
    char start ='A';
    while(rows<=n){
        int column =1;
        while(column<=n){
            // Start value for each rows will be 'A' + (row no. -1)
            cout << char( start+(rows-1) + column -1);
            column +=1;
        }
        cout << endl;
        rows+=1;
    }
 

16.
    A
    BC
    CDE
    DEFG

    int n =4;
    int rows =1;
    char start ='A';
    while(rows<=n){
        int column =1;
        while(column<=rows){
            // Start value for each rows will be 'A' + (row no. -1)
            cout << char( start+(rows-1) + column -1);
            column +=1;
        }
        cout << endl;
        rows+=1;
    }


17.
    D 
    C D
    B C D
    A B C D

    int n=4;
    int rows =1;
    char start = char('A'+n-1);
    while(rows <=n){
        int column=1;
        while(column<=rows){
            cout<< char( (start-(rows-1)) + (column-1))<< " ";
            column +=1;
        }
        cout << endl;
        rows+=1;
    }

18.
    Reverse star pattern    
   *
  **
 ***
****

    int n =4;
    int rows=1;

    while(rows<=n){
        int column =1;
        while(column<=n){
            //for n=4, row=1, It will go upto 3 and then inset a * 
            if (column<=(n-rows)){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
            column +=1;
        }
        cout<<endl;
        rows+=1;
    }

19.
    Inverted star pattern
    *****
    ****
    ***
    **
    *

    int n=5;
    int rows=1;

    while(rows<=n){
        int column =1;
        while(column<=(n-(rows-1))){
            cout<< "*";
            column +=1;
        }
        cout<< endl;
        rows+=1;    

    }

20.
    Reverse-Inverted Star Pattern
    
    ****
     ***
      **
       *

    int n =4;
    int rows=4;
    
    while(rows>=1){
        int column =1;
        while(column<=n){
            if( (rows+column) <= n){
                cout<< " ";
            }
            else{
                cout<< '*';
            }
            column +=1;
        }
        cout<< endl;
        rows-=1;
    }

21.
    Rverse-Inverted number tree

    1111
     222
      33
       4    
    
    int n=4;
    int rows=4;
    int counter =1;
    while(rows>=1){
        int column=1;
        while(column<=n){
            if(rows+column <=4){
                cout << " ";
            }
            else{
                cout << counter ;
            }
            column+=1;
        }
        cout<<endl;
        rows-=1;
        counter+=1;
    }

22.
    Reversed number pyramid
      1
     22
    333
   4444

    int n=4;
    int rows=1;
    while(rows<=n){
        int column=1;
        while(column<=n){
            if(rows+column <=4){
                cout << " ";
            }   
            else{
                cout << rows;
            }
            column += 1;
        }
        cout << endl;
        rows+=1;
    }

23.
   1
  22
 333
4444
 
    int n=4;
    int rows=1;
    int counter=0;
    while(rows<=n){
        int column=1;
        while(column<=n){
            if(rows+column <=n){
                cout << " ";
            }
            else{
                cout << counter+1;
            }
            column+=1;
        }
        rows+=1;
        cout<< endl;
        counter++;
    }


*/

#include<iostream>
using namespace std;

int main(){
    
    

    return 0;
}
