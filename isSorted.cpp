#include <iostream>
#include <cassert> //for assert function
using namespace std;

bool isSorted(const int* arr, const int size); //prototype function
//TEST CASES
void testSortedArray() { //example tests from lab doc
    int arr[] = {1, 2, 3, 4, 5};
    assert(isSorted(arr, 5) == true);
}

void testUnsortedArray() {
    int arr[] = {1, 4, 3, 5, 6};
    assert(isSorted(arr, 5) == false);
}

void testDuplicateValues() {
    int arr[] = {1, 2, 2, 3, 5};
    assert(isSorted(arr, 5) == true);
}

void testSingleElement() {
    int arr[] = {42};
    assert(isSorted(arr, 1) == true);
}

void testDescendingArray() {
    int arr[] = {5, 4, 3, 2, 1};
    assert(isSorted(arr, 5) == false);
}

void testNegativeValues() {
    int arr[] = {-10, -5, 0, 5, 10};
    assert(isSorted(arr, 5) == true);
}

// original test cases
void testAllEqualElements() { //all equal values
    int arr[] = {7, 7, 7, 7, 7}; 
    assert(isSorted(arr, 5) == true);
}

void testUnsortedNegativeValues() { //unsorted negative values
    int arr[] = {-2, -10, 0, 4};
    assert(isSorted(arr, 4) == false);
}

void testEmptyArray() { //empty array with null pointer (most challenging to troubleshoot)
    assert(isSorted(nullptr, 0) == true);
}

// run all test cases
void runAllTests() {
    testSortedArray();
    testUnsortedArray();
    testDuplicateValues();
    testSingleElement();
    testDescendingArray();
    testNegativeValues();
    testAllEqualElements();
    testUnsortedNegativeValues();
    testEmptyArray();
    // will only print if all assertions pass, otherwise program will terminate on a failed assertion
    cout << "All TDD assertions passed successfully!" << endl;
}

//implementation of isSorted function (the function tested)
bool isSorted(const int* arr, const int size) {
    for (int i = 0; i < size - 1; ++i) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    // run all test cases
    runAllTests();
    return 0;
}
