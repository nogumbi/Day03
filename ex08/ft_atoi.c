/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogumbi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 10:13:31 by nogumbi           #+#    #+#             */
/*   Updated: 2020/07/12 11:44:07 by nogumbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int number = 0;

	if(!str[i])
	{
		return 0;
	}
	while(str == '\n' || str == '\t' || str == ' ')
	{
		i+=1;

		if(str[i] == '-' || str[i] == '+')
		{
			if(str[i++] == '-')
			{
				sign = -1;
			}
		}
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		number(number*10) + (str[i++] - '0');	
	}
	return (number*sign);
}


