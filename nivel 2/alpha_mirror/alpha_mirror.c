#include <unistd.h>
#include <stdio.h>

/* #define ALPHABET "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define ALPHABET_LEN sizeof(ALPHABET) - 1
#define HALF ALPHABET_LEN / 2

inline static int index_of_char(char c)
{
    return (c >= 'A' && c <= 'Z' ? c - 'A' + 1 : c - 'a' + 1);
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        char c;
        for (int i = 0; (c = argv[1][i]); i++)
        {
            if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            {
                int index = index_of_char(c);
                if (index <= HALF)
                {
                    char max = (c >= 'a' && c <= 'z') ? 'z' : 'Z';
                    int result = max - index + 1;
                    write(1, &result, 1);
                }
                else
                {
                    char max = (c >= 'a' && c <= 'z') ? 'a' : 'A';
                    int result = max + ALPHABET_LEN - index;
                    write(1, &result, 1);
                }
            }
            else
                write (1, &c, 1);
        }
    }
    write (1, "\n", 1);
} */

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