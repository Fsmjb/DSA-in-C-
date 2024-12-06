// - **Searching**: Finding the index of a specific element.
//      - Binary Search (for sorted arrays)

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
    cout << "Enter the value of array:" << endl;
    for(int x = 0; x < num; ++x){ 
        cout << "Enter Element " << x +1 << " value : " ;
        cin  >> list[x];
    }

    int value, position = -1 ;
    cout << "Enter the value to be search : ";
    cin  >> value;

    int lo = 0,up = num -1, mid;

    while(lo <= up){
        mid = (up  +  lo) /2;
        if(list[mid] == value){
            position = mid;
            break;
        }
        else{
            if (list[mid] < value){
                lo = mid +1;
            }
            else{
                up = mid -1;
            }
        }
    }

    if (position == -1){
        cout << "value not found " << endl;
    }
    else{
        cout << value << " found on position ; " << position +1 << endl;
    }
    return 0;
}