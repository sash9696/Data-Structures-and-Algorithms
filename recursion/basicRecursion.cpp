
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

void printNTo1Back(int i , int n){

    if( i > n){
        return;
    }

    printNTo1Back(i + 1, n);
    cout << i << endl;
}

void sumOfNNumsParameterized(int i, int sum){

    if(i < 1){
        cout << sum << endl;
        return ;
    }

    sumOfNNumsParameterized(i -1 , sum + i);

}

int sumOfNNumsFuntional(int n){

    if (n == 0 ){
        return 0;
    }

    return n + sumOfNNumsFuntional(n - 1);

}

void factorialParameterized(int i, int result){

    if(i < 2){
        cout << result << endl;
        return;
    }

    factorialParameterized(i - 1, i * result);
}

int factorialFunctional(int n){

    //TC => O(n)
    //SC => stack space => O(n)
    if( n == 0){
        return 1;
    }
    if( n == 1){
        return 1;
    }

    return n * factorialFunctional(n-1);
}

void  reverseAnArrayRecursionTwoPointers(){

}

int main()
{

    int n;

    cin >> n;

    cout << "The input num is : " << n << endl;

    int arr[n];

    for(int x : arr){
        cout << x << endl;
    }

    // printName(1,n);
    // print1ToN(1,n);
    // printNTo1(1, n);
    // print1ToNBack(n,n);
    // printNTo1Back(1,n);
    // sumOfNNumsParameterized(n, 0);
    // cout <<  "sumOfNNumsFuntional: " << sumOfNNumsFuntional(n) << endl;
    // factorialParameterized(n, 1);
    // cout << factorialFunctional(n);

    reverseAnArrayRecursionTwoPointers();


}