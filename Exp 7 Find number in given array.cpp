//Sanskriti Khairnar
//PRN-24070123054
//Batch-A2
//Experiment 7

#include <iostream>
using namespace std;

int main() {
    int index;
    int arr[5] = {4,8,12,16,20};
    
    cout<<"Enter the index of the element you want to find (from 0-4): ";
    cin>>index;
    
    for(int i=0 ; i<5 ; i++){
        if(index == i){
            cout<<arr[i];
        }
        else{
            continue;
        }
    }
    
    return 0;
}

//Output

//Enter the index of the element you want to find (from 0-4): 4
//20
