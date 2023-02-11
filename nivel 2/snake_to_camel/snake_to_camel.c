#include <unistd.h>

int main(int argc, char **argv)
{
    (void)argc;
    char c;
    for (int i = 0; (c = argv[1][i]); i++)
    {
        if (c == '_')
        {
            i++;
            c -= 32;
        }
        write(1, &c, 1);
    }
    write(1, "\n", 1);
}