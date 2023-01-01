#include <stdio.h> 
 #include <stdlib.h>

#define STACK_SIZE 500

typedef struct s_stack {
	int num[STACK_SIZE];
	int top;
} t_stack;

typedef struct s_vars {
	t_stack a;
	t_stack b;
} t_vars;


void stack_init(t_stack *stack)
{
	stack->top = -1;
}

void push(t_stack *stack, int element)
{
	if(stack->top == STACK_SIZE -1)
	{
		printf("Error: stack overflow");
		return;
	}
	stack->top++;
	stack->num[stack->top] = element;
}

int  pop(t_stack *stack)
{
	if(stack->top == -1)
	{
		printf("Error: stack underflow");
		exit(1);
	}
	int element = stack->num[stack->top];
	stack->top--;
	return element;
}


void swap(t_stack *stack)
{
	int	store;

	store = stack->num[stack->top];
	stack->num[stack->top] = stack->num[stack->top - 1];
	stack->num[stack->top - 1] = store;
	
}

void sa(t_vars *vars)
{
	swap(&vars->a);
}

void sb(t_vars *vars)
{
	swap(&vars->b);
}

void ss(t_vars *vars)
{
	swap(&vars->a);
	swap(&vars->b);
}

void push_from_to(t_stack *from, t_stack *to)
{
	int	store;

	store = pop(from); 
	push(to, store);
}


void pa(t_vars *vars)
{
	push_from_to(&vars->a, &vars->b);
}

void pb(t_vars *vars)
{
	push_from_to(&vars->b ,&vars->a);
}


void rotation(t_stack *stack)
{
	int j = stack->top;
	int tmp = stack->num[j];
	while(j == 1)
	{
		stack->num[j] = stack->num[j - 1];
		j--;
	}
	stack->num[0] = tmp;
}

void ra(t_vars *vars)
{
	rotation(&vars->a);
}

void rb(t_vars *vars)
{
	rotation(&vars->b);
}

int main()
{
	t_stack  a;
	t_stack  b;
	t_vars  vars;
	stack_init(&a);

	push(&a, 4);//4
	push(&a, 3);//3 
	push(&a, 2);//2
	push(&a, 5);//1 
	pa(&vars);
		 
 	//  printf("%d\n", pop(&a));  // Output: 4
	// printf("%d\n", pop(&a));  // Output: 3
  	// printf("%d\n", pop(&a));  // Output: 2
	b = vars.b;
 	 printf("%d\n", b.num[0]);  // Output: 1
 
}