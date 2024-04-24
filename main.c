/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mishimod <mishimod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 01:22:23 by mishimod          #+#    #+#             */
/*   Updated: 2024/02/10 09:28:34 by ashu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void ft_putchar(char c);  // ft_putcharのプロトタイプ宣言
void rush(int x, int y);  // Rushのプロトタイプ宣言

int main() {
    // 正の数を含むケースをテスト
    ft_putchar('P');
    ft_putchar('\n');
    rush(5, 3);
    ft_putchar('\n');

    rush(5, 1);
    ft_putchar('\n');

    rush(1, 1);
    ft_putchar('\n');

    rush(1, 5);
    ft_putchar('\n');

    rush(4, 4);
    ft_putchar('\n');

    // 負の数を含むケースをテスト
    ft_putchar('N');
    ft_putchar('\n');
    rush(-2, 3);
    ft_putchar('\n');

    rush(-4, 5);
    ft_putchar('\n');

    rush(3, -4);
    ft_putchar('\n');

    rush(5, -4);
    ft_putchar('\n');

    rush(-5, -3);
    ft_putchar('\n');

	// 0 のケースをテスト
    ft_putchar('0');
    ft_putchar('\n');
	rush(0, 100);
    ft_putchar('\n');

    rush(100, 0);
    ft_putchar('\n');

    rush(0, 0);
    ft_putchar('\n');
	
    return 0;
}
