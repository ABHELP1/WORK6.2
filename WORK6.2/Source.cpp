#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
char a[201];
char* p = a;
bool ck = 0;
int main() {
    scanf("%s", a);
    int l = strlen(a);
    for (int i = 0; i < l / 2; i++) {
        if (*(p+i) >= 'a') {
            *(p + i) -= 32;
        }
        if (*(p+l - i - 1) >= 'a') {
            *(p + l - i - 1) -= 32;
        }
        if (*(p + i) != *(p + l - i - 1)) {
            ck = 1;
            break;
        }
    }
    if (ck) {
        printf("No");
    }
    else {
        for (int i = 0; i < l / 4; i++) {
            if (*(p + i) != *(p + l - i - 1)) {
                ck = 1;
                break;
            }
        }
        if (ck) {
            printf("Palindrome");
        }
        else {
            printf("Double Palindrome");
        }
    }
    return 0;
}