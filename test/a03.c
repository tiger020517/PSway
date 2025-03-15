#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int		cnt;
	int		*ls;
	float	*bmis;
	int		idx;
	int		tmp;

	scanf("%d", &cnt);
	ls = (int *)malloc(cnt * 2);
	bmis = (float *)malloc(cnt);
	idx = -1;
	while (++idx < cnt)
		scanf("%d %d", &ls[idx], &ls[cnt + idx]);
	idx = -1;
	while (++idx < cnt)
		bmis[idx] = ls[cnt+idx]*10000/(float)(ls[idx]*ls[idx]);
	idx = -1;
	tmp = 0;
	while (++idx < cnt)
	{
		if (bmis[idx] >= 25.0)
			tmp++;
	}
	printf("%d", tmp);
}