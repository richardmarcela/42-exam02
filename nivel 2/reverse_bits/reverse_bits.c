#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
    unsigned char bits = 0;

    for (int i = 0; i < 8; i++, octet >>= 1)
        bits = (bits << 1) | (octet % 2);
    return (bits);
}

/* int main()
{
    printf("%u\n", 0b00100110);
    printf("%u", reverse_bits(0b00100110));
} */