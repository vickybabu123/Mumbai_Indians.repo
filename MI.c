#include <stdio.h>

int main()
 {
    printf("Hello, World!\n");
    printf("The length of the Hello, World! string is: %zu\n", sizeof("Hello, World!\n") - 1);
    return 0;
}