#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <search.h>

/*
| S  	: stack data
| SS 	: copy of S but in sorted order
| index : seperart stack A and stack B
| size	: the len of the initial input
*/

typedef struct s_data
{
	int		*S;
	int		index;
	int		size;
	int		*SS;
}				t_data;


/*
| Operations on the stacks
*/
void	pa();
void	pb();
void	sa();
void	sb();
void	ra();
void	rra();
void	rb();
void	rrb();

/*
| Adjusted quick sort	
*/
void	A_to_B(int start, int end);
void	B_to_A(int start, int end);
int		is_sorted(int *S, int start, int end);

/*
| initiating data and checking for errors
*/
void	print_stacks();
int		initiate_data(int argc, char **argv);

/*
| Global data
*/
t_data		data;

#endif