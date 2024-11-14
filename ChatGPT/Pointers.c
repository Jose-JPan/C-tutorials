#include <stdio.h>

int main() {
    int value = 42;
    int *ptr = &value; // Pointer to value

    printf("Value: %d\n", value);
    printf("Pointer Address: %p\n", (void*)ptr);
    printf("Pointer Dereferenced: %d\n", *ptr);

    return 0;
}
