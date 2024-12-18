#define SET_BIT(value, bit) ((value) | (1U << (bit)))
#define CLEAR_BIT(value, bit) ((value) & ~(1U << (bit)))
#define TOGGLE_BIT(value, bit) ((value) ^ (1U << (bit)))
#define CHECK_BIT(value, bit) (((value) >> (bit)) & 1U)

#include <stdio.h>

int main() {
    unsigned int num = 0;

    num = SET_BIT(num, 2); // Set 2nd bit
    printf("After setting bit 2: %u\n", num);

    num = CLEAR_BIT(num, 2); // Clear 2nd bit
    printf("After clearing bit 2: %u\n", num);

    num = TOGGLE_BIT(num, 1); // Toggle 1st bit
    printf("After toggling bit 1: %u\n", num);

    printf("Is bit 1 set? %d\n", CHECK_BIT(num, 1));
    return 0;

    // OUTPUT $ After setting bit 2: 4
    //          After clearing bit 2: 0
    //          After toggling bit 1: 2
    //          Is bit 1 set? 1
}
