#include<iostream>
using namespace std;

int getSum(int arr[] , int n)
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int size;
    cin >> size;
    int num[10];
    for(int i = 0; i<size; i++)
    {
        cin >> num[i];
    }
    cout << " Sum of all the elements in the given array is : " << getSum(num ,size);
}