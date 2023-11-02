#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

//making a function which finds difference 

struct Time timediff(struct Time t1, struct Time t2) {
    struct Time difference;
    
    difference.seconds = t2.seconds - t1.seconds;
    if (difference.seconds < 0) {
        difference.seconds += 60;
        t2.minutes--;
    }
    
    difference.minutes = t2.minutes - t1.minutes;
    if (difference.minutes < 0) {
        difference.minutes += 60;
        t2.hours--;
    }
    
    difference.hours = t2.hours - t1.hours;
    
    return difference;
}

int main() {
    struct Time startTime, endTime, difference;
    //start and end time input 
    printf("Enter start time (hours minutes seconds): ");
    scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);
    
    printf("Enter end time (hours minutes seconds): ");
    scanf("%d %d %d", &endTime.hours, &endTime.minutes, &endTime.seconds);
    
    difference = timediff(startTime, endTime);
    
    printf("Time difference is %02d hours %02d minutes %02d seconds", difference.hours, difference.minutes, difference.seconds);
    
    return 0;
}
