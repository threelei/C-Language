#include<iostream>
#include <string>
#include <vector>
using namespace std;
class Solution{
private:

public:
    int properties;
    void getProperties(int n){
        properties = 0;
        for (int i = 1; i <= n; i++){
            if (n % i == 0){
                properties++;
            }
        }
    }
};
int main(){
    int n;
    cin >> n;
    cout << "The number of properties of " << n << " is: ";
    return 0;
}