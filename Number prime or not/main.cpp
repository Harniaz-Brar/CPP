/*#include <iostream>
using namespace std;
int main()
{
    int n;
    int i = 2;
    cout << " Enter the number to find out if its prime or not : " << endl;
    cin >> n;
    while(i < n) {
        if (n % i == 0) {
            cout << "number is not prime for " << i << endl;
        } else {
            cout << " Number is prime for " << i << endl;
        }
        i = i + 1;
    }
} */

#include <iostream>
using namespace std;

int main() {
    int n;
    int i = 2;

    cout << "Enter the number to find out if it's prime or not: " << endl;
    cin >> n;

    bool isPrime = true; // Assume the number is prime initially

    while (i <= n / 2) {
        if (n % i == 0) {
            isPrime = false; // Set isPrime to false if the number is divisible by i
            break; // Exit the loop early if the number is not prime
        }
        i = i + 1;
    }

    if (isPrime)
        cout << "Number is prime" << endl;
    else
        cout << "Number is not prime" << endl;

    return 0;
}
