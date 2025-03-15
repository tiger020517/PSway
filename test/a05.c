#include <stdio.h>

int bmiLevel(int height, int weight);

int	main(void)
{
	char 	bmi_string[5][20] = {"Underweight","Normal weight","Overweight","Mild obesity","Severe obesity"};
	int		height;
	int		weight;
	int		tmp;

	scanf("%d %d", &height, &weight);
	tmp = bmiLevel(height, weight);
	printf("%s (%d)",bmi_string[tmp], tmp);
}

int bmiLevel(int height, int weight)
{
	float	bmi;
	bmi = weight*10000/(float)(height*height);
	
	if (bmi < 18.5)
		return (0);
	else if (18.5 <= bmi && bmi < 23)
		return (1);
	else if (23 <= bmi && bmi < 25)
		return (2);
	else if (25 <= bmi && bmi < 30)
		return (3);
	else
		return (4);
}