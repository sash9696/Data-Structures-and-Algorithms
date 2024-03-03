
#include <iostream>
using namespace std;
#include <cctype>

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

bool isStringPalindromeFunctional(int i, string &n)
{

    if (i >= n.size() / 2)
    {
        return true;
    }

    if (n[i] != n[n.size() - i - 1])
    {
        return false;
    }

    return isStringPalindromeFunctional(i + 1, n);
}

int nthFibonnaciLoop(int n)
{

    // f(n) = f(n-1) + f(n-2)

    if (n <= 1)
    {
        return n;
    }
    int last = 1;
    int slast = 1;
    for (int i = 2; i < n; i++)
    {

        int temp = last;

        last = last + slast;

        slast = temp;
    }

    return last;
}

int nthFibonnaciRecursive(int n)
{

    // for every recursive call
    // n - 1 and n-2 is also called i.e min 2 function calls
    //  so approximately TC => O(2^n)
    if (n <= 1)
        return n;

    return nthFibonnaciRecursive(n - 1) + nthFibonnaciRecursive(n - 2);
}

bool isStringPalindromeLoop(string &s)
{

    // Remove non-alphanumeric characters and convert to lowercase
    string cleanString;
    for (char c : s)
    {
        if (isalnum(c))
        {
            cleanString += tolower(c);
        }
    }
    if (cleanString.empty())
    {
        return true;
    }

    for (char x : cleanString)
    {
        cout << x;
    }
        cout << endl;

    int n = cleanString.length();

    cout << "n: " << n;

    cout << endl;

    int i = 0;

    while (i <= n / 2)
    {

        if (cleanString[i] != cleanString[n - i - 1])
        {
            return false;
        }
        i++;
    }
    return true;
}
int main()
{

    // int n;

    // cin >> n;

    // cout << "The input num is : " << n << endl;

    // int arr[n];

    // for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
    //     int a;
    //     cin >> a;
    //     arr[i] = a;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // cout << "Input array: " << endl;
    // for (int x : arr)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;

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
    // reverseAnArrayRecursionSinglePointer(0, arr, n);

    // cout << "Reverse array: " << endl;

    // for (int x : arr)
    // {
    //     cout << x << " ";
    // }

    // string n;

    // cin >> n;

    // cout << "The input string is : " << n << endl;

    //    cout<< isStringPalindromeFunctional(0, n);

    //    cout<< nthFibonnaciLoop(n);
    //    cout<< nthFibonnaciRecursive(n);

    string n = " ";
    cout << "isPalindrome: "<< isStringPalindromeLoop(n);

    return 0;
}