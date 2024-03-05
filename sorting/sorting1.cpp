#include <iostream>

using namespace std;

void swap(int arr[], int min, int firstIndex)
{

    int temp = arr[firstIndex];

    arr[firstIndex] = arr[min];
    arr[min] = temp;
}

void selectionSort(int arr[], int n)
{

    // algo
    // find the min and swap with the first element of unsorted array

    // last element is already sorted so we need to go till n-2

    // to find min between a given range that is index to min index in range index -> n - 1
    // we need inner loop to iterate and get min

    for (int i = 0; i < n - 2; i++)
    {

        int minIndex = i;

        for (int j = i; j <= n - 1; j++)
        {

            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr, minIndex, i);
    }
}

void bubbleSort(int arr[],int n){

//opp of selection sort
//push the max to the last by adjacent swaps

//outer loop  will go from n - 1 to 1 not 0 because 1 element will be sorted can be zero but not required
//inner loop goe from 0  n -1 then 0 to n - 2 then so on that is nothing but i
    for (int i = n - 1; i >= 1; i--){

        for(int j = 0; j <= i - 1; j++){

            if(arr[j] > arr[j + 1] ){
                swap(arr, j, j + 1);
            }
        }
    }


}

int main()
{
    int n;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // algo

    // selectionSort(arr, n);
    bubbleSort(arr, n);

    for (int x : arr)
    {
        cout << x << endl;
    }

    return 0;
}