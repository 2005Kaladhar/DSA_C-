/*
In this tutorial we will be learning about arrays

1. Same type data can be stored and in contiguous locations

2. Initialising array with zero and any default value

    Initialising array with zero
    
    int arr[100] = { }; // Using empty initialiser  
        //OR// 
    int arr[100] ={0}; //Using zero in the initialiser list
     
    Using for loops
    Using fill_n() inbuilt function to operate on an iterator
    
    Syntax:
    fill_n(array, upto which index , default value(may be a character))

3. If the size of that array is more than he number of elements initialsed then remaning values will be filled by zeroes. What happens in case of character array ??

    int arr[10] = {1};
    This will make first element 1 and remaining zero

    char arr[10] = {'A'};
    This will make first element A and remaining will be initialised by empty character " " a space.

4. Finding the size of array using sizeof operator
    Logic : get the size of whole array using sizeof(array), then divide it by the size of first element of the array

    int arr[10]={10};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<< "size of the array is : "<<size<<endl;
    OUTPUT : size of the array is : 10

5. While using functions with arrays, it is a good practice to give the size of the array also as parameter to the function, because we can find the total size of the array but if the suppose out of all 10 values of the array I have given only 3 elements to the array then rest of them will be initialised with zero so it will be convenient if I explicitly give the size of the array to the function to perform operation to those certain elements only.

6. NOTE- Not using a variable to define the size of the array, although it works

    int size = 10;
    int arr[size];

    .Why ? Compiler must know how much memory has to be allocated in compile time by the variable is 
    unknown till the run time.
    .THis is a "Bad Practice"
    .This was declared 'illegal' by C++ standard committee

7. NOTE : Scope of an array
    In case of variables, if we try to update the value inside a function then the actual variable is not udpated
    But in case of arrays, when we give to a function then we are actually giving the address of the array to the function, therefore any changes made there will modify the original array.

----------------------------------------------------------------------------------------------------
                                Questions 
                            `````````````````

1. Finding max and min value of the array

    int arr[]={12,4,5,6};
    int min=arr[0],max=arr[0];
    for (int i=0;i<4;i++){
        if (arr[i]>max){max =arr[i];}
        else if(arr[i]<min){min=arr[i];}
    }
    cout<<"Min value : "<<min<<"\nMax value : "<<max<<endl;
    OUTPUT:
        Min value : 4
        Max value : 12


2. Finding max and min aplhabet(according to their position)

    char arr[]={'A','K','N','P'};
    char min=arr[0],max=arr[0];
    for (int i=0;i<4;i++){
        if (int(arr[i])>int(max)){max =arr[i];}
        else if(int(arr[i])<int(min)){min=arr[i];}
    }
    cout<<"Min value : "<<min<<"\nMax value : "<<max<<endl;

    OUTPUT :
        Min value : A
        Max value : P

4. Reversing an array // to swap the values we will use inbult function swap

    void reverse(int arr[],int size){
    int start = 0;
    int end = size-1;
    
    while (start<end){
        swap(arr[start],arr[end]);    
        start++;end--;
    }
    cout<<"Printing after reversal of the array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    } 

5. Swapping the position of alternate elements of the array

    void SwapAlternate(int arr[],int size){
    int start = 0;
    
    while (start+2 <= size){
        swap(arr[start],arr[start+2]);
        start+=2;
    }
    cout<<"Printing after alternate reversal of the array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;

    }
    INPUT : 1,2,3,4,5,6
    OUTPUT: 3,2,5,4,8,6


6. Swapping adjacent elements of an array
    
    void SwapAdjacent(int arr[],int size){
    int start = 0;

     while(start+1 < size){
        swap(arr[start],arr[start+1]);
        start+=2;
    }    
    cout<<"Printing after alternate reversal of the array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    }   
    INPUT : 1,2,3,4,5,6
    OUTPUT: 2 1 4 3 6 5
*/

#include<iostream>
using namespace std;

void SwapAdjacent(int arr[],int size){
    int start = 0;

    while(start+1 < size){
        swap(arr[start],arr[start+1]);
        start+=2;
    }    
    cout<<"Printing after alternate reversal of the array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}   

int main(){

    int arr[]={1,2,3,4,5,6};
    SwapAdjacent(arr,6);
}