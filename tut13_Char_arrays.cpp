/*
IN this tutorial we will learn about character arrays
---------------------------------------------------------------------------------------
                        Limitations of cin 
                        ``````````````````
cin stops the execution when it encoutners a space, tab or newline character
we cannot have string with multiple words using cin




                            Questions 
                            `````````
Q1. find lenght of a string

    char arr[10];
    cout<< "Enter a character: ";
    cin >> arr;
    int count = 0;
    while(arr[count]!='\0'){
            count+=1;
        }
    cout<<"No. of characters in the string is : "<<count;



Q2. Reverse an array and also check if it is a palindrome

    int getLenght(char arr[]){
        int count=0;
        while(arr[count]!='\0'){
            count++;
        }
        return count;

    }
    int main(){
        char arr[20];
        cout<<"Enter a string : ";
        cin>>arr;

        int start =0;
        int chkPalindrome = 0;
        int end=getLenght(arr)-1;
        while(start<=end){
            if(arr[start] == arr[end]){chkPalindrome++;}
            char temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
        cout<<"After reversing the array : "<< arr<<endl;
        if(chkPalindrome == (getLenght(arr)/2)+1){cout<<"It is a palindrome"<<endl;}


Q3. Conversion from upper case to lower case and vice versa
    char lower(char c){
        if(c>='a' & c<='z'){
            return c;
        }
        else {
            return (c - 'A' + 'a');
        }
    }

    char upper(char c){
        if(c>='A' & c<='Z'){
            return c;
        }
        else if (c>='a' & c<='z') {
            return (c - 'a' + 'A');
        }

        //For punctuations and non alphabetic characters
        else {
        return c;}
    }

    int main()
    {
        char arr[]="KALADHAR";
        for(char c : arr){
            cout<<lower(c);
        }
        cout<<endl;
    } 

Q4. Using string library to perform some common operations on it 

#include<iostream>
#include<string>
using namespace std;

int main(){
    string name = "kaladhar   ";
    cout<< name<<endl;
    name.resize(8);
    name.shrink_to_fit();
    name.append("Gopal");
    cout<<(name=="kaladhar")<<endl;
    name.clear();
    

    return 0;
}

String is a collection of characters only and is dynamically allocated in memory and hence it is relatively easy to work with string than character array


Q5. Check for valid palindrome
Valid palindrome - After converting all to lower case and removing non alphanumeric characters the string is palindrome then it is called valid palindrome.

char lowerCase(char c ){
    if (c>='A' & c<='Z'){
        char lower = c- 'A' +'a';
        return lower;
    }
    else if (c>='a' & c<='z' || c>='0' & c<='9'){
        return c;
    }
    else {
        return '-';
    }
}

int checkPalindrome(char arr[], int len){
    int start = 0;
    int end = len -1;
    int check = 0;

    while(start <= end){
        if(arr[start] == arr[end]){check++;}
        start ++;
        end -- ;
    }

    cout<<"Check : "<<check<<endl;

    //This condition will make check = (len/2) +1 in case of odd length and just len/2 for even
    if(check == (len/2)+(len%2)){
        cout<<"True";
        return 1;
    }
    else{
        cout<<"False";
        return 0;
    }
}

int main(){

    char str[] = "Wo1&&1ow";
    int len;
    for(len;str[len]!='\0';len++){}

    for(int i =0; i<len;i++){
        str[i] = lowerCase(str[i]);
    }
    checkPalindrome(str,len);   

    return 0;
}

=-----------------------------------------------------------------------------------------------------------------------
Q6. Finding the maximum occuring character in the string

My logic - Run two for loops and for each iteration compare the character with the characters ahead and count the number of occurences 

    char maxChar;
        int count =0;
        int max=0;
        string str = "outut";
        
        for(int i=0;i<str.size();i++){
            char c = str[i];
            for(int j =i;j<str.size();j++){
                if(str[i] == str[j]){
                    count++;
                }
            }
            if(count>max){max = count; maxChar =c;}
            count =0;
        }

        cout<<"Maximum occurence of : "<<max<<" "<<maxChar<<endl;


Optimum  - Create an array of size 26 and for each occurence of alphaber increase the corresponding index by one and at the end find the mximum from that array which will give us the no. of occureneces and index of the array will help us to find the character 

    string inp = "wow";
    int arr[26] = {0}; //Initialise it with zero

    for(int i=0;i<inp.size();i++){
        char ch = inp[i];

        if(ch >='a' && ch <='z'){
            arr[ch - 'a']++;
        }
        else if(ch >='A' && ch <='Z'){
            arr[ch - 'A']++;
        }
    }
    
    int occur =0;
    int alpha;
    for(int i=0;i<26;i++){
        if(arr[i]>occur){
            occur=arr[i];
            alpha =i;
        }
    }
    cout<<"Maximum occurence of : "<<char('a'+alpha) <<occur<<endl;

---------------------------------------------------------------------------------------------------------------------------

Q7. Insert @40 in place of whitespaces in a string

By creating a new string and then appending to the string

    string str = "kaladhar gopal is a good boy";
        string output="";
        
        for(int len=0;len<str.length();len++){
            if(str[len] == ' '){
                output.push_back('@');
                output.push_back('4');
                output.push_back('0');
            }
            else{
                output.push_back(str[len]);
            }
        }
        cout<<output<<endl;

Without creating a new string - by using .insert() method of string


*/

#include<iostream>
#include <string>
using namespace std;



int  main(){

}
