#include "ft_list_size.h"
#include <stddef.h>

int	ft_list_size(t_list *begin_list)
{
    int i = 0;
    while (begin_list)
    {
        begin_list->next;
        i++;
    }
    return (i);
}