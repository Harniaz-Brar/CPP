#include<iostream>
#include <vector>
using namespace std;

int pivotElement(vector<int>& arr) {

    int start = 0;
    int end = arr.size() - 1;


    while(start<end) {
        int mid = start + (end - start)/2;
        if(arr[mid]>arr[mid+1]) {
            start = mid +1;
        }
        else{
            end = mid;
        }

    }
    return start;
}


int main() {
    vector<int> odd = {3, 2, 1, 4, 5, 6, 7};
    vector<int> even = {4, 3, 2, 1, 5, 6};

    int index = pivotElement(odd);
    cout << "index of pivot element in the array is " << " "<< index  ;
    return 0;

}