#include<iostream>
using namespace std;

int main(){
//    int num = 5;
//    cout << num << endl;
//
//    //address of Operator - &
//
//    cout << "Address of num is " << &num <<  endl;
//
//    int *ptr = &num;
//
//    cout << "Value is : " << *ptr << endl;
//    cout << "Address is : " << ptr <<endl;

    int num = 5;
    int a = num;
    cout << " a before" << num << endl;
    a++;
    cout << "after" << num << endl;

    int *p = &num;
    cout << "before : " << num << endl;
    (*p)++;
    cout << "after : " << num << endl;

    int *q =p;
    cout << p << " ";

    return 0;

}