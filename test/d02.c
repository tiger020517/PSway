#include <stdio.h>
#include <stdlib.h>

typedef struct st_movie{
	char title[100];
	int year, genre, playtime, viewers;
	char description[255];
} MOVIE;

int loadRecords(MOVIE* list[]);
void printMovie(MOVIE* p);
void printReport(MOVIE* list[], int size);
int indexGenre(char* name);
void printGenreCount(MOVIE* list[], int size);
int maxViewers(MOVIE* list[], int size);
int maxPlaytime(MOVIE* list[], int size);

int main() {
	MOVIE* mlist[50];
	int count;

	count = loadRecords(mlist);	
	for(int i=0; i<count; i++){
		printf("%d) ", i+1);
		printMovie(mlist[i]);
	}
	printReport(mlist, count);
	return 0;
}

int loadRecords(MOVIE* list[])
{
    //char    etc[33];     //4(년도) + 11(인구수 천억 이하일 때) + 9 (장르 길이) + 5(세상에서 제일 긴 영화 43200분) + 3공백 + 널문자
    char	genre[10];
	int     count;
    int     idx;

    scanf("%d", &count);
    idx = -1;
    while (++idx < count)
    {
        fgets(list[idx]->title, sizeof(list[idx]->title), stdin);
        fgets(list[idx]->description, sizeof(list[idx]->title), stdin);
        scanf("%d", &list[idx]->year);
		scanf("%s", genre);
		list[idx]->genre = indexGenre(genre);
		scanf("%d", &list[idx]->playtime);
		scanf("%d", &list[idx]->viewers);
    }
	printf("%d records loaded.", count);
	return (count);
}

int indexGenre(char* name)
{
	int	idx;

	idx = 0;
	if (name[0] == 'S')
		return (0);
	else if (name[0] == 'T')
		return (1);
	else if (name[0] == 'A' && name[1] == 'c')
		return (2);
	else if (name[0] == 'R')
		return (3);
	else if (name[0] == 'M')
		return (4);
	else if (name[0] == 'D')
		return (5);
	else if (name[0] == 'A' && name[1] == 'n')
		return (6);
	else if (name[0] == 'W')
		return (7);
	else
		return (404);
}

void printMovie(MOVIE* p)
{
	const char* genre_name[] = {
		"Sci-Fi",
		"Thriller",
		"Action",
		"Romance",
		"Musical",
		"Drama",
		"Animation",
		"War"
	};
	printf("%s [%d, %s, %d min, %d viewers]\n", p->title, p->year, genre_name[p->genre], p->playtime, p->viewers);
}

void printReport(MOVIE* list[], int size)
{
	int	tmp;

	printf("1. Number of movies by genre\n");
	printGenreCount(list, size);
	printf("2. Longest\n");
	tmp = maxPlaytime(list, size);
	printMovie(list[tmp]);
	printf("%s\n", list[tmp]->description);
	printf("3. Most popular\n");
	tmp = maxViewers(list, size);
	printMovie(list[tmp]);
	printf("%s\n", list[tmp]->description);
}

void printGenreCount(MOVIE* list[], int size)
{
	const char* genre_name[] = {
		"Sci-Fi",
		"Thriller",
		"Action",
		"Romance",
		"Musical",
		"Drama",
		"Animation",
		"War"
	};
	int	idx;
	int	genres[8] = {0};

	idx = -1;
	while (++idx < size)
		genres[list[idx]->genre]++;
	idx = -1;
	while (++idx < 8)
		printf("[%d] %s\t%d movies\n", idx, genre_name[idx], genres[idx]);

}

int maxPlaytime(MOVIE* list[], int size)
{
	int	idx;
	int	longest;

	idx = -1;
	longest = list[0]->playtime;
	while (++idx < size)
	{
		if (longest < list[idx]->playtime)
			longest = list[idx]->playtime;
	}
	idx = -1;
	while (++idx < size)
	{
		if (list[idx]->playtime == longest)
			return (idx);
	}
	return (404);
}

int maxViewers(MOVIE* list[], int size)
{
	int	idx;
	int	pop;

	idx = -1;
	pop = list[0]->viewers;
	while (++idx < size)
	{
		if (pop < list[idx]->viewers)
			pop = list[idx]->viewers;
	}
	idx = -1;
	while (++idx < size)
	{
		if (list[idx]->viewers == pop)
			return(idx);
	}
	return (404);
}