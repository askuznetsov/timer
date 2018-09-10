#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int 	minutes(int min)
{
	int sec;

	sec = min * 60;
	return (sec);
}

int 	ft_is_delimeter(char temp)
{
	if (temp == ' ' || temp == '\n' || temp == '\t' ||
		temp == '\v' || temp == '\r' || temp == '\f')
		return (1);
	return (0);
}

int 	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

int		ft_atoi(char *str)
{
		unsigned long int	number;
		int					i;
		int 				minus;

		i = 0;
		minus = 1;
		number = 0;
		while (ft_is_delimeter(str[i]))
			i++;
		if (str[i] == '-')
			minus = -1;
		if (str[i] == '-' || str[i] == '+')
			i++;
		while (str[i] && ft_isdigit(str[i]))
		{
			if ((number > 922337203685477580 ||
				(number == 922337203685477580 &&
				(str[i] - '0') > 7)) && minus == 1)
				return (-1);
			else if ((number > 922337203685477580 ||
				(number == 922337203685477580 &&
				(str[i] - '0') > 8)) && minus == -1)
				return (0);
			number = (number * 10) + (str[i++] - '0');
		}
		return (number * minus);
}

int		main(void)
{
	printf("Choose the variant of time:\n");
	printf("1. Hours\n");
	printf("2. Hours : Minutes\n");
	printf("3. Minutes\n");
	printf("4. Minutes : Seconds\n");
	printf("5. Seconds\n");

	int i;
	int timer;

	scanf("%d",&i);
	if (i == 1)
	{
		int timer;
		int hrs;

		printf("Type number of hours:\n");
		scanf("%d", &hrs);
		timer = 0;
		while (timer < hrs)
		{
			sleep(hours*minutes(60));
			timer++;
			system("afplay alert.mp3");
			return (0);
		}
	}
	if (i == 2)
	{
		int timer;
		int hrs;
		int minutes;
		int er;

		printf("Type number of hours:\n");
		if (er = scanf("%d", hrs) != 1)
			printf("Error input\n");
		else if (hrs < 0)
			printf("Error input"\n);
		else 
		printf("Type number of minutes:\n");
		if (er = scanf("%d", minutes) != 1)
			printf("Error input\n");
		timer = 0;
		while (timer
}
