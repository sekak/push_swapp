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

// initialize top struct
void stack_init(t_stack *stack)
{
	stack->top = -1;
}

// function push 
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

// function pop 
int  pop(t_stack *stack)
{
	if(stack->top == -1)
	{
		printf("Error: stack underflow");
		// exit(1);
		push(stack, 3);
	}
	int element = stack->num[stack->top];
	stack->top--;
	return element;
}

//swap each sa && sb
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

// do it sa && sb
void ss(t_vars *vars)
{
	swap(&vars->a);
	swap(&vars->b);
}

// push_from_to each pa and pb ; pb->pa or pa->pb
// void push_from_to(t_stack *from, t_stack *to)
// {
// 	int	store;

// 	store = pop(from); 
// 	push(to, store);
// 	printf("to->num%d\n",pop(to));
// 	// return(to->num[0]);
// }


void pb(t_stack *a,t_stack *b)
{
  	int	store; 
	 
	store = pop(a); 
	push(b, store);
	printf("%d\n",b->num[b->top]);
}

void pa(t_stack *a,t_stack *b)
{
  	int	store; 
	 
	store = pop(b); 
	push(a, store);
	printf("%d\n",a->num[a->top]);
}

// void  pb(t_vars *vars)
// {
// 	 push_from_to(&vars->a ,&vars->b) ;
// }

//rotation a or b
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
	t_stack a,b;
	t_vars  vars;
 
 	stack_init(&a);
	stack_init(&b);

	push(&a, 4);//4
	push(&a, 3);//3 
	push(&a, 2);//2
	push(&a, 1);//1 

	push(&b, 7);//1 
	push(&b, 6);//1 
	push(&b, 5);//1 

  	printf("%d %d\n", a.num[a.top],b.num[b.top]);  // Output: 1
	pb(&a, &b);
	 
  	printf("%d %d\n", a.num[a.top],b.num[b.top]);  // Output: 1
	
}