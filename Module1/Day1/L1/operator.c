#include <stdio.h>

int main() {
    int num, oper_type;
    printf("Enter an integer (32 bits): ");
    scanf("%d", &num);
    printf("Enter the operation type (1, 2, or 3): ");
    scanf("%d", &oper_type);
    int result = num; // Initialize result with input number
    if (oper_type == 1) {
        // Set 1st bit
        result |= 1;
    } else if (oper_type == 2) {
        // Clear 31st bit
        result &= ~(1 << 31);
    } else if (oper_type == 3) {
        // Toggle 16th bit=]
        result ^= (1 << 16);
    } 
    else {
        printf("Invalid operation type.\n");
    }
    
    printf("result is: %d",result);
}