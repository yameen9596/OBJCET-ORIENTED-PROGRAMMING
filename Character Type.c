#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c",&ch);

    switch(ch){
        case 'a': case 'e': case 'i': case 'o': case 'u':
            printf("Lower Vowel\n");
            break;
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("Upper Vowel\n");
            break;
        default:
            if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
                printf("Consonant\n");
            else if(ch >= '0' && ch <= '9')
                printf("Number\n");
            else
                printf("Special Char\n");
    }

    return 0;
}

