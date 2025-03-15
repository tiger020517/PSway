#include <stdio.h>

int	main(void)
{
	int height, weight; // 신장(cm), 체중(kg) 
	float bmi; // 비만도 수치 

	scanf("%d %d", &height, &weight);
	bmi = weight*10000/(float)(height*height);
	printf("%.1f", bmi);
}