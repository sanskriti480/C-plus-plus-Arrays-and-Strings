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
    
    int len = str.length();
    cout<<"Reversed word :";
    for(int i = len - 1; i >= 0 ; i--){
        cout<<str[i];
    }

    return 0;
}

//Output

//Enter a word: Science
//Reversed word :ecneicS
