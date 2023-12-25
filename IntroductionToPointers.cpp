#include<iostream>

// Note: <conio.h> is not a standard C++ header and is not needed for this code
// It is often used in older compilers for console I/O functions

using namespace std;

int main() {
    // Declare an integer variable x and initialize it with the value 5
    int x = 5;

    // Declare a pointer variable p that can store the memory address of an integer
    int *p;

    // Assign the address of x to the pointer variable p
    p = &x;

    // Print the value of x
    cout << "Value of x: " << x << endl;

    // Print the memory address of x using the address-of operator (&)
    cout << "Memory address of x: " << &x << endl;

    // Print the value stored in the pointer variable p (which is the memory address of x)
    cout << "Value stored in pointer p: " << p << endl;

    // Print the value at the memory address stored in the pointer variable p
    cout << "Value at the memory address stored in pointer p: " << *p << endl;

    // Note: getch() is often used to pause the console window (for older compilers)
    // getch();

    // Return 0 to indicate successful completion of the program
    return 0;
}
