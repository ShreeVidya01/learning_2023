#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100

// Structure to store log entry data
typedef struct {
    int entryNo;
    char sensorNo[10];
    float temperature;
    int humidity;
    int light;
    char time[10];
} LogEntry;

// Function to extract each line in the CSV file and store it in an array of structures
int readDataFromFile(const char* fileName, LogEntry* logEntries, int* numEntries) {
    FILE* file = fopen(fileName, "r");
    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 0;
    }

    char line[100];
    *numEntries = 0;

    // Read each line in the file
    while (fgets(line, sizeof(line), file)) {
        if (*numEntries >= MAX_ENTRIES) {
            printf("Maximum number of entries reached.\n");
            break;
        }

        // Parse the line and store the data in the logEntries array
        LogEntry entry;
        sscanf(line, "%d,%[^,],%f,%d,%d,%[^,]", &entry.entryNo, entry.sensorNo, &entry.temperature, &entry.humidity, &entry.light, entry.time);
        logEntries[*numEntries] = entry;

        (*numEntries)++;
    }

    fclose(file);
    return 1;
}

// Function to display the contents of the array of structures
void displayLogEntries(const LogEntry* logEntries, int numEntries) {
    printf("EntryNo  SensorNo  Temperature  Humidity  Light  Time\n");
    printf("--------------------------------------------------\n");

    for (int i = 0; i < numEntries; i++) {
        printf("%-8d%-10s%-13.1f%-10d%-7d%-s\n", logEntries[i].entryNo, logEntries[i].sensorNo,
               logEntries[i].temperature, logEntries[i].humidity, logEntries[i].light, logEntries[i].time);
    }
}

int main() {
    LogEntry logEntries[MAX_ENTRIES];
    int numEntries = 0;

    if (readDataFromFile("data.csv", logEntries, &numEntries)) {
        displayLogEntries(logEntries, numEntries);
    }

    return 0;
}
