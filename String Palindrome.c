#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, l, pal = 1;

    printf("Enter a string: ");
    scanf("%s", s);   

    l = strlen(s);

    for(i = 0; i < l / 2; i++) {
        if(s[i] != s[l - i - 1]) {
            pal = 0;
            break;
        }
    }

    if(pal == 1)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}

