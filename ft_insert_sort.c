
#include "libft.h"

void ft_insert_int_sort(int *nums, int len)
{
	int index;
	int j;
	int tempo;

	index = 1;
	while (index < len)
	{
			j = index;
			while(j > 0 && nums[j - 1] > nums[j])
			{
				tempo = nums[j - 1];
				nums[j - 1] = nums[j];
				nums[j] = tempo;
				j--;
			}
			index++;
	}
}

void	ft_insert_chr_sort(char *str)
{
	char tempo;
	int index;
	int j;

	index = 1;
	while (str[index])
	{
		j = index;
		while (j > 0 && str[j - 1] > str[j])
		{
			tempo = str[j];
			str[j] = str[j - 1];
			str[j - 1] = tempo;
			j--;
		}
		index++;
	}
}
