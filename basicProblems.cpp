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
