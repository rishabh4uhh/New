#include <iostream>
using namespace std;

int main() {
    long long n, k, a;
    cin >> n >> k >> a;

    long long product = n * k;

    if (product % a != 0) {
        cout << "double";
    }
    else {
        long long result = product / a;

        if (result >= -2147483648LL && result <= 2147483647LL)
            cout << "int";
        else
            cout << "long long";
    }

    return 0;
}


