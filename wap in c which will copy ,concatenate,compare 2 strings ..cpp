#include <stdio.h>
int strLength(char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}
void strCopy(char *dest, char *src) {
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0'; 
}
void strConcat(char *dest, char *src) {
    while (*dest != '\0') {
        dest++;
    }
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0'; 
}

int strCompare(char *str1, char *str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
            return (*str1 - *str2); 
		 }
        str1++;
        str2++;
    }
    return (*str1 - *str2); 
}

int main() {
    char str1[100], str2[100], copy[100], concat[200];
    int comparisonResult;

    printf("Enter the first string: ");
    gets(str1);
    
    printf("Enter the second string: ");
    gets(str2);
    strCopy(copy, str1);
    printf("Copy of the first string: %s\n", copy);
    strCopy(concat, str1); 
    strConcat(concat, str2);
    printf("Concatenation of strings: %s\n", concat);
    comparisonResult = strCompare(str1, str2);
    if (comparisonResult == 0) {
        printf("Both strings are equal.\n");
    } else if (comparisonResult > 0) {
        printf("First string is greater than the second string.\n");
    } else {
        printf("Second string is greater than the first string.\n");
    }

    return 0;
}

