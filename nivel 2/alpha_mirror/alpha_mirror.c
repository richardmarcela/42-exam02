#include <unistd.h>

int main (int argc, char **argv)
{
    if (argc == 2)
    {
        int i = 0;
        char c;
        while ((c = argv[1][i]))
        {
            if (c >= 'a' && c <= 'z')
                c = 'z' - c + 'a';
            else if (c >= 'A' && c <= 'Z')
                c = 'Z' - c + 'A';
            write(1, &c, 1);
            i++;
        }
    }
    write (1, "\n", 1);
}