
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

void print1ToNBack(int i, int n){


    if(i < 1){
        return;
    }

    print1ToNBack(i - 1, n);
    cout << i << endl; 
}

int main()
{

    int n;

    cin >> n;

    cout << "The input num is : " << n << endl;

    // printName(1,n);
    // print1ToN(1,n);
    // printNTo1(1, n);
    print1ToNBack(n,n);
}