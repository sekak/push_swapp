#include "push_swap.h"

void stack_init(t_stack *stack)
{
	stack->top = -1;
}

// function push
void push(t_stack *stack, int element)
{
	if (stack->top == STACK_SIZE - 1)
	{
		printf("Error: stack overflow");
		return;
	}
	stack->top++;
	stack->num[stack->top] = element;
}

// function pop
int pop(t_stack *stack)
{
	if (stack->top == -1)
	{
		printf("Error: stack underflow");
		exit(1);
	}
	int element = stack->num[stack->top];
	stack->top--;
	return element;
}

// swap each sa && sb
void swap(t_stack *stack)
{
	int store;

	store = stack->num[stack->top];
	stack->num[stack->top] = stack->num[stack->top - 1];
	stack->num[stack->top - 1] = store;
}

void sa(t_stack *a)
{
	int store;

	store = a->num[a->top];
	a->num[a->top] = a->num[a->top - 1];
	a->num[a->top - 1] = store;
	printf("sa\n");
}

void sb(t_stack *b)
{
	int store;

	store = b->num[b->top];
	b->num[b->top] = b->num[b->top - 1];
	b->num[b->top - 1] = store;
	printf("sb\n");
}

// do it sa && sb
void ss(t_stack *a, t_stack *b)
{
	sa(a);
	sb(b);
	printf("ss\n");
}

void pb(t_stack *a, t_stack *b)
{
	int store;

	store = pop(a);
	push(b, store);
	printf("pb\n");
}

void pa(t_stack *a, t_stack *b)
{
	int store;

	store = pop(b);
	push(a, store);
	printf("pa\n");
}

// rotation a or b
void ra(t_stack *a)
{
	int j = a->top;
	int tmp = a->num[j];
	while (j >= 1)
	{
		a->num[j] = a->num[j - 1];
		j--;
	}
	a->num[0] = tmp;
	printf("ra\n");
}

void rb(t_stack *b)
{
	int j = b->top;
	int tmp = b->num[j];
	while (j >= 1)
	{
		b->num[j] = b->num[j - 1];
		j--;
	}
	b->num[0] = tmp;
	printf("rb\n");
}

void rr(t_stack *a, t_stack *b)
{
	ra(a);
	rb(b);
	printf("rr\n");
}

// reverse rotaion rra rrb
void rra(t_stack *a)
{
	int i;
	int j;
	int tmp = a->num[0];
	i = 0;
	j = a->top + 1;
	while (i < j)
	{
		a->num[i] = a->num[i + 1];
		i++;
	}
	a->num[a->top] = tmp;
	printf("rra\n");
}

void rrb(t_stack *b)
{
	int i;
	int j;
	int tmp = b->num[0];
	i = 0;
	j = b->top + 1;
	while (i < j)
	{
		b->num[i] = b->num[i + 1];
		i++;
	}
	b->num[b->top] = tmp;
	printf("rrb\n");
}

void rrr(t_stack *a, t_stack *b)
{
	rra(a);
	rrb(b);
	printf("rrr\n");
}

int check_is_all_number(char *av)
{
	int i;
	i = -1;
	
	while (av[i])
	{
		if (!( av[i] >= '0' && av[i] <= '9'))
			return (0);
		while (av[i] == 32)
			i++;
		i++;
	}
	return (1);
}

int check_is_all_number_two(char **av)
{
	int i;
	int j = 0;
	i = 1;

	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			// printf("av[i] : %c\n", av[i][j]);
			if (!(av[i][j] >= '0' && av[i][j] <= '9'))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void char_to_int_two(t_stack *a, char **av)
{
	int i;
	int j = 0;
	int number;
	number = 0;
	i = 1;
	while (av[i])
	{
 		j = 0;
		while (av[i][j])
		{
			number = 0;
			if (av[i][j] >= '0' && av[i][j] <= '9')
			{
				while (av[i][j] >= '0' && av[i][j] <= '9')
				{
					number = (number * 10) + av[i][j] - 48;
					j++;
				}
 				push(a, number);
			}
			else 
				break;

		}
		i++;
	}
}

void char_to_int(t_stack *a, char *av)
{
	int i;
 	int number;
	int d = 0;
	number = 0;
	i = 0;
	while (av[i])
	{
		while (av[i] == 32)
			i++;
		number = 0;
		while (av[i] >= '0' && av[i] <= '9')
		{
			if (av[i] == 32)
				break;
			number = (number * 10) + av[i] - 48;
			i++;
			d = 1;
		}
		if(d == 1)
			push(a, number);
		d = 0;
	}
}