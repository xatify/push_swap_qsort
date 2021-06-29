#include "push_swap.h"

int		main(int argc, char **argv)
{
	fflush(stdout);
	if (argc == 1)
		return (0);
	else
	{
		if (!initiate_data(argc, argv))
			fprintf(stderr, "%s\n", "ERROR");
		else
			A_to_B(0, data.size);
		free(data.S);
		free(data.SS);
	}
	return (0);
}