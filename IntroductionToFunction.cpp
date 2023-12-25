#include <iostream> // Include the necessary header for using cout
#include <conio.h>  // Include the necessary header for using getch

using namespace std; // Use the standard namespace

// Function to perform addition and print the sum
void addition(int a, int b) {
    int sum = a + b;            // Calculate the sum of 'a' and 'b'
    cout << "sum   " << sum << endl; // Print the sum with a descriptive message
}

int main() {
    addition(10, 20);   // Call the addition function with arguments 10 and 20
    addition(10, 10);   // Call the addition function with arguments 10 and 10
    getch();            // Wait for a key press before exiting
    return 0;           // Return 0 to indicate successful program execution
}
