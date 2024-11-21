#include <stdio.h>

void print_bits(unsigned int n) {
    for (int i = sizeof(n) * 8 - 1; i >= 0; i--)
        printf("%c", (n & (1u << i)) ? '1' : '0');
    printf("\n");
}

int main() {
    unsigned int num = 0b1010; // Example binary number
    unsigned int mask = 0b0100; // Example mask
    
    // Set a bit
    num |= mask; // 1010 or 0100 = 1110
    print_bits(num);

    // Clear a bit
    num &= ~mask; // 1110 AND NOT(0100) = 1010
    print_bits(num);

    // Toggle a bit
    num ^= mask; // 1010 XOR 0100 = 1110
    print_bits(num);

    return 0;
}
