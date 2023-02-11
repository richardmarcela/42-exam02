unsigned char	swap_bits(unsigned char octet)
{
    return ((octet >> 4) | (octet << 4));
}

/* #include <stdio.h>
int main()
{
    printf("%u\n", 0b01000001);
    printf("%u", swap_bits(0b01000001));
} */