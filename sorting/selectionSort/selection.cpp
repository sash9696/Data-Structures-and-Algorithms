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

    selectionSort(arr, n);
    for (int x : arr)
    {
        cout << x << endl;
    }

    return 0;
}