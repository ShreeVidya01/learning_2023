#include <stdio.h>

// Function to find the largest number by deleting a single digit from a 4-digit number
int findLargestNumber(int num) {
    int largest = 0;
    int divisor = 1;
    int currentNum = num;

    while (currentNum > 0) {
        // Truncate the number by excluding the current digit
        int truncatedNum = num / (divisor * 10) * divisor + num % divisor;

        // Compare the truncated number with the current largest number
        if (truncatedNum > largest) {
            largest = truncatedNum;
        }

        // Update the divisor and current number for the next iteration
        divisor *= 10;
        currentNum /= 10;
    }

    return largest;
}

int main() {
    int num;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    // Find the largest number by deleting a single digit
    int largestNumber = findLargestNumber(num);

    printf("Largest number by deleting a single digit: %d\n", largestNumber);

    return 0;
}