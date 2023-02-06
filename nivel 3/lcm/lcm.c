unsigned int    lcm(unsigned int a, unsigned int b)
{
    int i = 1; 
    if (a != 0 && b != 0)
    {
        while (1)
        {
            if (i % a == 0 && i % b == 0)
                return (i);
            i++;
        }
    }
    return (0);
}
/* 
int main ()
{
    printf("%u", lcm(9, 13));
} */