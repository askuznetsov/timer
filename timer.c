#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

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

	timer = 0;
	scanf("%d",&i);
	if (i == 1)
	{
		int hrs;

		printf("Type number of hours:\n");
		if (scanf("%d", &hrs) != 1)
			printf("Error input\n:");
		while (timer < (hrs*minutes(60)))
		{
			sleep(1);
			timer++;
		}
		system("afplay alert.mp3");
		return (0);
	}
	if (i == 2)
	{
		int hrs;
		int min;

		printf("Type number of hours:\n");
		if (scanf("%d", &hrs) != 1)
			printf("Error input\n");
		else if (hrs < 0)
			printf("Error input\n"); 
		printf("Type number of minutes:\n");
		if (scanf("%d", &min) != 1)
			printf("Error input\n");
		else if (min < 0 || min >= 60)
			printf("Error input\n");
		else
		{
			while (timer < (hrs*minutes(60) + minutes(min)))
			{
				sleep(1);
				timer++;
			}
			system("afplay alert.mp3");
			return (0);
		}
	}
	if (i == 3)
	{
		int min;

		printf("Type number of minutes\n");
		if (scanf("%d", &min) != 1)
			printf("Error input\n");
		else if (min < 0)
			printf("Error input\n");
		else
		{
			while (timer < min)
			{
				sleep(minutes(1));
				timer++;
			}
			system("afplay alert.mp3");
			return (0);
		}
	}
	if (i == 4)
	{
		int min;
		int sec;

		printf("Type number of minutes:\n");
		if (scanf("%d", &min) != 1)
			printf("Error input\n");
		else if (min < 0 || min >= 60)
			printf("Wrong input\n");
		printf("Type number of seconds:\n");
		if (scanf("%d", &sec) != 1)
			printf("Error input\n");
		else if (sec < 0 || sec >= 60)
			printf("Error input\n");
		else
		{
			while (timer < (minutes(min) + sec))
			{
				sleep(1);
				timer++;
			}
			system("afplay alert.mp3");
			return (0);
		}
	}
	if (i == 5)
	{
		int sec;

		printf("Type number of seconds:\n");
		if (scanf("%d", &sec) != 1)
			printf("Error input\n");
		else if (sec < 0 || sec >= 60)
			printf("Error input\n");
		else
		{
			while (timer < sec)
			{
				sleep(1);
				timer++;
			}
			system("afplay alert.mp3");
			return (0);
		}
	}
}
