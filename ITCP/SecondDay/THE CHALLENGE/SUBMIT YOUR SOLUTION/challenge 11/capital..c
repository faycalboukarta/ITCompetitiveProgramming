#include <stdio.h>
#include <ctype.h>

int all_cap(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isupper(str[i])) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int a;
    char str1[] = "HELLO";
        a=all_cap(str1);
        if (a==1)
        {
            printf("true");
        }else{
            printf("false");
        }
        
    return 0;
}
