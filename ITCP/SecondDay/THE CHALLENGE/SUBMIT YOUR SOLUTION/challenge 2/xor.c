#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "label";
    int key = 13;
    char flag[6];
    for (int i = 0; i < strlen(s); i++) {
        flag[i] = s[i] ^ key;
    }
    flag[5] = '\0';
    printf("itcFLAG{%s}\n", flag);
    return 0;
}
