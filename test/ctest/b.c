/*
* [Full Name]: 김준형
* [Student ID]: 22200182
* [Honor Code Pledge]: 나 김준형은 하나님과 사람 앞에서 정직하고 성실하게 테스트를 수행하겠습니다.
*/

#include <stdio.h>

int	main(void)
{
	const char	*monthnames[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
	char		names[100][20] = { 0 };
	int			birthdate[100] = { 0 };
	int			idx;
	int			cnt;
	int			max;

	scanf("%d", &cnt);
	idx = -1;
	while(++idx < cnt)
	{
		scanf("%s", names[idx]);
		scanf("%d", &birthdate[idx]);
	}
	idx = -1;
	max = 0;
	while (++idx < cnt)
	{
		if (birthdate[idx] / 10000 < birthdate[max] / 10000)
		{
			max = idx;
		}
		else if (birthdate[idx] / 10000 == birthdate[max] / 10000)
		{
			if (birthdate[idx] % 10000 < birthdate[max] % 10000)
			{
				max = idx;
			}
		}
	}
	printf("%s - %d (%s %d, %d)", names[max], 2025 - (birthdate[max] / 10000), monthnames[(birthdate[max] / 100) % 100 - 1], birthdate[max] % 100, birthdate[max] / 10000);
}