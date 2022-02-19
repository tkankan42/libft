/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkankan <tkankan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 10:07:31 by tkankan           #+#    #+#             */
/*   Updated: 2022/02/01 10:12:17 by tkankan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int isal)
{
	if ((isal >= 'a' && isal <= 'z')
		|| (isal >= 'A' && isal <= 'Z')
		|| (isal >= '0' && isal <= '9'))
		return (1);
	return (0);
}