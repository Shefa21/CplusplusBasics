#include <bits/stdc++.h> // This header includes commonly used headers in competitive programming
#include <iostream>      // Include the necessary header for using cout
#include <conio.h>       // Include the necessary header for using getch

using namespace std; // Use the standard namespace

// Function prototype for addition
int addition(int, int);

int main() {
    // Call the addition function with arguments 10 and 20 and store the result in 'result'
    int result = addition(10, 20);

    // Print the result
    cout << "Result of addition: " << result << endl;

    // Wait for a key press before exiting
    getch();

    return 0; // Return 0 to indicate successful program execution
}

// Function definition for addition
int addition(int a, int b) {
    int sum = a + b; // Calculate the sum of 'a' and 'b'
    return sum;      // Return the result of the addition
}
