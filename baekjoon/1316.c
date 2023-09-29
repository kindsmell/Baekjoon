#include <stdio.h>
#include <string.h>

int check_r(char* arr, char word, int i)
{
	int flag = 0;
	for (int j = 0; j < i; j++)
	{
		if (arr[j] == word)
		{
			flag = 1;
			break;
		}
	}
	return (flag);
}

int main_1316()
{
	int n, cnt = 0, flag = 0;
	char arr[101];

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", arr);

		if (strlen(arr) == 1)
			cnt++;
		else
		{
			flag = 0;
			for (int j = 1; j < strlen(arr); j++)
			{
				if (arr[j] != arr[j - 1])
				{
					if (check_r(arr, arr[j], j) == 1)
					{
						flag = 1;
						break;
					}
				}
			}
			if (flag == 0)
				cnt++;
		}
	}
	printf("%d", cnt);
}