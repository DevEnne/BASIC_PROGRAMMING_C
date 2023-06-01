#include <stdio.h>
#include <string.h>

int len, small, big, number;

void input_pw(char str[512]) {
    small =0;
    big = 0;
    number = 0;
    len = 0;
    
    printf("Enter password: ");
    scanf("%s", str);
    len = strlen(str);
    int i;
    for (i=0; i <strlen(str); i++){
        if (str[i] >= 65 && str[i] <= 90){
            big++;
        }
        else if (str[i] >= 97 && str[i] <= 122){
            small++;
        }
        else if (str[i] >= 48 && str[i] <= 57){
            number++;
        }
    }
}

int main(void) {
    char password[512];
    while(len < 8 || small == 0 || big == 0 || number == 0){
        input_pw(password);
    }
    printf("New password is %s", password);
}
