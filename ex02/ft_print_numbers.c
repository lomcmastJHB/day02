/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomcmast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 13:59:00 by lomcmast          #+#    #+#             */
/*   Updated: 2020/07/09 14:41:25 by lomcmast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void ft_putchar(char c);

void ft_print_numbers(void)
{
	char num;
	num = '0';

	while(num <= '9')
	{
		ft_putchar(num);
		num ++;
	}
}

