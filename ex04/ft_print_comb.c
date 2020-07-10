/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomcmast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 15:01:37 by lomcmast          #+#    #+#             */
/*   Updated: 2020/07/10 08:41:28 by lomcmast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	ft_groups(char a, char b, char c);

void	ft_print_comb(void)
{
	char	a;

	char	b;

	char	c;
	
	a = '0';
	b = '0';
	c = '0';
	while(a <= '9')
	{
		b = a + 1;
		while(b <= '9')
		{	
			c = b + 1;
			while(c <= '9')
			{	
				ft_groups(a,b,c);	
				c ++;	
			}
			b ++;
		}
		a ++;
	}
}

