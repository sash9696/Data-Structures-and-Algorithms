

#include <iostream>

using namespace std;

void extractDigits(int x){

    while (x > 0){

        int lastDigit = x % 10;

        x = x / 10;

        cout << lastDigit << endl;

    }

}
int main(){
    int x;
    cin >> x;
    cout << "Input num is " << x << endl;

    extractDigits(x);

    return 0;
}