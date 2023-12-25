#include <iostream> // Include the necessary header for using cout
#include <conio.h>  // Include the necessary header for using getch

using namespace std; // Use the standard namespace

// Function prototypes
void addition(int, int);
void subtraction(int, int);
void multiplication(int, int);
void division(int, int);

int main() {
    // Function calling for addition
    addition(10, 10);   // Call the addition function with arguments 10 and 10
    addition(40, 50);   // Call the addition function with arguments 40 and 50

    // Function calling for subtraction
    subtraction(400, 50);   // Call the subtraction function with arguments 400 and 50
    subtraction(1000, 100);  // Call the subtraction function with arguments 1000 and 100

    // Function calling for division
    division(400, 50);   // Call the division function with arguments 400 and 50
    division(1000, 100); // Call the division function with arguments 1000 and 100

    // Function calling for multiplication
    multiplication(400, 50);   // Call the multiplication function with arguments 400 and 50
    multiplication(1000, 100); // Call the multiplication function with arguments 1000 and 100

    getch(); // Wait for a key press before exiting
    return 0; // Return 0 to indicate successful program execution
}

// Function definitions

// Addition function
void addition(int x, int y) {
    int sum = x + y;            // Calculate the sum of 'x' and 'y'
    cout << "Summation= " << sum << endl; // Print the sum with a descriptive message
}

// Subtraction function
void subtraction(int x, int y) {
    int sub = x - y;            // Calculate the subtraction of 'x' and 'y'
    cout << "Subtraction= " << sub << endl; // Print the subtraction with a descriptive message
}

// Multiplication function
void multiplication(int x, int y) {
    int mul = x * y;            // Calculate the multiplication of 'x' and 'y'
    cout << "Multiplication= " << mul << endl; // Print the multiplication with a descriptive message
}

// Division function
void division(int x, int y) {
    float div = (float)x / y;   // Calculate the division of 'x' by 'y'
    cout << "Division= " << div << endl; // Print the division with a descriptive message
}
