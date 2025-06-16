#include <iostream>
using namespace std;
#include <climits>  // This enables INT_MAX and INT_MIN

// Question 1
void sumAndProductOfAllNumbers(int arr[], int size){
    int sum = 0, product = 1;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
        product *= arr[i];
    }
    cout << "The sum of all the numbers of the array is: " << sum << endl;
    cout << "The product of all the numbers of the array is: " << product << endl;
}

// Question 2
void swapMaxMinNumber(int arr[], int sz){
    int max = INT_MIN, min = INT_MAX;
    int max_index = -1, min_index = -1;

    for (int i = 0; i < sz; i++)
    {
        if(arr[i] > max){
            max = arr[i];
            max_index = i;
        }
        if (arr[i] < min)
        {
            min = arr[i];
            min_index = i;
        }
    }

    if (min_index != -1 && max_index != -1) {
        swap(arr[min_index], arr[max_index]);
    }
}

// Question 3
// WAF: This function prints all unique values in the array
void printUniqueValues(int arr[], int sz){
    for (int i = 0; i < sz; i++){
        bool isUnique = true;

        for (int j = i+1; j < sz; j++){
            if (arr[i] == arr[j]){
                isUnique = false;
                break;
            }
            
        }

        if (isUnique){
            cout << arr[i] << " ";
        }
    }

    cout << endl;
    
}

// Question 4
// WAF to print intersection of two arrays
void intersectionOfTwoArrays(int arr1[], int arr2[], int sz1, int sz2){
    for (int i = 0; i < sz1; i++){

        for (int j = 0; j < sz2; j++){
            if (arr1[i] == arr2[j]){
                cout << arr1[i] << endl;
            }
        }
    }
    
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    // WAF (Write A Function) to calculate sum and product of all numbers in an array
    sumAndProductOfAllNumbers(arr, size);

    swapMaxMinNumber(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    
    cout << endl;

    printUniqueValues(arr, size);

    int arr2[4] = {2,3,9,13};
    int size2 = 4;
    cout << "Intersection: " << endl;
    intersectionOfTwoArrays(arr, arr2, size, size2);
    
    return 0;
}