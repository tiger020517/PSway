/*
Programming Studio C003
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int findRoom(int persons[5]); // 5개의 호실 중 빈 베드가 있는 방을 찾아낸다. (리턴값 1~5)
void printReport(char mn[10][20], int mr[10], int mc, char wn[10][20], int wr[10], int wc); // 배정 결과를 출력한다.

int main(){
	char mnames[10][20]; // 남학생명단(최대 10명)
	int mroom[10];		// 남학생명단별 호실 배정 목록
	char wnames[10][20]; // 여학생명단(최대 10명)
	int wroom[10];		// 여학생명단별 호실 배정 목록
	int person[2][5]={0};   // 2개 층별 5개 호실의 배정 인원 수 
	int mcount=0, wcount=0; // 인원 합계 (남, 여)
	int menu;

	srand(time(0));
	printf("===========================================\n");
	printf("생활관 호실 배정 프로그램\n");
	printf("===========================================\n");
	while(1){
		printf("메뉴 : 1.남학생 등록 2.여학생 등록 0.종료 > ");
		scanf("%d", &menu);
		if(menu==0) break;
		else if(menu==1) {
			if(mcount>=10) {
				printf("정원 초과입니다. 등록불가!\n");
				continue;
			}
			printf("학생 이름은? > ");
			scanf("%s", mnames[mcount]);
			int roomno = findRoom(person[0]);
			mroom[mcount] = 100+roomno;
			printf("%s 학생 %d호실 배정되었습니다.\n", mnames[mcount], mroom[mcount]);
			mcount++;
		}
		else if(menu==2) {
			if(wcount>=10) {
				printf("정원 초과입니다. 등록불가!\n");
				continue;
			}
			printf("학생 이름은? > ");
			scanf("%s", wnames[wcount]);
			int roomno = findRoom(person[1]);
			wroom[wcount] = 200+roomno;
			printf("%s 학생 %d호실 배정되었습니다.\n", wnames[wcount], wroom[wcount]);
			wcount++;
		}
	}

	printf("===========================================\n");
	printf("생활관 호실 배정 결과는 다음과 같습니다.\n");
	printf("===========================================\n");
	printReport(mnames, mroom, mcount, wnames, wroom, wcount);

	return 0;
}

int findRoom(int persons[5]){
// 이 곳에 생각 정리와 코드 구현
int roomn;

srand(time(NULL));
    while (1)
    {
        roomn = rand() % 5;
        if (persons[roomn] < 2)
        {
            persons[roomn] += 1;
            return (roomn + 1);
        }
    }
}   

void printReport(char mn[10][20], int mr[10], int mc, char wn[10][20], int wr[10], int wc){
// 이 곳에 생각 정리와 코드 구현
    int	idx;
	int	sub_idx;

	printf("===========================================\n");
	printf("생활관 호실 배정 결과는 다음과 같습니다.\n");
	printf("===========================================\n");
	printf("남학생 명단 (%d명)\n", mc);
	idx = -1;
	while (++idx < mc)
		printf("%d. %s [%d호]\n", idx + 1, mn[idx], mr[idx]);
	printf("\n");
	printf("여학생 명단 (%d명)\n", wc);
	idx = -1;
	while (++idx < wc)
		printf("%d. %s [%d호]\n", idx + 1, wn[idx], wr[idx]);
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
				if (mr[sub_idx] == idx + 101)
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
				if (wr[sub_idx] == idx + 196)
					printf("%s ", wn[sub_idx]);
			}
			printf("\n");
		}
	}
}
