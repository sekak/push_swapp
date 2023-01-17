#include "push_swap.h"

// 0 - 19
// int check_chunk_1(int a)
// {
// 	printf("ffff%d\n", a);
// 	int array[SIZE];
// 	int i = -1;
// 	while (i++ < 19)
// 	{
// 		array[i] = i;
// 	}
// 	// int j = 0;
// 	// printf("function check");
// 	while (i > 0)
// 	{
// 		if (array[i] == a)
// 		{
// 			printf("0-19: %d\n", a);
// 			return (0);
// 		}
// 		i--;
// 	}
// 	return (1);
// }

// //  20 - 39
// int check_chunk_2(int a)
// {
// 	printf("ffff%d\n", a);
// 	int array[SIZE];
// 	int i = -1;
// 	while (i++ < 39)
// 	{
// 		array[i] = i;
// 	}
// 	// int j = 0;
// 	// printf("function check");
// 	while (i > 0)
// 	{
// 		if (array[i] == a)
// 		{
// 			printf("20-39: %d\n", a);
// 			return (0);
// 		}
// 		i--;
// 	}
// 	return (1);
// }

// // 5
// // 1
// void compare_a_b_in_stack_b(t_stack *a, t_stack *b)
// {
// 	pb(a, b);
// 	int i = 0;
// 	int j = b->top;
// 	++i;
// 	if (i >= 1)
// 	{
// 		printf("ddd%d", b->top);
// 		while (b->num[j] > b->num[j - 1])
// 		{
// 			rrb(b);
// 			j--;
// 		}
// 	}
// }

// int functio(int *array, size_t lenght)
// {

// 	// int i = 9;
// 	int tmp = 0;
// 	int j = 0;
// 	// int x = 0;
// 	tmp = array[j];

// 	int sorted = 0;
// 	while (!sorted)
// 	{
// 		j = 0;
// 		sorted = 1;
// 		while (j < lenght)
// 		{
// 			if (array[j] > array[j + 1])
// 			{
// 				tmp = array[j];
// 				array[j] = array[j + 1];
// 				array[j + 1] = tmp;
// 				sorted = 0;
// 			}
// 			j++;
// 		}
// 	}
// 	int l = (lenght / 2);
// 	// printf("middle%d\n",array[l]);
// 	// for (size_t i = 0; i <= lenght; i++)
// 	// {
// 	// 	printf("sort: %d ", array[i]);
// 	// }
// 	return (array[l]);
// }

// void function(t_stack *a, t_stack *b)
// {
// 	int i = 0;
// 	int index = 0;
// 	int middle = 0;
// 	int j = 0;
// 	int array[SIZE];
// 	int sorted = 0;
// 	int x = 0;
// 	int y = 0;
// 	t_list *node = 0;
// 	t_list *new;
// 	while (!sorted)
// 	{
// 		i = 0;
// 		// copy content a->num to array
// while (a->top >= i)
// {
// 	array[i] = a->num[i];
// 	i++;
// }
// 		// printf("%d %d\n",i,a->top);
// 		sorted = 1;
// 		x = 0;
// 		// cacluler number each chunk
// 		if (y > 0)
// 		{

// 			new = ft_lstnew((void *)y);
// 			ft_lstadd_front(&node, new);
// 			printf("lstnew:%d\n", y);
// 			y = 0;
// 		}
// 		while (x <= a->top)
// 		{
// 			// midpoint each chunk
// 			if (a->num[x] < functio(array, i))
// 			{
// 				middle = a->top / 2;
// 				// if x smaller than middle
// 				if (x < middle)
// 				{
// 					// printf("small%d\n", a->num[x]);
// 					j = 0;
// 					while (j <= x)
// 					{
// 						rra(a);
// 						j++;
// 					}
// 					pb(a, b);
// 					x = -1;
// 				}
// 				// if x bigger than middle
// 				else if (x > middle)
// 				{
// 					j = 0;
// 					index = a->top - x;
// 					while (j < index)
// 					{
// 						ra(a);
// 						j++;
// 					}
// 					pb(a, b);
// 				}
// 				sorted = 0;
// 				y++;
// 			}
// 			x++;
// 		}
// 		printf("end \n Y:%d\n", y);
// 	}

// 	// while(node)
// 	// {
// 	// 	printf("node;%d\n",node->content);
// 	// 	node=node->next;
// 	// }
// 	t_list *current = node;
// 	while (current)
// 	{
// 		if (current->content == 1)
// 		{
// 			pa(a, b);
// 			current = current->next;
// 		}
// 		else if (current->content == 2)
// 		{
// 			if (b->num[b->top] > b->num[b->top - 1])
// 			{
// 				pa(a, b);
// 				pa(a, b);
// 			}
// 			else
// 			{
// 				sb(b);
// 				pa(a, b);
// 				pa(a, b);
// 			}
// 			current = current->next;
// 		}
// 		// more than 3
// 		else
// 		{
// 			x = 0;
// 			i = 0;
// 			while (b->top >= i)
// 			{
// 				array[i] = b->num[i];
// 				i++;
// 			}
// 			int d = 0;
// 			int stored = 0;
// 			int x = current->content;
// 			printf("funcio%d\n", x);
// 			while (x > 0)
// 			{

// 				// int t = b->top - x;
// 				// printf("hhh%d\n",b->num[t] );
// 				// if(b->num[t] > functio(array,i) && t >= 0 )
// 				// {
// 				// 	printf("b->num[b->top - x]%d %d\n",b->num[t],t);
// 				// 	int o = 1;
// 				// 	while(t > o)
// 				// 	{
// 				// 		rb(b);
// 				// 		o++;
// 				// 	}
// 				// 	printf("top%d  %d\n",b->num[b->top],t);

// 				// 	if(b->num[a->top] > functio(array,i))
// 				// 	{
// 				// 		pa(a,b);
// 				// 		x = -1;
// 				// 	}
// 				// 	while(o > 0)
// 				// 	{
// 				// 		rrb(b);
// 				// 		o--;
// 				// 	}
// 				// 	if(a->num[a->top] > a->num[a->top -1])
// 				// 		sa(a);

// 				// while(o > 0)
// 				// {
// 				// 	rrb(b);
// 				// 	o--;
// 				// }
// 				// 		// if(a->num[a->top] < a->num[a->top -1])
// 				// 		// 	sb(b);
// 				// 		pa(a,b);
// 				// 		// d--;
// 				// 		// while (d > 0)
// 				// 		// {
// 				// 		// 	rrb(b);
// 				// 		// 	d--;
// 				// 		// }

// 				// }
// 				x++;
// 			}
// 			current = current->next;
// 		}
// 		// pa(a,b);
// 	}
// 	// 1
// 	// 4
// 	// 5
// 	// 6

// 	printf("b:%d\n", pop(b)); // Output: 1
// 	printf("b:%d\n", pop(b)); // Output: 1
// 	printf("b:%d\n", pop(b)); // Output: 1
// 	// printf("b:%d\n", pop(b)); // Output: 1
// 	// printf("b:%d\n", pop(b)); // Output: 1
// 	// printf("b:%d\n", pop(b)); // Output: 1
// 	// printf("b:%d\n", pop(b));  // Output: 1
// 	// printf("b:%d\n", pop(b));  // Output: 1
// 	// printf("b:%d\n", pop(b));  // Output: 1
// 	// printf("b:%d\n", pop(b));  // Output: 1
// 	// printf("b:%d\n", pop(b));  // Output: 1
// 	// printf("b:%d\n", pop(b));  // Output: 1

// 	// printf("\na:%d\n", pop(a)); // Output: 1
// 	printf("a:%d\n", pop(a)); // Output: 1
// 	printf("a:%d\n", pop(a)); // Output: 1
// 	printf("a:%d\n", pop(a)); // Output: 1
// 	printf("a:%d\n", pop(a)); // Output: 1
// 	printf("a:%d\n", pop(a)); // Output: 1
// 	printf("a:%d\n", pop(a)); // Output: 1
// 	printf("a:%d\n", pop(a)); // Output: 1
// 	printf("a:%d\n", pop(a)); // Output: 1
// }

void midPoint(t_stack *a, t_vars *data)
{

	int i;
	int tmp;
	int j;
	int array[SIZE];
	int midpoint = 0;

	i = 0;
	j = 0;
	tmp = 0;
	while (a->top >= i)
	{
		array[i] = a->num[i];
		i++;
	}
	i = 0;
	while (i < a->top)
	{
		j = 0;
		while ((j + i) < a->top)
		{
			if (array[i] >= array[i + j])
			{
				tmp = array[i];
				array[i] = array[j + i];
				array[i + j] = tmp;
			}
			j++;
		}
		// printf("array %d\n",array[i]);

		i++;
	}
	printf("i%d\n",i);

	midpoint = i / 2;
	data->middle = array[midpoint];
	midpoint = midpoint / 2;
	data->middletop = array[midpoint];
	midpoint = i / 2;
	midpoint = midpoint / 2;
	midpoint = midpoint + (i / 2);
	data->middlebottom = array[midpoint];
}
int  middoint(t_stack *b, t_vars *data)
{

	int i;
	int tmp;
	int j;
	int array[SIZE];
	// int midpoint = 0;

	i = 0;
	j = 0;
	tmp = 0;
	while (b->top >= i)
	{
		array[i] = b->num[i];
		i++;
	}
	i = 0;
	while (i < b->top)
	{
		j = 0;
		while ((j + i) < b->top)
		{
			if (array[i] >= array[i + j])
			{
				tmp = array[i];
				array[i] = array[j + i];
				array[i + j] = tmp;
			}
			j++;
		}
		printf("array %d\n",array[i]);
		i++;
	}
	i--;
		// printf("array %d\n",array[i]);

	// printf("b->top %d\n i%d\n",i);
	 return(array[i]);
}
void function(t_stack *a, t_stack *b)
{
	t_vars data;
	int x;
	int position;

	position = 0;
	x = 0;
	midPoint(a, &data);
	printf("middle:%d . middletop:%d . middlebottom%d\n", data.middle, data.middletop, data.middlebottom);
	while (x <= a->top)
	{
		if (a->num[x] <= data.middle) // 6
		{
			if (a->num[x] <= data.middletop) // 3
			{
				int t = a->top / 2;
				if (x <= t)
				{
					position = x + 1;
					while (position)
					{
						rra(a);
						position--;
					}
					x = -1;
					pb(a, b);
					if (b->top > 0)
						rb(b);
				}
				else if (x > t)
				{
					position = a->top - x;
					while (position)
					{
						ra(a);
						position--;
					}
					pb(a, b);
				}
			}
			else if (a->num[x] > data.middletop) // 3
			{
				int t = a->top / 2;
				if (x <= t)
				{
					position = x + 1;
					while (position)
					{
						rra(a);
						position--;
					}
					x = -1;
					pb(a, b);
				}
				else if (x > t)
				{
					position = a->top - x;
					while (position)
					{
						ra(a);
						position--;
					}
					pb(a, b);
				}
			}
		}

		x++;
	}
	x = 0;
	while (a->top >= x)
	{
		if (a->num[x] >= data.middle) // 6
		{
			if (a->num[x] < data.middlebottom) // 3
			{
				int t = a->top / 2;
				if (x <= t)
				{
					position = x + 1;
					while (position)
					{
						rra(a);
						position--;
					}
					x = -1;
					pb(a, b);
					if (b->top > 0)
						rb(b);
				}
				else if (x > t)
				{
					position = a->top - x;
					while (position)
					{
						ra(a);
						position--;
					}
					pb(a, b);
				}
			}
			else if (a->num[x] >= data.middlebottom) // 3
			{
				int t = a->top / 2;
				if (x <= t)
				{
					position = x + 1;
					while (position)
					{
						rra(a);
						position--;
					}
					x = -1;
					pb(a, b);
				}
				else if (x > t)
				{
					position = a->top - x;
					while (position)
					{
						ra(a);
						position--;
					}
					pb(a, b);
				}
			}
		}
		 
		x++;
	}




	// printf("\npop b:%d\n", pop(b));
	// printf("pop b:%d\n", pop(b));
	// printf("pop b:%d\n", pop(b));
	// printf("pop b:%d\n", pop(b));
	// printf("pop b:%d\n", pop(b));
	// printf("pop b:%d\n", pop(b));
	// printf("pop b:%d\n", pop(b));
	// printf("pop b:%d\n", pop(b));
	// printf("pop b:%d\n", pop(b));
	// printf("pop b:%d\n", pop(b));
	// printf("pop b:%d\n", pop(b));
	// printf("pop b:%d\n", pop(b));
	// printf("pop b:%d\n", pop(b));

	int sorted = 0;
	while(!sorted)
	{
		sorted = 1;
		x = 0;
		while(x <= b->top)
		{
		printf("bigger %d\n%d\n",middoint(b, &data), b->num[x]);
			if(middoint(b ,&data) == b->num[x])
			{
				printf("start\n");
				int t = b->top / 2;
				if (x <  t)
				{
					position = x + 1;
					while (position)
					{
						rrb(b);
						position--;
					}
					x = -1;
					pa(a, b);
				}
				else if (x >= t)
				{
					position = b->top - x;
					while (position > 0)
					{
						rb(b);
						position--;
					}
					pa(a, b);
					x = -1;
				}
				sorted = 0;
			}
			x++;
			
		}
	}
	printf("pop a:%d\n", pop(a));
	printf("pop a:%d\n", pop(a));
	printf("pop a:%d\n", pop(a));printf("pop a:%d\n", pop(a));
	printf("pop a:%d\n", pop(a));
	printf("pop a:%d\n", pop(a));printf("pop a:%d\n", pop(a));
	printf("pop a:%d\n", pop(a));
	printf("pop a:%d\n", pop(a));
	printf("pop a:%d\n", pop(a));
	printf("pop a:%d\n", pop(a));
	printf("pop a:%d\n", pop(a));
}

int check_iterations(t_stack *a)
{
	int i = 0;
	int j;
	while (i <= a->top)
	{
		j = 1;
		while ((i + j) <= a->top)
		{
			if (a->num[j + i] == a->num[i])
			{
				printf("cError\n");
				exit(0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int main(int ac, char **av)
{
	t_stack b, a;
	stack_init(&a);
	stack_init(&b);
	if (ac > 1)
	{
		// printf("check: %d\n",check_is_all_number(av[1]));
		if (ac == 2 && check_is_all_number(av[1]))
		{
			char_to_int(&a, av[1]);
			// printf("pop a:%d\n", pop(&a));
			// printf("pop a:%d\n", pop(&a));
			// printf("pop a:%d\n", pop(&a));
			// printf("pop a:%d\n", pop(&a));
			// printf("pop a:%d\n", pop(&a));
		}
		else if (ac > 2 && check_is_all_number_two(av))
		{

			char_to_int_two(&a, av);
			// printf("pop a:%d\n", pop(&a));
			// printf("pop a:%d\n", pop(&a));
			// printf("pop a:%d\n", pop(&a));
		}
		else
			printf("aError\n");
	}
	else
		printf("bError\n");
	check_iterations(&a);

	function(&a, &b);
}