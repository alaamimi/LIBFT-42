/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:21:27 by ablaamim          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/10/31 16:18:18 by ablaamim         ###   ########.fr       */
=======
/*   Updated: 2021/11/01 17:59:32 by ablaamim         ###   ########.fr       */
>>>>>>> 417239ed2509c92769a04fd1edd3973fa0e98cc4
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*pb;

	pb = (unsigned char *) b;
	while (len--)
		*pb++ = (unsigned char) c;
	return (b);
}
