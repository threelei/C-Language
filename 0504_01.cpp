#include <iostream>
using namespace std;
int main(){
    // cout << "Please input a string: ";
    // string one;
    // cin >> one ; //>>endl;
    // // cout << "The number of letters in the string is: " << one.size() << endl;
    // cout << "The string is: " << one << endl;
    int a=10;
    int b=20;
    int c=30;
    int d,e;
    d=!c>(b-a) && (c-b)>(b-a);
    e=(b-a)||(c-b)&&!(c-b-a);
    cout << "d=" << d << endl;
    cout << "e=" << e << endl;
    return 0;
}