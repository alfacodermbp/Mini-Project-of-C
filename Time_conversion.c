#include <stdio.h>

int main() {
    int totalSeconds;
    int hours, minutes, seconds;

    // Take total seconds as input
    printf("Enter total seconds: ");
    scanf("%d", &totalSeconds);

    // Calculate hours
    hours = totalSeconds / 3600;

    // Remaining seconds after hours
    totalSeconds = totalSeconds % 3600;

    // Calculate minutes
    minutes = totalSeconds / 60;

    // Remaining seconds
    seconds = totalSeconds % 60;

    // Print time in HH:MM:SS format
    printf("Formatted Time = %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
