#include <stdio.h>
#include <string.h>

struct employee
{
    char name[100];
    int number;
    char phone[100];
    int old;
};


int main (void) {
    struct employee list[100] = {
        {"Jeon", 123, "2345-7890", 32},
        {"Kim", 125, "3458-9990", 22},
        {"Lee", 133, "7345-9870", 45},
        {"Bae", 140, "5321-1234", 54},
        {"Kang", 205, "4916-5032", 48},
        {"Lee", 245, "2039-3458", 25},
        {"Kim", 777, "4708-2323", 34},
        {"Smith", 900, "6408-3298", 39},
        {"Park", 428, "3482-9283", 21},
        {"Kim", 973, "8934-2738", 25}
    };

    int search,i;
    scanf("%d", &search);
    
    if(search == 1){
        char name[100];
        scanf("%s", name);
        for(i=0; i<100; i++){
            if(strcmp(name, list[i].name) == 0){
                printf("%s %d %s %d\n", list[i].name, list[i].number, list[i].phone, list[i].old);
            }
        }
    }
    else if(search == 2){
        int number;
        scanf("%d", &number);
        for(i=0; i<100; i++){
            if (number == list[i].number){
                printf("%s %d %s %d\n", list[i].name, list[i].number, list[i].phone, list[i].old);
            }
        }
    }
    else if(search == 3){
        char phone[100];
        scanf("%s", phone);
        for(i=0; i<100; i++){
            if(strcmp(phone, list[i].phone) == 0){
                printf("%s %d %s %d\n", list[i].name, list[i].number, list[i].phone, list[i].old);
            }
        }
    }
    else if(search == 4){
        int old;
        int old_1;
        scanf("%d", &old);
        scanf("%d", &old_1);
        for(i=0; i<100; i++){
            if (list[i].old >= old && list[i].old <= old_1){
                printf("%s %d %s %d\n", list[i].name, list[i].number, list[i].phone, list[i].old);
            }
        }
    }
}
