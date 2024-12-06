// - **Searching**: Finding the index of a specific element.
//      - Linear Search

#include <iostream>
using namespace std;
int main(){
    int num ; //element present in array

    cout << "Number of element in array is : " ;
    cin  >> num; // get value of num

    int list[num ];
    if(num < 1){
        cout <<  "Please enter a positive number for the number of elements in the array." << endl;
        return 0;
    }

    //take value of array
    cout << "Enter the value of array :" << endl;
    for(int x = 0; x < num; ++x){ 
        cout << "Enter Element " << x +1 << " value : " ;
        cin  >> list[x];
    }
    int value, position = -1 ;
    cout << "Enter the value to be search : ";
    cin  >> value;

    for (int x = 0; x < num; ++x){
        if(list[x] == value){
            position = x;
        }
    }

    if(position < 0){
        cout << "Value Not found " << endl;
    }
    else{
        cout << value << " is present on : " << position + 1 << endl;
    }
    return 0;
}