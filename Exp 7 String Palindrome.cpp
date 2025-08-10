//Sanskriti Khairnar
//PRN-24070123054
//Batch-A2
//Experiment 7

#include <iostream>
#include <cstring>
using namespace std; 

int main() {
    string str;
    
    cout<<"Enter a word: ";
    cin>>str;
    int flag = 0;
    int len = str.length();
    for(int i = 0; i<len/2; i++){
            if(str[i] != str[len - 1 - i]){
                flag = 1;
                cout<<"Not a palindrome";
                exit(0);
            }
        }
    
    if(flag == 0){
        cout<<"Palindrome";
    }

    return 0;
}

//Output

//Enter a word: madam
//Palindrome
