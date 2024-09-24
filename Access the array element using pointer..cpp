#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};  
    int *ptr;                           
    ptr = arr;                          
    printf("Accessing array elements using pointers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, *(ptr + i));  
    }

    return 0;
}

