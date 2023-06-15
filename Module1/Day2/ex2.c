#include <stdio.h>

// Function to swap any type of data
void swap(void* a, void* b, size_t size) {
    char* temp = (char*)malloc(size);

    // Copy contents of 'a' to 'temp'
    memcpy(temp, a, size);

    // Copy contents of 'b' to 'a'
    memcpy(a, b, size);

    // Copy contents of 'temp' to 'b'
    memcpy(b, temp, size);

    // Free the temporary memory
    free(temp);
}

int main() {
    int a = 10, b = 20;
    printf("Before swap: a = %d, b = %d\n", a, b);

    // Swap integers
    swap(&a, &b, sizeof(int));
    printf("After swap: a = %d, b = %d\n", a, b);

    double x = 1.5, y = 2.7;
    printf("Before swap: x = %lf, y = %lf\n", x, y);

    // Swap doubles
    swap(&x, &y, sizeof(double));
    printf("After swap: x = %lf, y = %lf\n", x, y);

    char c1 = 'A', c2 = 'B';
    printf("Before swap: c1 = %c, c2 = %c\n", c1, c2);

    // Swap characters
    swap(&c1, &c2, sizeof(char));
    printf("After swap: c1 = %c, c2 = %c\n", c1, c2);

    return 0;
}