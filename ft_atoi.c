/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkonttin <lkonttin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:38:34 by lkonttin          #+#    #+#             */
/*   Updated: 2023/11/03 09:58:57 by lkonttin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* static int	size_check(unsigned long long nbr, int sign)
{
	if (nbr > 9223372036854775807 && sign > 0)
		return (-1);
	else if (nbr > 9223372036854775807 && sign < 0)
		return (0);
	else
		return (1);
} */
// Returns -1 if nbr > max long long, or 0 if nbr < min long long

int	ft_atoi(const char *str)
{
	int					i;
	int					sign;
	long				nbr;

	i = 0;
	sign = 1;
	nbr = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	if (str[i] < '0' && str[i] > '9')
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + str[i] - '0';
		if (size_check(nbr, sign) != 1)
			return (size_check(nbr, sign));
		i++;
	}
	return (nbr * sign);
}
