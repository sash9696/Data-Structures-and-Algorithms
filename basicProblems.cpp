#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 7;
    int sum = a + b;
    cout << "The sum of " << a << " and " << b << " is: " << sum << endl;
    return 0;
}
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num = 5;
    cout << "Factorial of " << num << " is: " << factorial(num) << endl;
    return 0;
}

#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int num = 13;
    if (isPrime(num))
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;
    return 0;
}
#include <iostream>
using namespace std;

double calculateAverage(int arr[], int size) {
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Average of numbers in the array: " << calculateAverage(arr, size) << endl;
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

string reverseString(string str) {
    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        swap(str[i], str[n - i - 1]);
    }
    return str;
}

int main() {
    string str = "Hello, World!";
    cout << "Original string: " << str << endl;
    cout << "Reversed string: " << reverseString(str) << endl;
    return 0;
}
