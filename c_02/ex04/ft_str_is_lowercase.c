/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 19:24:00 by sgoremyk          #+#    #+#             */
/*   Updated: 2023/11/22 13:14:12 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = -1;
	while (++i, str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			continue ;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char	*str1 = "asdafasdA";
	char	*str2 = "asdfg1234";

	printf("%d\n",ft_str_is_lowercase(str1));
	printf("%d\n",ft_str_is_lowercase(str2));
	return (0);
}*/
