#include <iostream>
using namespace std;

void changeArr(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        arr[i] *= arr[i]; // sqaring all the digits/elements/values
    }
    
}

int main() {
    int size = 3;
    int arr[] = {1, 2, 3};

    // cout << arr << endl; // It returns an hexadecimal value and it is the memory address of the array

    changeArr(arr, size); // invoking/calling a function

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }

    // We can see that the value has changed as the memory location of the first element (starting address) has been passed and not the copy!. The original one is being passed here!
    
    
    

    return 0;
}