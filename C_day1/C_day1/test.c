#include <stdio.h>



//��ӡ100~200֮�������
int main()
{
	int i = 100;
	for (; i < 201; ++i)
	{
		if (1 == i % 2)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	getchar();
	return 0;
}


/*
//��ӡ�˷��ھ���

int main()
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= 9; ++i)
	{
		for (j = 1; j <= i; ++j)
		{
			printf("%d*%d=%-3d ", i, j, i*j);
		}
		printf("\n");
	}
	getchar();
	return 0;
}

�ж�1000--2000��֮�������
int main()
{
	int i = 0;
	for (i = 1000; i <= 2000; ++i)
	{
		if ((0 == i % 4 && 0 != i % 100) || (0 == i % 400))
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	getchar();
	return 0;
	}*/