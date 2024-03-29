#include<iostream>
using namespace std;

void printSum(int arr[][4], int i, int j){
    cout << " Printing sum -> " << endl;
    for(int i =0; i<3; i++){
        int sum =0;
        for(int j=0; j<4; j++){
            sum +=arr[i][j];

        }
        cout << sum << " ";
    }
    cout << endl;
}

int largestRowSum(int arr[][4], int i, int j) {
    int maxi = INT_MIN;
    int rowIndex = -1;
    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            sum += arr[i][j];
        }
        if (sum > maxi) {
            maxi = sum;
            rowIndex = i;
        }
    }
    cout << " The maximum sum is : " << maxi << endl;
    return rowIndex;
}



int main(){
    int arr[3][4];
    cout << "Enter the elements of the array" << endl;
    for(int i=0; i<3; i++) {
        for(int j=0; j<4; j++){
            cin >> arr[i][j];
        }
    }
    cout << "Printing the array" << endl;
    for (int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    };

    printSum(arr, 3, 3);

    cout << " Max row is at index : " << largestRowSum(arr, 3, 4) << endl;
    return 0;
}