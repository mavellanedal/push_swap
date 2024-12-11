/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavellan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:54:28 by mavellan          #+#    #+#             */
/*   Updated: 2024/10/03 13:46:37 by mavellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Inseretar un string de tipo char puntero.
int ft_atoi(const char *nptr)
{
	int i;		// Variable para iterar
	int n;		// Variable para saber el signo que debe tener el valor de retorno.
	int result; // La variable a devolver con el resultado.

	i = 0;
	n = 1;
	result = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == 45 || nptr[i] == 43)
	{
		if (nptr[i] == 45)
			n *= -1;
		i++;
	}
	while ((nptr[i] != '\0') && (nptr[i] >= 48 && nptr[i] <= 57))
	{
		result *= 10;
		result += nptr[i] - 48;
		i++;
	}
	return (result * n);
}
