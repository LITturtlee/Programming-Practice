#include <stdio.h>
#include <string.h>

int main() {
    printf("Enter your C-string!\r\n");
    char str[512];
    scanf("%s",&str);
    printf("This is your C-string: %s",str);
    int len = strlen(str);
    int dots = 0;
    int dashes = 0;
    int invalid = 0;
    for (int i = 0; i < len; ++i) {
        printf("%question_6           ",str[i]);
        if(str[i]=='.'){
            dots++;
            printf("DOT is identified!\r\n");
        } else if(str[i]=='-'){
            dashes++;
            printf("DASH is identified!\r\n");
        } else{
            invalid++;
            printf("NOT a DASH or a DOT!\r\n");
        }
    }

    printf("Dots: %d\r\n",dots);
    printf("Dashes: %d\r\n",dashes);
    printf("Invalid characters: %d\r\n",invalid);
    return 0;
}