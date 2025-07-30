//Sanskriti Khairnar
//PRN-24070123054
//Batch-A2
//Experiment 7

#include <iostream>
using namespace std;

int main() {
    int sum=0, average;
    int arr[5] = {4,8,12,16,20};
    
    for(int i=0 ; i<5 ; i++){
        cout << arr[i] <<"\t";
    }
    
    cout<<endl;
    
    for(int i=0 ; i<5 ; i++){
        sum = sum + arr[i];
    }
    
    average = sum/5;
    cout<<"The sum is: "<<sum<<endl;
    cout<<"The average is: "<<average<<endl;
    
    return 0;
}

//Output

//4	8	12	16	20	
//The sum is: 60
//The average is: 12

