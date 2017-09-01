/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bantunes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 10:13:16 by bantunes          #+#    #+#             */
/*   Updated: 2017/08/15 10:35:09 by bantunes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** #include <stdio.h>
** #include <string.h>
*/

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
** int main()
** {
**    char src[40];
**    char dest[100];
**
**    memset(dest, '\0', sizeof(dest));
**    ft_strcpy(src, "test");
**    ft_strcpy(dest, src);
**
**    printf("Final copied string : %s\n", dest);
**
**    return(0);
** }
*/
