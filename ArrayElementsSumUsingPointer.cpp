//Write a function that takes an array and its size as parameters, and returns the sum of its elements using pointer notation 

#include <iostream>

// Function to calculate the sum of elements in an array using pointer notation
int sumArray(const int* arr, int size) {
    // Check if the array is not null and the size is greater than 0
    if (arr != nullptr && size > 0) {
        int sum = 0;

        // Use a pointer to iterate through the array and calculate the sum
        const int* ptr = arr; // Initialize pointer to the beginning of the array

        for (int i = 0; i < size; ++i) {
            sum += *ptr; // Add the value pointed to by the pointer to the sum
            ++ptr;       // Move the pointer to the next element
        }

        return sum;
    } else {
        // Handle the case where the array is null or the size is non-positive
        std::cerr << "Error: Invalid array or size." << std::endl;
        return 0; // Returning 0 for invalid input, you may choose a different approach based on your requirements
    }
}

int main() {
    // Example usage
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Call the function with the array and its size
    int arraySum = sumArray(numbers, size);

    // Print the result
    std::cout << "Sum of array elements: " << arraySum << std::endl;

    return 0;
}
