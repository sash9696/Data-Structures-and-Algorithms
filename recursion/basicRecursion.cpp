
#include <iostream>
using namespace std;

//print name n times

void printName(int i, int n){

    if(i > n){
        return;
    }
     cout << "Raj" <<endl;
     printName(i+1, n);
}



int main(){

    int n;

    cin >> n;

    cout << "The input num is : " << n << endl;

    printName(1,n);
}