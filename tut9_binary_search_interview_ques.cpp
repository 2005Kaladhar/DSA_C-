/*
In this tutorial we will learn about Binary search algorithm and related questions for interview and more

Logic : Binary search is only applicable on monotonic functions, if we are given as set of elements then to apply
        binary search on it they have to be sorted in increasing or decreasing order

        key - value whose index has to be found 

        First we find the middle element of the whole array then compare with the key, if not equal to the key
        then check if it is greater than the key, if yes then we need to search in the second half of the array (e.g make start = mid+1),
        if key is less than the middle element then we will have to search in the first half of the array(e.g make end = mid-1)

        In this way the array keeps getting shorter by half
--------------------------------------------------------------------------------------------------------------
Q.Why better than linear search ? 
    Ans - Suppose we have 1000 elements then in worst case we will make 1000 searches 
            But in case of binary search, in worst case(last element) we have to make 10 comparisions only

    N
    N/2
    N/4
    .
    .
    .
    .and so on, the size of the array keeps on decreasing

    Since Big O notation talks about the worst case scenario
    in the worst case scenario the final length of the array will be 1

    N/2^k  At 'kth' time the lenght of the element becomes 1

    so N/2^k = 1 => N = 2^k
    taking log(base10) on both sides
    log(N) = klog(2)
    log(N)/log(2) = k
    
    Since in Big O notation division by constant is not considered therefore time complexity of the algo is
    log(N)

----------------------------------------------------------------------------------------------------------------

Algorithm -
(Optimised )
    int size = 10;
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int start=0,end=size-1;
    int key = 9;

    while(start<=end){
        
        VVIMP
        NOTE - here, it is good to write
        // int mid = start + ((end-start)/2)
        Why ?? In int maximum value can be 2^31 -1, if any one of start/end is 2^31 then while calculating 
        start+end will exceed the limit of the int even if the average is in the range therefore it is better to write like this bcoz the difference will not exceed the range of int in such cases.

        int mid= (start+end)/2;

        if(arr[mid] == key){
            cout<< "Found at position : "<<mid+1<<endl; 
            break;
        }
        else if (key>arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }  
------------------------------------------------------------------------------------------------------------
                                Binary search INterview Questions
                                ````````````````````````````````

Q.1 Finding the left most occurence,right most occurenece, total occurence of a value in an array using binary search algo

    int Occurence(int arr[],int size, int key,bool l_occur=true){
        
        //l_occur will tell the function which occurence to find, left most or right most
        //By default it will return left most occurence of the key
    
    int start =0;
    int end = size-1;
    int count =-1;

    while(start<=end){
        int mid = start+ (end- start)/2;
        if(arr[mid] == key){
            count= mid;
            if(l_occur == true){end = mid-1;}
            else{start = mid+1;}
        }
            if(key>arr[mid]){
                start = mid+1;
            }
            if(key<arr[mid]){
                end = mid-1;
            }
        }
        return count;
    }



Q2. Peak index in a mountain array
    Mountain array - In which elements are arranged in increasing order then decreasing order
    ex : 1,4,5,6,8,1,0 -> it increases upto 8 and then decreases upto 0

    Logic  : for incresing elements the adjacent right value will be greater than the left value
            for decreasing elements the adjacent right value will be smaller than the lef value
            for the peak value it will be greater than adjacent left and adjacent right value

   Process: Find mid of the array, check whether it is greater than right and left element,
            if yes then it is the peak element, 
            if adjacent right is smaller than mid element, then we are in the decreasing side, we need to move left, therefore make end = mid-1;
            if adjacent right is greater than mid element, then we are in the increasing side, we need to move right, therefore make start = mid+1; 
Code :
    int size=4;
    int arr[]={0,10,5,2};
    int start = 0;
    int end = size-1;

    while(start<=end){
        int mid = start + (end-start)/2;

        //If it is peak element break the loop
        if(arr[mid]> arr[mid-1] && arr[mid]>arr[mid+1]){
            cout<< "Peak element : "<<arr[mid]<<" At position : "<<mid+1<<endl;
            break;
        }
        //Move right when in the increasing side 
        else if(arr[mid]<arr[mid+1]){
            start = mid+1;
        }
        //Move left when in the decreasing side
        else if(arr[mid]>arr[mid+1]){
            end= mid-1;
        }
    }

Q3. Find the pivot element in the array
    Ex : {1,2,3,4,5,6,7,8,9} Sorted array
    Ex : {6,7,8,9,1,2,3,4,5} Sorted and rotated array

    When the graph is plotted for the Sorted rotated array, then the
    (in some questions Maximum, in some questions minimum value) is called the pivot element

    In the above given example, 1 will be the pivot element

    My Logic :
    `````````
    int size=7;
    int arr[]={9,10,1,2,3,4,5};
    int start = 0;
    int end = size-1;

    while(start<=end){
        int mid= start +(end-start)/2;

        //You got the peak value or the minimum value, therefore the pivot element
        if( arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1] || !(arr[mid]>arr[mid+1] || arr[mid]>arr[mid-1]) ){
            cout<<"Pivot element : "<<arr[mid]<<" At position: "<<mid<<endl;
            break; 
        }
        //You are in the right side, need to move left
        else if(arr[mid]<arr[mid+1]){
            end = mid-1;
        }

        //You are in left need to move right
        else if(arr[mid]>arr[mid-1]){
            start=mid+1;
        }
    }

    Problem in my logic : Sometimes give max value, sometimes give min value, cannot decide 
    `````````````````````
    
    Efficeint Code : Graphical approach to this problem
    ``````````````
    


*/                                  

#include<iostream>
using namespace std;

int main(){
    int size=7;
    int arr[]={9,10,1,2,3,4,5};
    int start = 0;
    int end = size-1;

    while(start<=end){
        int mid= start +(end-start)/2;

        //You got the peak value or the minimum value, therefore the pivot element
        if( arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1] || !(arr[mid]>arr[mid+1] || arr[mid]>arr[mid-1]) ){
            cout<<"Pivot element : "<<arr[mid]<<" At position: "<<mid<<endl;
            break; 
        }
        //You are in the right side, need to move left
        else if(arr[mid]<arr[mid+1]){
            end = mid-1;
        }

        //You are in left need to move right
        else if(arr[mid]>arr[mid-1]){
            start=mid+1;
        }
    }
}
