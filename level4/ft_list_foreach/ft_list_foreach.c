#include "ft_list_foreach.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	if (!begin_list)
		return ;
	t_list *list_ptr = begin_list;
	while(list_ptr)
	{
		(*f)(list_ptr->data);
		list_ptr = list_ptr->next;
	}
}
