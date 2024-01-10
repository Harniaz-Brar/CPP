#include<iostream>
using namespace std;

int findUnique(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool isUnique = true;

        // Check if arr[i] is repeated in the array
        for (int j = 0; j < n; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                isUnique = false;
                break;
            }
        }

        // If arr[i] is unique, print it and return
        if (isUnique)
        {
            return arr[i];
        }
    }

    // If no unique element found, you can return some default value or handle it according to your requirements.
    return -1;
}

int main()
{
    int size;
    cout << "Enter the number of elements in an array: ";
    cin >> size;

    int arr[10]; // Consider using dynamic memory allocation if you need a variable-sized array.
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int uniqueElement = findUnique(arr, size);

    if (uniqueElement != -1)
    {
        cout << "Unique element in the array: " << uniqueElement << endl;
    }
    else
    {
        cout << "No unique element found in the array." << endl;
    }

    return 0;
}
