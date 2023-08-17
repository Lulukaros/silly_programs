#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <strings.h>

int main()
{
	char answer[] = "silence", guess[10];
	int guessCount = 0, guessLimit = 3;
	printf("Hello and welcome to today's riddle :). You have 3 tries to solve it.\n");
	sleep(1);
	printf("If you speak my name, I vanish. What am I?:\n");
	while (strcasecmp(answer, guess) != 0 && guessCount < guessLimit)
	{
		printf("Enter a guess: \n");
		scanf("%s", guess);
		guessCount++;
		if(strcasecmp(answer, guess) == 0)
		{
			printf("You win!!\n");
			sleep(1);
			printf("your prize is a meme :3\n");
			system("xdg-open 'https://imgur.com/2kuZa2R.jpg'");
		}
		else if (guessCount == guessLimit)
		{
			printf("You lose :/\n");
			sleep(1);
			system("xdg-open 'https://www.youtube.com/watch?v=RHuQqLxmEyg'");
		}
	}
	return 0;
}
