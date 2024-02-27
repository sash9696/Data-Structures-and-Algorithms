

#include <iostream>

using namespace std;

// void extractDigits(int x){
//     int count = 0;
//     int reverseNum = 0;
//     while (x > 0){

//         int lastDigit = x % 10;

//         x = x / 10;

//         reverseNum = (reverseNum * 10) + lastDigit;

//         cout << lastDigit << endl;
//         count++;

//     }

//     cout << "the no of digits are: " <<count << endl;
//     cout << "the reverse of the number is: " <<reverseNum;

// }
// bool reverseNum(int x){
//     int duplicate = x;
//     int revNum=0;
//     while(x > 0){
//         int lastDigit = x % 10;
//         x = x / 10;

//         revNum = (revNum * 10) + lastDigit;
//     }
//         cout << "Input num is " << duplicate << endl;

//     cout << "reverse of input  num is " << revNum << endl;

//     if(revNum == duplicate) return true;
//     return false;

// }
bool armstrongCheck(int x)
{
    int duplicate = x;
    int sum = 0;
    while (x > 0)
    {
        int lastDigit = x % 10;
        x = x / 10;

        sum = sum + lastDigit * lastDigit * lastDigit;
    }

    if (sum == duplicate)
        return true;
    return false;
}
int main()
{
    int x;
    cin >> x;
    cout << "Input num is " << x << endl;

    // extractDigits(x);
    //    int isPalindrome =  reverseNum(x);
    //    cout << isPalindrome;
    int isArmstrong = armstrongCheck(x);
    cout << isArmstrong;
    return 0;
}