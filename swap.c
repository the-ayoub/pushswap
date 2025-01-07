#include "pushswap.h"
void	sa(t_stack *stack_a,int i)
{
	//t_stack	*root;
	t_stack	*curr;
	int tmp;

	//root = stack_a;
	curr = stack_a;
	tmp = curr->value;
	curr->value = curr->next->value;
	curr->next->value = tmp;
	//curr = root;
	if(i == 1)
		printf("sa\n");
}
void	sb(t_stack *stack_b,int i)
{
	//t_stack	*root;
	t_stack	*curr;
	int tmp;

	//root = stack_b;
	curr = stack_b;
	tmp = curr->value;
	curr->value = curr->next->value;
	curr->next->value = tmp;
	//curr = root;
	if(i == 1)
		printf("sb\n");
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	sa(stack_a,0);
	sb(stack_b,0);
	printf("ss\n");
}
