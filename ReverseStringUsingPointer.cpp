//Write a function that takes a string (character array) and reverses it using pointers

#include <iostream>

// Function to reverse a string using pointers
void reverseString(char* str) {
    // Check if the string is not null
    if (str != nullptr) {
        // Find the length of the string
        int length = 0;
        char* end = str;

        while (*end != '\0') {
            ++length;
            ++end;
        }

        // Reverse the string using two pointers
        char* start = str;
        --end; // Move end to the last character of the original string

        while (start < end) {
            // Swap characters pointed to by start and end
            char temp = *start;
            *start = *end;
            *end = temp;

            // Move the pointers towards each other
            ++start;
            --end;
        }
    } else {
        // Handle the case where the string is null
        std::cerr << "Error: Null string provided." << std::endl;
    }
}

int main() {
    // Example usage
    char myString[] = "Hello, World!";

    // Call the function with the string
    reverseString(myString);

    // Print the reversed string
    std::cout << "Reversed String: " << myString << std::endl;

    return 0;
}
