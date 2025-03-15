#include <stdio.h>

void printMovie(MOVIE* p);
int indexGenre(char* name);

typedef struct st_movie{
	char title[100];
	int year, genre, playtime, viewers;
	char description[255];
} MOVIE;

int main() {
	MOVIE* list[10];
	int count;
	char title[100], desc[255], genre[50];
	int year, playtime, viewers;
	
	scanf("%d", &count);
	for(int i=0; i<count; i++){
		getchar();
		fgets(title, 100, stdin);
		fgets(desc, 255, stdin);
		scanf("%d %s %d %d", &year, genre, &playtime, &viewers);
		list[i] = (MOVIE*) malloc(sizeof(MOVIE));

	// Your code here!
	
	return 0;
}
