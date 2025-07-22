#include<iostream>
using namespace std;

int fact(int n) {
    if(n <= 0) {
        return 1;
    } else {
        int result = n * fact(n - 1);
        cout << n << " ";  
        return result;
    }
}

int main() {
    int n = 5;
    int result = fact(n);
    cout << "\nFactorial of " << n << " is " << result << endl;
}
