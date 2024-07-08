/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 21:02:02 by phuocngu          #+#    #+#             */
/*   Updated: 2024/07/03 20:33:07 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_same(char c1, char c2)
{
	return (c1 == c2);
}

char	*ft_strstr(char *str, char *to_find)
{
	// NEED to fix NULL error
	int	i;
	int	y;

	i = 0;
	y = 0;
	while (str[i])
	{
		if (is_same(str[i], to_find[y]))
		{
			while (str[i + y] == to_find[y] && str[i + y])
			{
				if (to_find[y + 1] == '\0')
				{
					return (str + i);
				}
				y++;
			}
			y = 0;
		}
		i++;
	}
	return (0);
}
