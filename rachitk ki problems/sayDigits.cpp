#include <iostream>
using namespace std;

void saydigit(int n, string arr[])
{

    // here is the base case of stopping condition
    if (n == 0)
    {
        return;
    }

    // processing
    int digit = n % 10;
    n = n / 10;

    // recursive call
    saydigit(n, arr);
    cout << arr[digit] << " ";
}

int main()
{

    string arr[11] = {"zero", "one", "two", "three",
                      "four", "five", "six", "seven",
                      "eight", "nine", "ten"};

    int n;
    cin >> n;

    saydigit(n, arr);

    return 0;
}