#include <unistd.h>

int main(int argc, char **argv)
{
<<<<<<< HEAD
    int i = 0;
    int j = 0;
    if (argc == 3)
    {
        while (argv[2][j] && argv[1][i])
        {
            if (argv[2][j] == argv[1][i])
                i++;
            j++;
        }
        if (argv[1][i] == '\0')
            write(1, "1", 1);
        else
            write(1, "0", 1);
    }
    return (write(1, "\n", 1));
=======
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
>>>>>>> 1f839c8f2698b86260ae6a2e32df31fa5aaf9f2d
}