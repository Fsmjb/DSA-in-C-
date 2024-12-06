// **Insertion**: Adding an element at a specific position.
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

    int pos; //store positon
    cout << "Enter the position where you want to delete the element : ";
    cin  >> pos;
    cout << "The element to be delete is : " << list[pos] <<endl;

    //show value before deletion
    cout << "list of all element before deletion  is : " << endl;
    for (int x = 0; x < num; ++x){
        cout << "Value of Element " << x +1<< " is : " << list[x] <<endl;
    }

    // make space empty
    for (int x = pos -1; x <num; ++x){
        list[x] = list[x + 1]; //shipt element to up
    }
   

    // show vaue after insertion
    cout << "list of all element after deletion  is : " << endl;
    for (int x = 0; x < num - 1; ++x){
        cout << "Value of Element " << x +1<< " is : " << list[x] <<endl;
    }
    return 0;
}