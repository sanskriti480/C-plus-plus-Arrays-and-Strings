//Sanskriti Khairnar
//PRN-24070123054
//Batch-A2
//Experiment 7

#include <iostream>
using namespace std;

int main() {
    int sum=0, average, max, min;
    int arr[5] = {14,8,12,28,20};
    
    for(int i=0 ; i<5 ; i++){
        cout << arr[i] <<"\t";
    }
    
    cout<<endl;
    
    max = arr[0];
    for(int i=0 ; i<5 ; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        else{
            continue;
        }
    }
    cout<<"The maximum number is: "<<max;
    
    cout<<endl;
    
    min = arr[0];
    for(int i=0 ; i<5 ; i++){
        if(arr[i] < min){
            min = arr[i];
        }
        else{
            continue;
        }
    }
    cout<<"The minimum number is: "<<min;
    
    return 0;
}

//Output

//14	8	12	28	20	
//The maximum number is: 28
//The minimum number is: 8

