#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void battle(int user)
{
	int com;
	static int win = 0, lose = 0, draw = 0;

	printf("가위바위보 게임\n");

	com = rand() % 2;

	if (user == 0)
	{
		if (com == 0)
		{
			printf("비겼습니다.\n");
			draw++;
		}

		else if (com == 1)
		{
			printf("당신이 졌습니다.\n");
			lose++;
		}

		else
		{
			printf("당신이 이겼습니다.\n");
			win++;
		}
	}

	else if (user == 1)
	{
		if (com == 1)
		{
			printf("비겼습니다.\n");
			draw++;
		}

		else if (com == 2)
		{
			printf("당신이 졌습니다.\n");
			lose++;
		}

		else
		{
			printf("당신이 이겼습니다.\n");
			win++;
		}
	}

	else
	{
		if (com == 2)
		{
			printf("비겼습니다.\n");
			draw++;
		}

		else if (com == 0)
		{
			printf("당신이 졌습니다.\n");
			lose++;
		}

		else
		{
			printf("당신이 이겼습니다.\n");
			win++;
		}
	}

	printf("당신의 전적은 %d승 %d무 %d패입니다.\n\n", win, draw, lose);
}

int main()
{
	int user;
	int flag = 1;

	srand((unsigned)time(NULL));

	do
	{
		printf("가위바위보 입력(0 가위, 1 바위, 2 보, 그외 종료) : ");
		scanf("%d", &user);

		if (user < 0 || user > 2)
		{
			flag = 0;
			break;
		}

		battle(user);

	} while (flag);

	return 0;
}
