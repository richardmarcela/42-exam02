#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        char c;
        for(int i = 0; (c = argv[1][i]); i++)
        {
            if ((c >= 'A' && c < 'N') || (c >= 'a' && c < 'n'))
                c += 13;
            else if ((c >= 'N' && c <= 'Z') || (c >= 'n' && c <= 'z'))
                c -= 13;
            write(1, &c, 1);
        }
    }
    write(1, "\n", 1);
}