#include<iostream>

// Note: <conio.h> is not a standard C++ header and is not needed for this code
// It is often used in older compilers for console I/O functions

using namespace std;

int main() {
    // Declare and initialize two integer variables
    int num1 = 10;
    int num2 = 20;

    // Declare two pointer variables
    int *p1, *p2;

    // Assign the address of num1 to p1
    p1 = &num1;

    // Assign the address of num2 to p2
    p2 = &num2;

    // Calculate the sum of the values pointed to by p1 and p2
    int sum = *p1 + *p2;

    // Display the result
    cout << "The sum of " << *p1 << " and " << *p2 << " is: " << sum << endl;

    // Note: getch() is often used to pause the console window (for older compilers)
    // getch();

    // Return 0 to indicate successful completion of the program
    return 0;
}
