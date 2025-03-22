/*
* [Full Name]: 김준형
* [Student ID]: 22200182
* [Honor Code Pledge]: 나 김준형은 하나님과 사람 앞에서 정직하고 성실하게 테스트를 수행하겠습니다.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct st_person
{
	char	name[20];
	int		birthdate;
	int		age;
	int		year, month, day;
} PERSON;

const char	*monthnames[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };

void	setPerson(PERSON* p);
void	printPerson(PERSON* p);

int	main(void)
{
	PERSON* one;
	one = (PERSON*)malloc(sizeof(PERSON));
	scanf("%s %d", one->name, &(one->birthdate));
	setPerson(one);
	printPerson(one);

	return (0);
}

void	setPerson(PERSON* p)
{
	p->year = p->birthdate / 10000;
	p->age = 2025 - (p->year);
	p->month = (p->birthdate / 100) % 100;
	p->day = p->birthdate % 100;
}
void	printPerson(PERSON* p)
{
	printf("%s - %d (%s %d, %d)", p->name, p->age, monthnames[p->month - 1], p->day, p->year);
}