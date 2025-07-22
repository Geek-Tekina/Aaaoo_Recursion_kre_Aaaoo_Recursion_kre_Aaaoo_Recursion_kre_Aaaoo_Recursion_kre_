#include<iostream>
using namespace std;


bool checkPallindrome(string &str, int l, int r) {

    // base case 
    if( l > r) {
        return true;
    }

    if(str[l] != str[r]) {
        return false;
    } else {
        // recursive call 
        return checkPallindrome(str, l+1, r-1);
    }

}

int main() {

    string name = "naman";

    bool isPallindrome = checkPallindrome(name, 0, name.length()-1);

    if(isPallindrome) {
        cout << "it's pallindrome " << endl;
    } else {
        cout << "it's not pallindrome " << endl;
    }
}
