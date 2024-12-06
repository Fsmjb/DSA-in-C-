// **Insertion**: Adding an element at a specific position.

#include <iostream>
using namespace std;

int main(){
    int num ; //element present in array

    cout << "Number of element in array is : " ;
    cin  >> num; // get value of num

    if(num < 1){ 
        cout <<  "Please enter a positive number for the number of elements in the array." << endl;
        return 0;
    }

    int list[num + 1];

    //take value of array
    cout << "Enter the value of array :" << endl;
    for(int x = 0; x < num; ++x){ 
        cout << "Enter Element " << x +1 << " value : " ;
        cin  >> list[x];
    }

    int pos, value; //store positon & value 
    cout << "Enter the value to be insert : ";
    cin  >> value;
    cout << "Enter the position where value to be insert : ";
    cin  >> pos;

    //show value before insertion
    cout << "list of all element before insertion  is : " << endl;
    for (int x = 0; x < num; ++x){
        cout << "Value of Element " << x +1<< " is : " << list[x] <<endl;
    }

    // make space for value to insert
    for (int x = num +1; x > pos -1; --x){
        list[x] = list[x-1]; //shipt element to down 
    }
    list[pos-1] = value; // insert value

    // show vaue after insertion
    cout << "list of all element after insertion  is : " << endl;
    for (int x = 0; x < num +1; ++x){
        cout << "Value of Element " << x +1<< " is : " << list[x] <<endl;
    }
    return 0;
}