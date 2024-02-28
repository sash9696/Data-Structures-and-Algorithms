

#include <iostream>
#include <vector>

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
// bool armstrongCheck(int x)
// {
//     int duplicate = x;
//     int sum = 0;
//     while (x > 0)
//     {
//         int lastDigit = x % 10;
//         x = x / 10;

//         sum = sum + lastDigit * lastDigit * lastDigit;
//     }

//     if (sum == duplicate)
//         return true;
//     return false;
// }

void printAllDivisors(int x){

    cout << "The divisors of " << x << " are: " << endl;

    for(int i = 1; i <= x; i++){

        if(x % i == 0){
            cout << i << " ";
        }

    }

    //time complexity => O(n)

}

void printAllDivisorsOpt(int x){

    cout << "The divisors of " << x << " are: " << endl;

       vector<int> ls;



    for(int i = 1; i*i <= x; i++){

        //Time complexity-> O(sqrt(n))
        if(x % i == 0){
            // cout << i << " ";
            ls.push_back(i);
            if(i != x/i){
                cout<< x/i << " ";
                // ls.push_back(x/i);

            }
        }

    }

        //Time complexity-> O(no of factors * log(no of factors))

    sort(ls.begin(), ls.end());

        //Time complexity-> O(no of factors)

    for(auto it:ls) cout << it << " ";

    //time complexity => O(n)

}

void isPrime(int x){
    //brute force O(n)
    int count = 0;
    for(int i=1; i <=x ; i++){

        if(x % i == 0){
            count ++;

        }

    }

        if(count == 2) cout << true;
        else cout << false;
}
int main()
{
    int x;
    cin >> x;
    cout << "Input num is " << x << endl;

    // extractDigits(x);
    //    int isPalindrome =  reverseNum(x);
    //    cout << isPalindrome;
    // int isArmstrong = armstrongCheck(x);
    // cout << isArmstrong;
    // printAllDivisors(x);
    // printAllDivisorsOpt(x);
    isPrime(x);
    return 0;
}