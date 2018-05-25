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

		alp_count[temp - 'a']++;
	}

	for (i = 0; i < 26; i++)
	{
		if (alp_count[i] == 0)
			continue;

		printf("%c는 %d번 나왔습니다.\n", 'a' + i, alp_count[i]);
	}

	return 0;
}
