#include <stdio.h>
#include <time.h>

void main() {
    time_t now;
    time(&now); // Get the current time
    printf("Current Date and Time: %s", ctime(&now)); // Convert to local time and print
}    