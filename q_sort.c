#include "push_swap.h"

void	A_to_B(int start, int end)
{
	int		size = end - start;
	int		rotate = 0;
	int		pivot;
	
	if (!is_sorted(data.S, start, end))
	{
		if (size == 2)
			sa();
		else
		{
			pivot = data.SS[start + (size >> 1) - !(size & 1)];
			size >>= 1;
			while (size)
			{
				if (data.S[data.index - 1] < pivot)
				{
					size--;
					pb();
				}
				else
				{
					ra();
					rotate++;
				}
			}
			while (start && rotate--)
				rra();
			A_to_B(start, end - ((end - start) >> 1));
			B_to_A(end - ((end - start) >> 1), end);
		}
	}
}

void	B_to_A(int start, int end)
{
	int		size = end - start;
	int		pivot;
	int		rotate = 0;

	if (!is_sorted(data.S, start, end) && size != 2)
	{
		size >>= 1;
		pivot = data.SS[start + size];
		while (size)
		{
			if (data.S[data.index] > pivot)
			{
				size--;
				pa();
			}
			else
			{
				rb();
				rotate++;
			}
		}
		while (end != data.size && rotate--)
			rrb();
		A_to_B(start, start + ((end - start) >> 1));
		B_to_A(start + ((end - start) >> 1), end);
		return ;
	}
	else if (size == 2)
		sb();
	while (size--)
		pa();
}
