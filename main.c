#include "ft_op.h"

	int		ft_atoi(char *str);

int		evalexpr(char *str)
{
	int		j;
	int		i;
	int 	n;
	int		m;
	int		o;
	int		p;
	int 	len;
	char	buf;
	t_cal	cal[5];

	i = 0;
	n = 0;
	cal[0].op = '+';
	cal[0].f = ft_add;
	cal[1].op = '-';
	cal[1].f = ft_sub;
	cal[2].op = '*';
	cal[2].f = ft_mul;
	cal[3].op = '/';
	cal[3].f = ft_div;
	cal[4].op = '%';
	cal[4].f = ft_mod;

	while (str[i] != '\0')
	{
		while (str[i] = '(' && (k == 0))
		{
			n = i;
			if (str[i] = ')')
			while (j < 5)
			{
				m = n - i;
				if (m % 2 == 0)
					o = m / 2;
				else
					p = m + 1;
					o = p / 2;
				if (str[n + o] == cal[j].op)
				{
					buf = ft_itoa(cal.f(ft_atoi(str[n + 1], str[i - 1])));
					len = ft_strlen(buf);
					str[n] = buf;
					j == 5;
				}
				j++;
			while (str[n - 1] != ')')
			{
				strdup(&str[n + len], &str[i]);
				k = 1;
				i = 0;
				j = 0;
			}
			i++;
		}
	}
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}