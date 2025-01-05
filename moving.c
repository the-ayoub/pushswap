void	sa_swap(t_stack *stack_a)
{
	t_stack	*root;
	t_stack	*curr;
	int tmp;

	root = stack_a;
	curr = stack_a;
	tmp = curr->value;
	curr->value = curr->next->value;
	curr->next->value = tmp;
	curr = root;
	printf("sa");
}
