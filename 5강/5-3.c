#include <stdio.h>

int main (void) { 
    int years;
    int month;
    int days;

    scanf("%d", &years);
    scanf("%d", &month);
    
    if ((years % 4) == 0 && (years  % 100) != 0 || (years % 400) == 0) {
        switch (month)
        {
        case 2:
            days = 29;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;
        default:
            days = 31;
            break;
        }
    }
    else {
        switch (month)
        {
        case 2:
            days = 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;
        default:
            days = 31;
            break;
        }
    }

    printf("%d", days);


}
