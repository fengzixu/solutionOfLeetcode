#include "array/array2.h"

int main()
{
    // Test arrar1.h
    // vector<int> testArray1 = {1, 1, 2};
    // Solution array1 = Solution();
    // cout << array1.removeDuplicates(testArray1) << endl;

    vector<int> testArray2 = {7, 1, 5, 3, 6, 4};
    Solution array2 = Solution();
    // cout << array2.maxProfit(testArray2) << endl;

    // testArray2 = {1, 2, 3, 4, 5};
    // array2 = Solution();
    // cout << array2.maxProfit(testArray2) << endl;

    // testArray2 = {7, 1, 5, 1, 2, 3, 4};
    // array2 = Solution();
    // cout << array2.maxProfit(testArray2) << endl;

    // testArray2 = {1, 1, 1, 1};
    // array2 = Solution();
    // cout << array2.maxProfit(testArray2) << endl;

    // testArray2 = {1};
    // array2 = Solution();
    // cout << array2.maxProfit(testArray2) << endl;

    testArray2 = {3, 3, 5, 0, 0, 3, 1, 4};
    array2 = Solution();
    cout << array2.maxProfit(testArray2) << endl;
}