/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ananelli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 03:24:04 by ananelli          #+#    #+#             */
/*   Updated: 2017/08/20 16:57:47 by ananelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

//"9...7...." "2...9..53" ".6..124.." "84...1.9." "5.....8.." ".31..4..." "..37..68." ".9..5.741" "47......." | cat -e

/******************** IS A VALID GRID ******************/

int ft_is_valid(char **puzzle, int r, int c, int num)
{
	int count;
	int x;
	int y;

	x = 0;
	y = 0;
	count = 0;
	while (x++ < 3)
		while (y++ < 3)
			if (puzzle[x + (r - (r % 3))][y + (c - (c % 3))] == num)
				return (0);
	while (count < 9)
	{
		if (puzzle[count][c] == num)
			return (0);
		if (puzzle[r][count] == num)
			return (0);
		count++;
	}
	return (1);
}

/*************** PRINT GRID *************/
void ft_print_grid (char **argv)
{
	int rows;
	int cols;

	rows = 1;
	cols = 0;
	while (argv[rows] != '\0')
	{
		printf(" ");
		while (argv[rows][cols] != '\0')
		{
			printf("%c ", argv[rows][cols]);
			cols++;
		}
		cols = 0;
		printf("\n");
		rows++;
	}
}

//********* DELETE BEFORE PUSH ***********
void clean_print_grid (char **argv)
{
	int rows;
	int cols;

	rows = 1;
	cols = 0;
	while (argv[rows] != '\0')
	{
		printf(" ");
		while (argv[rows][cols] != '\0')
		{
			printf("%c ", argv[rows][cols]);
			if (cols == 2 || cols == 5)
				printf("| ");
			cols++;
		}
		cols = 0;
		printf("\n");
		if (rows == 3 || rows == 6)
			printf("-------+-------+-------\n");
		rows++;
	}
}


/*************** SOLVE PUZZLE *******************/
int ft_solve_puzzle(char **puzzle, int r, int c)
{
	int num;

	printf("row : %d, col : %d\n", r,c);

	if (r == 10)
		return(1);

	num = 1;
	if(puzzle[r][c] != '.')
	{
		if (c == 8)
		{
			c = 0;
			if (ft_solve_puzzle(puzzle, r + 1, c))
				return (1);
		}
		else
		{
			if (ft_solve_puzzle(puzzle, r, c + 1))
				return (1);
		}
		return (0);
	}


	while (num <= 9)
	{
		printf("num : %d\n",num);
		if (ft_is_valid(puzzle, r, c, num))
		{
			puzzle[r][c] = num + '0';
			if (c == 8)
			{
				c = 0;
				if (ft_solve_puzzle(puzzle, r + 1, c))
					return (1);
			}
			else
			{
				if (ft_solve_puzzle(puzzle, r, c + 1))
					return (1);
			}
			puzzle[r][c] = '.';
		}
		num++;
	}
	return (0);
}

int main(int argc, char **argv)
{
	int  rows;
	int  cols;
	char **puzzle;

	puzzle = (char**)malloc(sizeof(char**) + **argv);
	puzzle = argv;

	rows = 1;
	cols = 0;
	clean_print_grid(puzzle);
	ft_solve_puzzle(puzzle, rows, cols);
	clean_print_grid(puzzle);
	return(argc - argc);
}













