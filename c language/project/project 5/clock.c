#include <stdio.h>
#include <time.h>
#include <unistd.h> // for sleep()

int main() {
    while (1) { // infinite loop
        time_t current_time;
        struct tm *time_info;
        char time_string[9]; // HH:MM:SS

        time(&current_time);                     // get current time
        time_info = localtime(&current_time);    // convert to local time
        strftime(time_string, sizeof(time_string), "%I:%M:%S", time_info);

        printf("\rCurrent Time: %s", time_string); // \r overwrites the same line
        fflush(stdout); // make sure it prints immediately

        sleep(1); // wait for 1 second
    }

    return 0;
}
