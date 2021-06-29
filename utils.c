#include "push_swap.h"

int		is_sorted(int *S, int start, int end)
{
	int		i;

	i = 0;
	while (start + i <= end - 2)
	{
		if (S[start + i] < S[start + i + 1])
			return (0);
		i++;
	}
	return (1);
}

static int		compare(const void *a, const void *b)
{
	return (*(int *)b - *(int *)a);
}

int		initiate_data(int argc, char **argv)
{
	int		nbr;
	char	**endptr;
	size_t	nmemb;

	memset(&data, 0, sizeof(t_data));
	data.index = argc - 1;
	data.size = data.index;
	if (!(data.S = (int *)malloc(sizeof(int) * data.size)))
		return (0);
	if (!(data.SS = (int *)malloc(sizeof(int) * data.size)))
		return (0);
	for(int i = data.size; i > 0; i--)
	{
		endptr = &(argv[i]);
		nbr = strtol(argv[i], endptr, 10);
		if (**endptr != '\0' || nbr > INT_MAX || nbr < INT_MIN)
			return (0);
		nmemb = data.size - i;
		if (lfind(&nbr, data.S, &nmemb, sizeof(int), compare) == NULL)
			data.S[data.size - i] = nbr;
		else
			return (0);
	}
	memcpy(data.SS, data.S, sizeof(int) * data.size);
	qsort(data.SS, data.size, sizeof(int), compare);
	return (1);
}


void	print_stacks()
{
	int		i;

	printf("A : ");
	for (i = data.index - 1; i >= 0; i--)
		printf("%d ", data.S[i]);
	printf("\nB : ");
	for (i = data.index; i < data.size; i++)
		printf("%d ", data.S[i]);
	printf("\n");
}