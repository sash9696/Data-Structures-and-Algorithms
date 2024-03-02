
#include <iostream>
using namespace std;

// print name n times

void printName(int i, int n)
{

    // TC => O(n) => n+1 function calls
    // SC => O(n) => stack space

    if (i > n)
    {
        return;
    }
    cout << "Raj" << endl;
    printName(i + 1, n);
}

void print1ToN(int i, int n)
{

    if (i > n)
    {
        return;
    }
    cout << i << endl;
    print1ToN(i + 1, n);
}

void printNTo1(int i, int n)
{

    if (n < i)
    {
        return;
    }
    cout << n << endl;
    printNTo1(i, n - 1);
}

void print1ToNBack(int i, int n)
{

    if (i < 1)
    {
        return;
    }

    print1ToNBack(i - 1, n);
    cout << i << endl;
}

void printNTo1Back(int i, int n)
{

    if (i > n)
    {
        return;
    }

    printNTo1Back(i + 1, n);
    cout << i << endl;
}

void sumOfNNumsParameterized(int i, int sum)
{

    if (i < 1)
    {
        cout << sum << endl;
        return;
    }

    sumOfNNumsParameterized(i - 1, sum + i);
}

int sumOfNNumsFuntional(int n)
{

    if (n == 0)
    {
        return 0;
    }

    return n + sumOfNNumsFuntional(n - 1);
}

void factorialParameterized(int i, int result)
{

    if (i < 2)
    {
        cout << result << endl;
        return;
    }

    factorialParameterized(i - 1, i * result);
}

int factorialFunctional(int n)
{

    // TC => O(n)
    // SC => stack space => O(n)
    if (n == 0)
    {
        return 1;
    }
    if (n == 1)
    {
        return 1;
    }

    return n * factorialFunctional(n - 1);
}

void reverseAnArrayRecursionTwoPointers()
{
}

void reverseAnArrayRecursionTwoPointers(int i, int arr[], int n)
{

    int left = i;
    int right = n - 1;

    if (left > right)
    {
        return;
    }

    int temp = arr[left];
    arr[left] = arr[right];
    arr[right] = temp;
    i++;
    n--;

    reverseAnArrayRecursionTwoPointers(i, arr, n);
}

void reverseAnArrayRecursionSinglePointer(int i, int arr[], int n)
{

    if (i >= n / 2)
        return;
    // swap arr[i], arr[n-i-1]
    int temp = arr[i];
    arr[i] = arr[n - i - 1];
    arr[n - i - 1] = temp;

    reverseAnArrayRecursionSinglePointer(i + 1, arr, n);
}
int main()
{

    int n;

    cin >> n;

    cout << "The input num is : " << n << endl;

    int arr[n];

    // for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
    //     int a;
    //     cin >> a;
    //     arr[i] = a;
    // }
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Input array: " << endl;
    for (int x : arr)
    {
        cout << x << " ";
    }
    cout << endl;

    // printName(1,n);
    // print1ToN(1,n);
    // printNTo1(1, n);
    // print1ToNBack(n,n);
    // printNTo1Back(1,n);
    // sumOfNNumsParameterized(n, 0);
    // cout <<  "sumOfNNumsFuntional: " << sumOfNNumsFuntional(n) << endl;
    // factorialParameterized(n, 1);
    // cout << factorialFunctional(n);

    // reverseAnArrayRecursionTwoPointers(0, arr, n);
    reverseAnArrayRecursionSinglePointer(0, arr, n);

    cout << "Reverse array: " << endl;

    for (int x : arr)
    {
        cout << x << " ";
    }
}