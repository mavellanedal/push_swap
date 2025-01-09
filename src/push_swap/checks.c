/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavellan <mavellan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 14:39:37 by mavellan          #+#    #+#             */
/*   Updated: 2025/01/09 12:47:57 by mavellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// Esta funcion comprueba si hay algun numero duplicado.
// Selecciona el primer numero, lo compara con todos los demas.
// En caso de no ser igual pasa al sigueinte
// y lo vuelve a comparar con los demas.

int	ft_check_dup(t_stack *a)
{
	t_stack	*temp;

	while (a)
	{
		temp = a->next;
		while (temp)
		{
			if (a->nbr == temp->nbr)
				return (1);
			temp = temp->next;
		}
		a = a->next;
	}
	return (0);
}

// Esta funcion se ejecuta cuando el input esta separado por espacios.
// Lo que hace es hacer un split
// Aplica un atoi sobre cada elemenot de la lista devulta por el split
// Pone el numero al final de un nuevo stack.
t_stack	*ft_subprocess(char **av)
{
	t_stack	*a;
	char	**tmp;
	int		i;
	int		j;

	a = NULL;
	i = 0;
	tmp = ft_split(av[1], 32);
	while (tmp[i])
	{
		j = ft_atoi2(tmp[i]);
		ft_add_back(&a, ft_new_stack(j));
		i++;
	}
	ft_freestr(tmp);
	free(tmp);
	return (a);
}

// Esta funcion hace tres cosas
// 1. Comprueba si el input es menor de 2
// 2. Comprueba si el numero de inputs es 2,
//		En ese caso llama a otra funcion.
// 3. Comprueba si el numero de inputs es mayor de 2 aplica el atoi
//		y lo agrega al final del stack.
t_stack	*ft_check_arg(int ac, char **av)
{
	t_stack	*a;
	int		i;
	int		j;

	i = 1;
	a = NULL;
	if (ac < 2)
		ft_error_message();
	if (ac == 2)
		a = ft_subprocess(av);
	else
	{
		while (i < ac)
		{
			j = ft_atoi2(av[i]);
			ft_add_back(&a, ft_new_stack(j));
			i++;
		}
	}
	return (a);
}
