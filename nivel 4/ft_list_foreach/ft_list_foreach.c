#include "ft_list_foreach.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
<<<<<<< HEAD
    while (begin_list->next)
=======
    while (begin_list)
>>>>>>> 1f839c8f2698b86260ae6a2e32df31fa5aaf9f2d
    {
        (*f)(begin_list->data);
        begin_list = begin_list->next;
    }
}