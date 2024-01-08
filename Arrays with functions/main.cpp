#include<iostream>
using namespace std;

//HOLD
void printArray(int arr[] , int size) {
    cout << "printing the array" << endl;
    for( int i = 0; i<size; i++) {
        cout << arr[i] << "  ";
        cout << "printing done" << " " ;
    }

}

int main()
{
    int number[15];
    cout << "Value at 0 index : " << number[0] << endl;
    cout << "Everything is fine" << endl;
    int second[3] = {5,7,11,};
    cout << "Value at 2nd index : " << second[2] << endl;
    int third[15] = {2,5};
    cout <<  "value at 3rd index : " << third[0] << endl;
    int n = 15;
    printArray(third, 1);
    int ThirdSize = sizeof(third)/sizeof(int);
    cout << ThirdSize << endl;
}
