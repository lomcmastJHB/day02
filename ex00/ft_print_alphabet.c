/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomcmast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 12:41:12 by lomcmast          #+#    #+#             */
/*   Updated: 2020/07/09 08:19:16 by lomcmast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_print_alphabet(void)
{
	char letter;
	letter = 'a';

	while(letter <= 'z')
	{
		ft_putchar(letter);
		letter ++;
	}
}


