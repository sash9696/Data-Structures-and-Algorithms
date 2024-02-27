

#include <iostream>

using namespace std;

void extractDigits(int x){
    int count = 0;
    int reverseNum = 0;
    while (x > 0){

        int lastDigit = x % 10;

        x = x / 10;

        reverseNum = (reverseNum * 10) + lastDigit;

        cout << lastDigit << endl;
        count++;

    }

    cout << "the no of digits are: " <<count << endl;
    cout << "the reverse of the number is: " <<reverseNum;

}
int main(){
    int x;
    cin >> x;
    cout << "Input num is " << x << endl;

    extractDigits(x);

    return 0;
}