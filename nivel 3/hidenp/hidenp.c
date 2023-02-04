#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        int i = 0;
        for (int j = 0; argv[2][j]; j++)
            if (argv[1][i] == argv[2][j])
                i++;
        if (!argv[1][i])
            write (1, "1", 1);
        else
            write (1, "0", 1);
    }
    write(1, "\n", 1);
}