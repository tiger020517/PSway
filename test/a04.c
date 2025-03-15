#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int height[10], weight[10]; // 10명의 신장(cm), 체중(kg)
	float bmi[10]; // 10명의 비만도 수치
	int count; // 비만인 사람의 숫자
	int	idx;

	idx = -1;
	while (++idx < 10)
		scanf("%d %d", &height[idx], &weight[idx]);
	idx = -1;
	while (++idx < 10)
		bmi[idx] = weight[idx]*10000/(float)(height[idx]*height[idx]);
	idx = -1;
	count = 0;
	while (++idx < 10)
	{
		if (bmi[idx] >= 25.0)
		{
			printf("%d ", idx + 1);
			count++;
		}
	}
		printf("\n%d", count);
}