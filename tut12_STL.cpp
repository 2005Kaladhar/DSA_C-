/*
In this tutorial we will learn about STL - Standard Template Library of C++

1. We can iterate over an like this also just like (for i in list) in python
int arr[] = {12,3,4,5,6,6,54,4};
    for(int i : arr){
        cout<<i<<" ";
    }

2. Vectors in C++
Vectors is called dynamic array
to include vector library in our code just write 
#include<vector>

if a vector already has some fixed size and if we want to increase its size then it will double its size and then keeps on adding elements to it.

a. Creating a vector
Syntax:
    vector<datatype> name_of_vector;

passing vector to a function
1. Pass by value
2. Pass by reference

void function(vector<int> a){}  //THis is pass by value method, any changes made inside the function will 
                                  not be relflected in the original vector

void function(vector<int> & a){}  //THis is pass by reference method, any changes made inside the function will 
                                    not be relflected in the original vector


*/

#include<iostream>
#include<vector>

using namespace std;

void func(vector<int> l){
    l.push_back(98);

}


int main(){
    vector<int> a;
    func(a);
    cout<<a.capacity()<<a.front()<<endl;



}
