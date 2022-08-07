#include "../bbcp.h"

void    ft_exit(char *str, int err)
{
    if (str)
        ft_putstr_fd(str, STDERR_FILENO);
    else
        perror("- ");
    exit(err);
}