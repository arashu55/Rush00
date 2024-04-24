/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mishimod <mishimod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 22:56:42 by mishimod          #+#    #+#             */
/*   Updated: 2024/02/10 15:54:39 by mishimod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_char(int i, int j, int x, int y)
{
	if ((i == 0 && j == 0) || (i == y - 1 && j == x - 1 && y > 0 && x > 0))
		ft_putchar('/');
	else if ((i == 0 && j == x - 1) || (i == y - 1 && j == 0))
		ft_putchar('\\');
	else if (i == 0 || i == y - 1 || j == 0 || j == x - 1)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	if (x < 0)
		x = -x;
	if (y < 0)
		y = -y;
	if (x == 0 || y == 0)
		return ;
	if ((x == 0) || (y == 0))
		return ;
	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			ft_print_char(i, j, x, y);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
