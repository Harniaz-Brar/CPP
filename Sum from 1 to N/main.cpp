#include <iostream>
using namespace std;
int main() {
    int sum;
    int n;
    int i=1;
    cout << " Enter the number :" << endl;
    cin >> n;
    while(i<=n) {
        sum = sum + i;
        i = i + 1;
    }
    cout << " The sum of the numbers from 1 to : " << n <<" is : " << sum;
    return 0;
}

