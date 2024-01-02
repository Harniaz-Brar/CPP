#include <iostream>
using namespace std;
int main(){
    int a ;
    int b ;
    cout << "Enter the value of a : " << endl;
    cin >> a;
    cout << "Enter the value of b : " << endl;
    cin >> b;
    if(a>b)
        cout << "wow a is bigger" << endl;
    else if(a==b)
        cout << "Both are equal" << endl;
    else
        cout << "nah! B is much bigger" << endl;
    return 0;
}