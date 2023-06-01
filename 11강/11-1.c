#include <stdio.h>
#include <string.h>

struct time
{
    int hour;
    int minutes;
    int seconds;
};


int main (void) {
    struct time s1;
    struct time s2;

    for(; ;){ 
        scanf("%d", &s1.hour);
        scanf("%d", &s1.minutes);
        scanf("%d", &s1.seconds);
        if (s1.hour >= 0 && s1.hour < 24 && s1.minutes >= 0 && s1.minutes < 60 && s1.seconds >= 0 && s1.seconds < 60){
            break;
        }
    }

    for(; ;){ 
        scanf("%d", &s2.hour);
        scanf("%d", &s2.minutes);
        scanf("%d", &s2.seconds);
        if (s2.hour >= 0 && s2.hour < 24 && s2.minutes >= 0 && s2.minutes < 60 && s2.seconds >= 0 && s2.seconds < 60){
            break;
        }
    }

    int re_hour, re_minutes, re_seconds;
    
    if(s1.hour > s2.hour){
        re_hour = s1.hour - s2.hour;
    }
    else{
        re_hour = s2.hour - s1.hour;
    }

    if(s1.minutes > s2.minutes){
        re_minutes = s1.minutes - s2.minutes;
    }
    else {
        re_minutes = s2.minutes - s1.minutes;
    }

    if (s1.seconds > s2.seconds){
        re_seconds = s1.seconds - s2.seconds;
    }
    else{
        re_seconds = s2.seconds - s1.seconds;
    }

    printf("%d %d %d", re_hour, re_minutes, re_seconds);
    
}
