#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calculateTotalSeconds(const char *timeString) {
    int hours, minutes, seconds;
    sscanf(timeString, "%d:%d:%d", &hours, &minutes, &seconds);

    int totalSeconds = hours * 3600 + minutes * 60 + seconds;
    return totalSeconds;
}

int main() {
    char timeString[9]; // Assumes the time string format is "HH:MM:SS" with fixed length of 8 characters

    printf("Enter the time string (HH:MM:SS): ");
    scanf("%8s", timeString);

    int totalSeconds = calculateTotalSeconds(timeString);

    printf("Total seconds: %d\n", totalSeconds);

    return 0;
}
