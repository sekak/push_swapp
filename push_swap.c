#include "push_swap.h"

// 0 - 19
int check_chunk_1(int a)
{
	printf("ffff%d\n", a);
	int array[SIZE];
	int i = -1;
	while (i++ < 19)
	{
		array[i] = i;
	}
	// int j = 0;
	// printf("function check");
	while (i > 0)
	{
		if (array[i] == a)
		{
			printf("0-19: %d\n", a);
			return (0);
		}
		i--;
	}
	return (1);
}

//  20 - 39
int check_chunk_2(int a)
{
	printf("ffff%d\n", a);
	int array[SIZE];
	int i = -1;
	while (i++ < 39)
	{
		array[i] = i;
	}
	// int j = 0;
	// printf("function check");
	while (i > 0)
	{
		if (array[i] == a)
		{
			printf("20-39: %d\n", a);
			return (0);
		}
		i--;
	}
	return (1);
}

// 5
// 1
void compare_a_b_in_stack_b(t_stack *a, t_stack *b)
{
	pb(a, b);
	int i = 0;
	int j = b->top;
	++i;
	if (i >= 1)
	{
		printf("ddd%d", b->top);
		while (b->num[j] > b->num[j - 1])
		{
			rrb(b);
			j--;
		}
	}
}

int functio(int *array, size_t lenght)
{

	// int i = 9;
	int tmp = 0;
	int j = 0;
	// int x = 0;
	tmp = array[j];

	int sorted = 0;
	while (!sorted)
	{
		j = 0;
		sorted = 1;
		while (j < lenght)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				sorted = 0;
			}
			j++;
		}
	}
	int l = (lenght / 2);
	// printf("middle%d\n",array[l]);
	// for (size_t i = 0; i <= lenght; i++)
	// {
	// 	printf("sort: %d ", array[i]);
	// }
	return (array[l]);
}

void function(t_stack *a, t_stack *b)
{
	int i = 0;
	int index = 0;
	int middle = 0;
	int j = 0;
	int array[SIZE];
	int sorted = 0;
	int x = 0;
	int y = 0;
	t_list *node = 0;
	t_list *new;
	while (!sorted)
	{
		i = 0;
		// copy content a->num to array
		while (a->top >= i)
		{
			array[i] = a->num[i];
			i++;
		}
		// printf("%d %d\n",i,a->top);
		sorted = 1;
		x = 0;
		// cacluler number each chunk
		if (y > 0)
		{

			new = ft_lstnew((void *)y);
			ft_lstadd_front(&node, new);
			printf("lstnew:%d\n", y);
			y = 0;
		}
		while (x <= a->top)
		{
			// midpoint each chunk
			if (a->num[x] < functio(array, i))
			{
				middle = a->top / 2;
				// if x smaller than middle
				if (x < middle)
				{
					// printf("small%d\n", a->num[x]);
					j = 0;
					while (j <= x)
					{
						rra(a);
						j++;
					}
					pb(a, b);
					x = -1;
				}
				// if x bigger than middle
				else if (x > middle)
				{
					j = 0;
					index = a->top - x;
					while (j < index)
					{
						ra(a);
						j++;
					}
					pb(a, b);
				}
				sorted = 0;
				y++;
			}
			x++;
		}
		printf("end \n Y:%d\n", y);
	}

	// while(node)
	// {
	// 	printf("node;%d\n",node->content);
	// 	node=node->next;
	// }
	t_list *current = node;
	while (current)
	{
		if (current->content == 1)
		{
			pa(a, b);
			current = current->next;
		}
		else if (current->content == 2)
		{
			if (b->num[b->top] > b->num[b->top - 1])
			{
				pa(a, b);
				pa(a, b);
			}
			else
			{
				sb(b);
				pa(a, b);
				pa(a, b);
			}
			current = current->next;
		}
		// more than 3
		else
		{
			x = 0;
			i = 0;
			while (b->top >= i)
			{
				array[i] = b->num[i];
				i++;
			}
			int d = 0;
			int stored = 0;
			int x = current->content;
			printf("funcio%d\n", x);
			while (x > 0)
			{

				// int t = b->top - x;
				// printf("hhh%d\n",b->num[t] );
				// if(b->num[t] > functio(array,i) && t >= 0 )
				// {
				// 	printf("b->num[b->top - x]%d %d\n",b->num[t],t);
				// 	int o = 1;
				// 	while(t > o)
				// 	{
				// 		rb(b);
				// 		o++;
				// 	}
				// 	printf("top%d  %d\n",b->num[b->top],t);

				// 	if(b->num[a->top] > functio(array,i))
				// 	{
				// 		pa(a,b);
				// 		x = -1;
				// 	}
				// 	while(o > 0)
				// 	{
				// 		rrb(b);
				// 		o--;
				// 	}
				// 	if(a->num[a->top] > a->num[a->top -1])
				// 		sa(a);

				// while(o > 0)
				// {
				// 	rrb(b);
				// 	o--;
				// }
				// 		// if(a->num[a->top] < a->num[a->top -1])
				// 		// 	sb(b);
				// 		pa(a,b);
				// 		// d--;
				// 		// while (d > 0)
				// 		// {
				// 		// 	rrb(b);
				// 		// 	d--;
				// 		// }

				// }
				x++;
			}
			current = current->next;
		}
		// pa(a,b);
	}
	// 1
	// 4
	// 5
	// 6

	printf("b:%d\n", pop(b)); // Output: 1
	printf("b:%d\n", pop(b)); // Output: 1
	printf("b:%d\n", pop(b)); // Output: 1
	// printf("b:%d\n", pop(b)); // Output: 1
	// printf("b:%d\n", pop(b)); // Output: 1
	// printf("b:%d\n", pop(b)); // Output: 1
	// printf("b:%d\n", pop(b));  // Output: 1
	// printf("b:%d\n", pop(b));  // Output: 1
	// printf("b:%d\n", pop(b));  // Output: 1
	// printf("b:%d\n", pop(b));  // Output: 1
	// printf("b:%d\n", pop(b));  // Output: 1
	// printf("b:%d\n", pop(b));  // Output: 1

	// printf("\na:%d\n", pop(a)); // Output: 1
	printf("a:%d\n", pop(a)); // Output: 1
	printf("a:%d\n", pop(a)); // Output: 1
	printf("a:%d\n", pop(a)); // Output: 1
	printf("a:%d\n", pop(a)); // Output: 1
	printf("a:%d\n", pop(a)); // Output: 1
	printf("a:%d\n", pop(a)); // Output: 1
	printf("a:%d\n", pop(a)); // Output: 1
	printf("a:%d\n", pop(a)); // Output: 1
}

int main()
{
	t_stack b, a;
	stack_init(&a);
	stack_init(&b);

	push(&a, 2);  // 40
	push(&a, 3);  // 64
	push(&a, 5);  // 5
	push(&a, 11); // 40
	push(&a, 10); // 30
	push(&a, 6);  // 30
	push(&a, 9);  // 30
	push(&a, 7);  // 30
	push(&a, 4);  // 30
	push(&a, 1);  // 30
	push(&a, 8);  // 30
	push(&a, 12); // 30

	// push(&a, -40); // 35
	// push(&a, 52); // 3
	// push(&a, 55); // 4
	// push(&a, 64); // 28

	// rra(&a);
	// push(&b, 7);//1
	// push(&b, 6);//1
	// push(&b, 5);//1

	// ra(&a);

	// printf("a:%d\n", pop(&a));  // Output: 1
	// printf("a:%d\n", pop(&a));  // Output: 1
	// printf("a:%d\n", pop(&a));  // Output: 1
	// printf("a:%d\n", pop(&a));  // Output: 1
	// printf("a:%d\n", pop(&a));  // Output: 1
	// printf("a:%d\n", pop(&a));  // Output: 1
	// printf("a:%d\n", pop(&a));  // Output: 1
	// printf("a:%d\n", pop(&a));  // Output: 1
	// printf("a:%d\n", pop(&a));  // Output: 1
	// printf("a:%d\n", pop(&a));  // Output: 1
	// printf("a:%d\n", pop(&a));  // Output: 1
	// printf("a:%d\n", pop(&a));  // Output: 1

	// printf("b:%d\n", pop(&b));  // Output: 1
	// printf("b:%d\n", pop(&b));  // Output: 1
	// printf("b:%d\n", pop(&b));  // Output: 1
	// printf("b:%d\n", pop(&b));  // Output: 1
	// printf("%d %d\n", a.num[a.i],b.num[b.top]);  // Output: 1

	function(&a, &b);
}