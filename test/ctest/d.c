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
int		loadPersons(PERSON* list[]);
PERSON*	oldestPerson(PERSON* list[], int size);
PERSON*	youngestPerson(PERSON* list[], int size);

int	main(void)
{
	PERSON* persons[100];
	int		count = loadPersons(persons);
	printf("Oldest: ");
	printPerson(oldestPerson(persons, count));
	printf("Youngest: ");
	printPerson(youngestPerson(persons, count));

	return (0);
}


int		loadPersons(PERSON* list[])
{
	int	cnt;
	int	idx;

	scanf("%d", &cnt);
	idx = -1;
	while (++idx < cnt)
	{
		list[idx] = (PERSON*)malloc(sizeof(PERSON));
		scanf("%s %d", list[idx]->name, &(list[idx]->birthdate));
		setPerson(list[idx]);	
	}
	return (cnt);
}

PERSON*	oldestPerson(PERSON* list[], int size)
{
	int	idx;
	int	max;

	idx = -1;
	max = 0;
	while (++idx < size)
	{
		if (list[idx]->birthdate < list[max]->birthdate)
			max = idx;
	}
	return (list[max]);
}

PERSON*	youngestPerson(PERSON* list[], int size)
{
	int	idx;
	int	max;

	idx = -1;
	max = 0;
	while (++idx < size)
	{
		if (list[idx]->birthdate > list[max]->birthdate)
			max = idx;
	}
	return (list[max]);

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
	printf("%s - %d (%s %d, %d)\n", p->name, p->age, monthnames[p->month - 1], p->day, p->year);
}
