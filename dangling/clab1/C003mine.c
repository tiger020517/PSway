#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int     findRoom(int persons[5]);
void    printReport(char mn[10][20], int mr[10], int mc, char wn[10][20], int wr[10], int wc);

int main(void)
{
	char	mn[10][20] = {0}, wn[10][20] = {0};
	int		mr[10] = {0}, wr[10] = {0}, mTO[5] = {0}, wTO[5]= {0};
	int		mc = 0, wc = 0;
	int		select;
	

	printf("===========================================\n");
	printf("생활관 호실 배정 프로그램\n");
	printf("===========================================\n");
	while (1)
	{
		printf("메뉴 : 1.남학생 등록 2.여학생 등록 0.종료 > ");
		scanf("%d", &select);
		if (select == 1)
		{
			if (mc > 9)
				printf("T/O가 없습니다.\n");
			else
			{
				printf("학생 이름은? > ");
				scanf("%s", mn[mc]);
				mr[mc] = findRoom(mTO);
				mTO[mr[mc]]++;
				printf("%s 학생 %d호실에 배정되었습니다.\n", mn[mc], mr[mc] + 101);
				mc++;
			}
		}
		else if (select == 2)
		{
			if (wc > 9)
				printf("T/O가 없습니다.\n");
			else
			{
				printf("학생 이름은? > ");
				scanf("%s", wn[wc]);
				wr[wc] = findRoom(wTO);
				wTO[wr[wc]]++;
				printf("%s 학생 %d호실에 배정되었습니다.\n", wn[wc], wr[wc] + 201);
				wc++;
			}
		}
		else if (select == 0)
			return (printReport(mn, mr, mc, wn, wr, wc), 0);
		else
			printf("제대로 선택해라 애송이\n");
	}
}

int     findRoom(int persons[5])
{
    int roomn;

    srand(time(NULL));
	while (1)
	{
 		roomn = rand() % 5;
		if (persons[roomn] < 2)
			return (roomn);
	}
}
void    printReport(char mn[10][20], int mr[10], int mc, char wn[10][20], int wr[10], int wc)
{
	int	idx;
	int	sub_idx;

	printf("===========================================\n");
	printf("생활관 호실 배정 결과는 다음과 같습니다.\n");
	printf("===========================================\n");
	printf("남학생 명단 (%d명)\n", mc);
	idx = -1;
	while (++idx < mc)
		printf("%d. %s [%d호]\n", idx + 1, mn[idx], mr[idx] + 101);
	printf("\n");
	printf("여학생 명단 (%d명)\n", wc);
	idx = -1;
	while (++idx < wc)
		printf("%d. %s [%d호]\n", idx + 1, wn[idx], wr[idx] + 201);
	printf("\n");
	printf("호실별 배정 명단\n");
	idx = -1;
	while (++idx < 10)
	{
		if (idx < 5)
		{
			printf("%d호 : ", idx + 101);
			sub_idx = -1;
			while (++sub_idx < mc)
			{
				if (mr[sub_idx] == idx)
					printf("%s ", mn[sub_idx]);
			}
			printf("\n");
		}
		else
		{
			printf("%d호 : ", idx + 196);
			sub_idx = -1;
			while (++sub_idx < wc)
			{
				if (wr[sub_idx] == idx - 5)
					printf("%s ", wn[sub_idx]);
			}
			printf("\n");
		}
	}
}
