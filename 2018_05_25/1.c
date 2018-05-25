#include <stdio.h>

int main()
{
	int i;
	int alp_count[26] = { 0 };
	char temp;

	for (i = 0; i < 10; i++)
	{
		printf("%d번째 소문자 입력 : ", i + 1);
		scanf(" %c", &temp);

		switch (temp)
		{
		case 'a' :
			alp_count[0]++;
			break;

		case 'b':
			alp_count[1]++;
			break;

		case 'c':
			alp_count[2]++;
			break;

		case 'd':
			alp_count[3]++;
			break;

		case 'e':
			alp_count[4]++;
			break;

		case 'f':
			alp_count[5]++;
			break;

		case 'g':
			alp_count[6]++;
			break;

		case 'h':
			alp_count[7]++;
			break;

		case 'i':
			alp_count[8]++;
			break;

		case 'j':
			alp_count[9]++;
			break;

		case 'k':
			alp_count[10]++;
			break;

		case 'l':
			alp_count[11]++;
			break;

		case 'm':
			alp_count[12]++;
			break;

		case 'n':
			alp_count[13]++;
			break;

		case 'o':
			alp_count[14]++;
			break;

		case 'p':
			alp_count[15]++;
			break;

		case 'q':
			alp_count[16]++;
			break;

		case 'r':
			alp_count[17]++;
			break;

		case 's':
			alp_count[18]++;
			break;

		case 't':
			alp_count[19]++;
			break;

		case 'u':
			alp_count[20]++;
			break;

		case 'v':
			alp_count[21]++;
			break;

		case 'w':
			alp_count[22]++;
			break;

		case 'x':
			alp_count[23]++;
			break;

		case 'y':
			alp_count[24]++;
			break;

		case 'z':
			alp_count[25]++;
			break;
		}
	}

	for (i = 0; i < 26; i++)
	{
		if (alp_count[i] == 0)
			continue;

		printf("%c는 %d번 나왔습니다.\n", 97 + i, alp_count[i]);
	}

	return 0;
}
