#include <unistd.h>

void ft_is_negative(int n)
{

char possitive;
possitive = 'P';

char negative;
negative = 'N';

    if (n > 0)
    {
        write(1, &possitive, 1);
    }
        else
            if (n <= 0)
            {
                write(1, &negative, 1);
            }
}

/*
int main(void)
{
    ft_is_negative(0);
    return (0);
}    
*/
