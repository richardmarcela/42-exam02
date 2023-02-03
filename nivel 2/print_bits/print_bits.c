#include <unistd.h>

void	print_bits(unsigned char octet)
{
    int i = 8;
    unsigned char bits;

    while (i--)
    {
        bits = (octet >> i & 1) + '0';
        write(1, &bits, 1);
    }
}

int main(void)
{
    print_bits(168);
}