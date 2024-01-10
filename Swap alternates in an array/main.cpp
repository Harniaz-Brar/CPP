#include<iostream>
using namespace std;

void swapAlternate(int arr[], int n)
{
    int start = 0;
    int end = 1;
    while(start <n && end<n){
        swap(arr[start], arr[end]);
        start = start + 2;
        end = end +2;
    }

}

void printArray(int arr[] , int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";

    }
    cout << endl;
}

int main() {

    int size;
    cout << "enter the size  of the array :  " ;
    cin >> size;

    int arr[10];
    cout << " Enter the elements of the array" << endl;
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << " elements of the array are : ";
    for(int i = 0; i<size; i++)
    {
        cout << arr[i] << "  ";

    }
    cout << endl;

    swapAlternate(arr , size);
    cout << "elements of he array after swapping are : " << endl;
    printArray(arr , size);

    return 0;



}