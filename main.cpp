#include<iostream>
#include<vector>
#include "klargest.h"
using namespace std;

int main() {
    vector<int> values = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    int k = 5;
    int result = kth_largest(values, k);
    cout << "The " << k << "th largest element is: " << result << endl;

    return 0;
}