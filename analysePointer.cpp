#include <iostream>
using namespace std;
void analyze_pointer(int *ptr);

int main() {
    int ivalue=45;
    analyze_pointer(&ivalue);

    int *heapPtr = new int;
    *heapPtr = 65;
    analyze_pointer(heapPtr);
    delete heapPtr;
    return 0;
}

void analyze_pointer(int *ptr) {
	cout << "Memory location: " << ptr << endl;
	cout << "Value: " << *ptr << endl;
}
