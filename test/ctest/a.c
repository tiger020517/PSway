/*
* [Full Name]: 김준형
* [Student ID]: 22200182
* [Honor Code Pledge]: 나 김준형은 하나님과 사람 앞에서 정직하고 성실하게 테스트를 수행하겠습니다.
*/

#include <stdio.h>

int	main(void)
{
	const char	*monthnames[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
	char		name[20];
	int			birthdate;
	int			age;
	int			in;
	int			year;
	int			mon;

	scanf("%s", name);
	scanf("%d", &in);
	year = in / 10000;
	age = 2025 - year;
	mon = (in / 100) % 100;
	printf("%s - %d (%s %d, %d)", name, age, monthnames[mon - 1], in % 100, year);
}