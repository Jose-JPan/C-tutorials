#include <stdio.h>

void print_bits(unsigned int n) {
    for (int i = sizeof(n) * 8 - 1; i >= 0; i--)
        printf("%c", (n & (1U << i)) ? '1' : '0');
    printf("\n\n");
}

int main() {
    unsigned int num = 0b1010; // Example binary number
    unsigned int mask = 0b0100; // Example mask
    
    // Set a bit
    num |= mask; // 1010 OR 0100 = 1110
    printf("%d \t %lu \n", num, sizeof(num));
    print_bits(num);

    // Clear a bit
    num &= ~mask; // 1110 AND NOT(0100) = 1010
    printf("%d\n", num);    
    print_bits(num);

    // Toggle a bit
    num ^= mask; // 1010 XOR 0100 = 1110
    printf("%d\n", num);    
    print_bits(num);

    return 0;

    // OUTPUT $ 00000000000000000000000000001110
    //          00000000000000000000000000001010
    //          00000000000000000000000000001110
}
