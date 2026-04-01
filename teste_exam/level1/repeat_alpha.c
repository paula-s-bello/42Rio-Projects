#include <unistd.h>

void    repeat_alpha(char *str)
{
        int     i;
        int     pos;

        i = 0;
        while (str[i])
        {
                if (str[i] >= 'a' && str[i] <= 'z')
                {
                        pos = (str[i] - 'a') + 1;
                        while (pos > 0)
                        {
                                write(1, &str[i], 1);
                                pos--;
                        }
                }
                else if (str[i] >= 'A' &&  str[i] <= 'Z')
                {
                        pos = (str[i] - 'A') + 1;
                        while (pos > 0)
                        {
                                write(1, &str[i], 1);
                                pos--;
                        }
                }
                else
                        write(1, &str[i], 1);
                i++;
        }
}

int     main(int argc, char **argv)
{
        if (argc == 2)
                repeat_alpha(argv[1]);
        write(1, "\n", 1);
        return (0);
}
