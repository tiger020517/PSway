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
int		loadPersons(PERSON* list[]);
void	printBirthdays(PERSON* list[], int size, int month);

int	main(void)
{
	PERSON* persons[100];
	int		count = loadPersons(persons);
	
	for (int month = 1; month <= 12; month++)
	{
		printBirthdays(persons, count, month);
	}

	return (0);
}


void	printBirthdays(PERSON* list[], int size, int month)
{
	int	idx;
	int	cnt;

	printf("[%s] ", monthnames[month - 1]);
	idx = -1;
	cnt	= 0;
	while (++idx < size)
	{
		if (list[idx]->month == month)
		{
			printf("%s(%d) ", list[idx]->name, list[idx]->day);
			cnt++;
		}
	}
	printf("- %d\n", cnt);
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

void	setPerson(PERSON* p)
{
	p->year = p->birthdate / 10000;
	p->age = 2025 - (p->year);
	p->month = (p->birthdate / 100) % 100;
	p->day = p->birthdate % 100;
}
