/*
In this tutorial we will learn about time complexity
The motto of a good programmer is to write and efficient code so as to minimize the time complexity as much as possible.


Big O notation - the maximum time taken by the program for a given input
Theta notation - for average time taken by the program for a given input
Omega notation - the least time taken by the program for a given input


Highest :   O(n!)
            O(2^n)
            O(n^3)
            O(n^2)
            O(nlogn)
            O(logn)
            O(n)
Lowest :    O(1)

---------------------------------------------------------------------------------
                            Finding time complexity 
Ex : 
    int n =8;
    for(int i=0;i<n;i++){
        cout<< i << endl;
    }
    In the above program the time taken by the program depends on n and as n increases time also increases linearly therefore O(n) will be the time complexity.

Ex :
    fun() = n^2 + n/2
    among n^2 and n, n has least complexity therefore the overall complexity will be n

Ex :
    int n=7;
    for(i=0;i<n;i++){
        for(int j=0;j<n;j++){
            //some code
        }
    }

    Here complexity for first "for loop" is O(n) and inside 'for loop' is O(n)
    therefore for nested one we multiply the complexities
    Hence overall complexity will be : O(n^2)

Ex:
    int n=7;
    for(i=0;i<n;i++){
        for(int j=0;j<i;j++){
            //some code
        }
    }
    
    Here for the inside "for loop" it will for different time for each iteration of i
    therefore we will take the worst case scenario, it will have i=0 it will run for maximum times therefore the complexity of inside loop will be O(n)
    Hence overall complexity : O(n^2)

Ex : 
    int n =8;
    for(int i=0;i<n;i++){
        cout<< i << endl;
    }
    int m =8;
    for(int i=0;i<m;j++){
        cout<< j<< endl;
    }

    Here when not nested then we add their time complexites
    therefore overall time complexity : O(n+m) 

------------------------------------------------------------------------------------------
                                Space complexity

Just like time complexity space complexity refres to mathematical relation between the space occupied by the program in the memory with the increase in size of input

For initialisation of a variable space complexity is always O(1)
In case of a vector in which the size is dynamically alloted based on the given size of the vector therefore here the complexity becomes O(n)

*/


#include<iostream>
using namespace std;

int main(){
    return 0;
}
