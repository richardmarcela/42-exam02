#include <unistd.h>

void	print_bits(unsigned char octet)
{
    unsigned char bits; //onde vou guardar o meu octet alterado a cada iteração
    int i = 8; //número de bits que preciso percorrer dentro do byte

    while (i--)
    {
        /* bits vai receber o valor de octet shiftado 
        i vezes para a direita e só escreve se o valor for 1, 
        se não escreve 0, mais 48 para o transformar em char */
        bits = (octet >> i & 1) + '0';  
        write(1, &bits, 1);
    }
}

int main(void)
{
    print_bits(2);
}