/*
In this tutorial we will learn about sorting algorithms
1. Selection Sort
2. Bubble sort
3. Insertion sort

--------------------------------------------------------------------------------------
                                Selection Sort
                                ``````````````
In each iteration of the array we will get the smallest element and then place it in the correct position and after each iteration the size of the search space will keep on decreasing.

The number of iterations required will be same as that of number of elements in the array.

void swap(int arr[],int x, int y){
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}

int main(){

    int arr[] = {6,5,5,8,2,1,0};
    int size = 7;

    for (int i=0;i<size;i++){
        int sml = arr[i]; // let the smallest value in the search space be the first element
        
        for (int j=i+1;j<size;j++){
            if(arr[j]<sml){
                sml = arr[j];
                swap(arr,j,i);
            }
        }
        cout<<"Smallest value in this iteration : "<<sml<<endl;
    }
    cout<<"\tAfter sorting array: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" "; 
    }
    cout<<endl;
    return 0;

    OUTPUT :
    Smallest value in this iteration : 0
    Smallest value in this iteration : 1
    Smallest value in this iteration : 2
    Smallest value in this iteration : 5
    Smallest value in this iteration : 5
    Smallest value in this iteration : 6
    Smallest value in this iteration : 8
        After sorting array: 0 1 2 5 5 6 8
    
Time Complexity : 
For given n number of elements in the array there will be 1+2+3...+(n-2)+(n-1) = n(n-1)/2 comparisions
therefore complexity = O(n^2)

Use case : It can be used when size of array is small
------------------------------------------------------------------------------------------------
                                Bubble sort
                                ```````````
In this algorithm just compare the adjacent elements and after each round, the largest element will get its correct position, (e.g After first round, the first largest element will be placed at the end of the array, now apply from 0 to n-1 elements and so on.)
For n elements in the array for a particular round, there will be n-2 comparisions and there will be total n-1 rounds 

Code :
    
    void swap(int arr[],int x, int y){
        int temp = arr[x];
        arr[x] = arr[y];
        arr[y] = temp;
    }

    int main(){

        int arr[] = {6,5,5,8,2,1,0};
        int size = 7;


        for (int i=1;i<size;i++){ 

            for(int j=0;j<size-i;j++){
                if(arr[j+1]<arr[j]){
                    swap(arr,j,j+1);
                }
            }
        }
        cout<<"After sorting array: ";
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" "; 
        }
        cout<<endl;
    
    OUTPUT : 
    After sorting array: 0 1 2 5 5 6 8

Time complexity : O(n^2)

OPtimisation : Suppose in a particular round there are no swapping then the array has been sorted then in such case no need of further rounds therefore break from the loop.

    int arr[] = {6,5,5,8,2,1,0};
    // int arr[] = {0,1,2,5,5,6,8};
    int size = 7;
    for (int i=1;i<size;i++){ 
        bool swapped = false;
        for(int j=0;j<size-i;j++){
            if(arr[j+1]<arr[j]){
                swap(arr,j,j+1);
                swapped = true;
            }
        }
        if(swapped == false){ cout<<"Sorted in ith round : "<<i<<endl;break;}
    }
    cout<<"After sorting array: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<","; 
    }
    cout<<endl;

-----------------------------------------------------------------------------------------------
                                    Insertion Sort
                                    ``````````````
**** Needs revision 

Example of cards, take the first card and then making it basis keep comparing next cards and place them accordingly by shifting other cards.

Perks : It is a stable and adaptable algorithm.
        In previous algorithms they had same time complexity in best and worst case but there in worst case it has O(n^2) and in best case it has O(n)

*/

#include<iostream>
using namespace std;

void swap(int arr[],int x, int y){
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}

int main(){

    int arr[] = {6,5,5,8,2,1,0};
    // int arr[] = {0,1,2,5,5,6,8};
    int size = 7;


    for (int i=1;i<size;i++){ 
        bool swapped = false;
        for(int j=0;j<size-i;j++){
            if(arr[j+1]<arr[j]){
                swap(arr,j,j+1);
                swapped = true;
            }
        }
        if(swapped == false){ cout<<"Sorted in ith round : "<<i<<endl;break;}
    }
    cout<<"After sorting array: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<","; 
    }
    cout<<endl;
    return 0;
}   
