//  **Traversal**: Visiting all elements of the array.
#include <iostream>
using namespace std;

int main(){
    int num; //element present in array

    cout << "Number of element in array is : " ;
    cin  >> num; // get value of num
    if(num < 1){
        cout <<  "Please enter a positive number for the number of elements in the array." << endl;
        return 0;
    }

    int list[num];

    //take value of array
    cout << "Enter the value of array :" << endl;
    for(int x = 0; x < num; ++x){ 
        cout << "Enter Element " << x +1 << " value : " ;
        cin  >> list[x];
    }

    // traversal start from here vist to every element in the array & show 
    cout << "list of all element is : " << endl;
    for (int x = 0; x < num; ++x){
        cout << "Value of Element " << x +1<< " is : " << list[x] <<endl;
    }
    return 0;
}