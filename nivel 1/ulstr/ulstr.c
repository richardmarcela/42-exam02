#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        char c;
        for(int i; (c = argv[1][i]); i++)
        {
            if (c >= 'A' && c <= 'Z')
                c += 32;
            else if (c >= 'a' && c <= 'z')
                c -= 32;
            write(1, &c, 1);
        }
    }
    write(1, "\n", 1);
}