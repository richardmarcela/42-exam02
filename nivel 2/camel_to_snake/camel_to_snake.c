#include <unistd.h>

int main(int argc, char **argv)
{
    (void)argc;
    for (int i = 0; argv[1][i]; i++)
    {
        if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
        {
            argv[1][i] += 32;
            write(1, "_", 1);
        }
        write(1, &argv[1][i], 1);
    }
    write(1, "\n", 1);
}