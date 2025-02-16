/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogumbi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 10:07:56 by nogumbi           #+#    #+#             */
/*   Updated: 2020/07/12 10:11:04 by nogumbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrev(char *str)
{
	int i = 0;
	int k = 0;
	int temp;

	while(str[i])
	{
		i+=1;
		while((i-1)>k)
		{
			temp = str[i];
			str[i--] = str[k];
			str[k++] = temp;
		}
	}
	return str;
}
