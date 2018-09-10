#include <stdio.h>

int 	minutes(int min)
{
	int sec;

	sec = min * 60;
	return (sec);
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
		int min;
		int error;

		printf("Type number of hours:\n");
		if (error = scanf("%d", hrs) != 1)
			printf("Error input\n");
		else if (hrs < 0)
			printf("Error input"\n);
		else 
			printf("Type number of minutes:\n");
		if (error = scanf("%d", min) != 1)
			printf("Error input\n");
		else if (min < 0 || min >= 60)
			printf("Error input\n");
		else
		{
			timer = 0;
			while (timer < (hours*minutes(60) + minutes(min)))
			{
				sleep(1);
				timer++;
			}
			system("afplay alert.mp3");
			return (0);
		}
	}
}
