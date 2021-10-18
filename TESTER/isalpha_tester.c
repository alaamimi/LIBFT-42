/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha_tester.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:28:14 by ablaamim          #+#    #+#             */
/*   Updated: 2021/10/18 19:08:09 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int	main(int argc, char *argv[])
{
	(void)	argv;
	(void)	argc;
	int		index;
	char	test[] = "abcdexyz";
	char	test1[] = "0123456789";
	char	test2[] = "\0\n@$*!:[]{}~`'/";

	index = 0;
	printf("%s%s%s", GREEN, "------------------ TEST 1 -------------------\n", DEFAULT);
	while (index < 8)
	{
		if (ft_isalpha(test[index]) == 0)
			printf("%s%s%s", RED, "[KO] ---> YOUR IS ALPHA DOES NOT WORK FOR ALPHA CHARACTERS.\n", DEFAULT);
		else
			printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
		index++;
	}
	index = 0;
	printf("%s%s%s", GREEN, "----------------- TEST 2 --------------------\n", DEFAULT);
	while (index < 10)
	{
		if (ft_isalpha(test1[index]) == 1)
			printf("%s%s%s", RED, "[KO] ---> YOUR IS ALPHA DOES NOT WORK FOR NUMERICS.\n", DEFAULT);
		else
			printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
		index++;
	}
	index = 0;
	printf("%s%s%s", GREEN, "----------------- TEST 3 --------------------\n", DEFAULT);
	while (index < 16)
	{
		if (ft_isalpha(test2[index]) != isalpha(test2[index]))
		{
			if (test2[index] == 0)
				printf("%s%s%s", RED, "[KO] ---> YOUR ISALPHA DOES NOT WORK FOR '\\0'.\n", DEFAULT);
			else if (test2[index] < 32 || test2[index] == 127)
				printf("%s%s%s", RED, "[KO] ---> YOUR IS ALPHA DOES NOT WORK FOR NON PRINTABLE CHARACTERS.\n", DEFAULT);
		}
		else
			printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
		index++;
	}
	printf("%s%s%s", GREEN, "------------------ FINISH -------------------\n", DEFAULT);
	return (EXIT_SUCCESS);
}