//Nour Kahile-09/10/2020

//SelectionSort Program, will simply take array of integers of length.
//from the users and sort then in ascending order.

#include <iostream>
#define MAX 10

using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

//In order to swap values a and b, we must use a third variable,
//("temporary holding variable"), to temporarily
// hold the value we do not want to lose:
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    // One by one move boundary of unsorted sub-array
    for (i = 0; i < n-1; i++)
    {
        // and then it's going to find the minimum number in the unsorted unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++){
        if (arr[j] < arr[min_idx]){
            min_idx = j;
            }
        }
        // Swap the found minimum element with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}

// Function to print an array
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int N;
    cout<<"Enter the value of N:";
    cin>>N;
    if (N > MAX){
        cout << "number exceeds max of 10 elements" << endl;
    }
    else {
    cout<<"Enter elements of array:";
    int arr[MAX];
    for(int i = 0; i< N; i++){
        cin>>arr[i];
    }
    selectionSort(arr, N);
    //selectionSort() being called in main
    cout << "Sorted array: \n";
    printArray(arr, N);
    return 0;
    }
}
