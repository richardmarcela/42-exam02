#include "ft_list_remove_if.h"

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
}