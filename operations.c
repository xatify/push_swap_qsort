#include "push_swap.h"

static	void	swap(int *x, int *y)
{
	int		z = *x;

	*x = *y;
	*y = z;
}

static void	rotate_left(int *A, int len)
{
    int tmp = A[0];
    for (int i = 0; i < len - 1; i++)
        A[i] = A[i + 1]; 
    A[len - 1] = tmp;
}

static void	rotate_right(int *A, int len)
{
	int tmp = A[len - 1];
    for (int i = len - 2; i >= 0; i--) {
        A[i + 1] = A[i];
    }
    A[0] = tmp;
}

void	pa()
{
	if (data.index < data.size)
		data.index++;
	printf("pa\n");
}

void	pb()
{
	if (data.index > 0)
		data.index--;
	printf("pb\n");
}

void	sa()
{
	if (data.index >= 2)
		swap(&(data.S[data.index - 1]), &(data.S[data.index - 2]));
	printf("sa\n");
}

void	sb()
{
	if (data.index <= data.size - 2)
		swap(&(data.S[data.index]), &(data.S[data.index + 1]));
	printf("sb\n");
}

void	ra()
{
	if (data.index >= 2)
		rotate_right(data.S, data.index);
	printf("ra\n");
}

void	rra()
{
	if (data.index >= 2)
		rotate_left(data.S, data.index);
	printf("rra\n");
}

void	rb()
{
	if (data.index <= data.size - 2)
		rotate_left(&(data.S[data.index]), data.size - data.index);
	printf("rb\n");	
}

void	rrb()
{
	if (data.index <= data.size - 2)
		rotate_right(&(data.S[data.index]), data.size - data.index);
	printf("rrb\n");
}
