#include "ft_list_foreach.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    while (begin_list->next)
    {
        (*f)(begin_list->data);
        begin_list = begin_list->next;
    }
}