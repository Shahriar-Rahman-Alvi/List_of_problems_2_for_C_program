#include <stdio.h>

int main()

{
    char v;
    printf("Enter any alphabet: ");
    scanf("%c" , &v);

    switch(v)
    {
    case 'a':
        printf("Vowel");
        break;
    case 'e':
        printf("Vowel");
        break;
    case 'i':
        printf("Vowel");
        break;
    case 'o':
        printf("Vowel");
        break;
    case 'u':
        printf("Vowel");
        break;
    case 'A':
        printf("Vowel");
        break;
    case 'E':
        printf("Vowel");
        break;
    case 'I':
        printf("Vowel");
        break;
    case 'O':
        printf("Vowel");
        break;
    case 'U':
        printf("Vowel");
        break;
    default:
        printf("Cansonant");
    }
    return 0;
}
