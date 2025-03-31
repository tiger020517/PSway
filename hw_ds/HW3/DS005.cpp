#include <iostream>
#include <stdio.h>
using namespace std;

int	main(void)
{
	int		idx;
	char	alphs[27] = {0};
	char	in[51];

	cin.getline(in, 50);
	in[50] = 0;				//Null terminate
	idx = 0;
	while (idx < 51 && in[idx])
	{
		if (in[idx] >= 'a' && in[idx] <= 'z')
			alphs[in[idx] - 'a']++;
		else if (in[idx] >= 'A' && in[idx] <= 'Z')
			alphs[in[idx] - 'A']++;
		else if (in[idx] == ' ')
			alphs[26]++;
		idx++;
	}
	if (alphs[26])
		printf("blanks : %d\n", alphs[26]);
		
	idx = -1;
	while (++idx < 26)
	{
		if (alphs[idx])
			printf("%c : %d\n", idx + 'A', alphs[idx]);
	}
}