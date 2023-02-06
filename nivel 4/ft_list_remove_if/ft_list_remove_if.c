#include "ft_list_remove_if.h"
<<<<<<< HEAD
#include <stdlib.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    if (begin_list == NULL || *begin_list == NULL)
        return ;
    
    t_list *cur = *begin_list;
    
    if (cmp(cur->data, data_ref) == 0)
    {
        *begin_list = cur->next;
        free(cur);
        ft_list_remove_if(begin_list, data_ref, cmp);
    }
    cur = *begin_list;
    ft_list_remove_if(&cur->next, data_ref, cmp);
=======

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *list = *begin_list;
    while (cmp(list->data, data_ref) == 0)
    {
        *begin_list = list->next;
        free(list);
        ft_list_remove_if(begin_list, data_ref, cmp);
    }
    list = *begin_list;
    ft_list_remove_if(&list, data_ref, cmp);
>>>>>>> 1f839c8f2698b86260ae6a2e32df31fa5aaf9f2d
}