#include <stdio.h>

int is_finish(int ary[9][9], int k, int l)
{
	for (k = 0; k < 9; k++)
	{
		for (l = 0; l < 5; l++)
		{
			if (ary[k][l] != 0 && ary[k][l] == ary[k][l + 1] && ary[k][l + 2] == ary[k][l + 3] 
				&& ary[k][l + 4] == ary[k][l] && ary[k][l + 1] == ary[k][l + 2])
			{
				if (ary[k][l] == 1)
					return 1;
				else
					return 2;
			}
		}
	}

	for (k = 0; k < 5; k++)
	{
		for (l = 0; l < 9; l++)
		{
			if (ary[k][l] != 0 && ary[k][l] == ary[k + 1][l] && ary[k + 2][l] == ary[k + 3][l]
				&& ary[k + 4][l] == ary[k][l] && ary[k + 1][l] == ary[k + 2][l])
			{
				if (ary[k][l] == 1)
					return 1;
				else
					return 2;
			}
		} 
	}

	for (k = 0; k < 5; k++)
	{
		for (l = 0; l < 5; l++)
		{
			if (ary[k][l] != 0 && ary[k][l] == ary[k + 1][l + 1] && ary[k + 2][l + 2] == ary[k + 3][l + 3]
				&& ary[k + 4][l + 4] == ary[k][l] && ary[k + 1][l + 1] == ary[k + 2][l + 2])
			{
				if (ary[k][l] == 1)
					return 1;
				else
					return 2;
			}
		}
	}

	for (k = 4; k < 9; k++)
	{
		for (l = 0; l < 5; l++)
		{
			if (ary[k][l] != 0 && ary[k][l] == ary[k - 1][l + 1] && ary[k - 2][l + 2] == ary[k - 3][l + 3]
					&& ary[k - 4][l + 4] == ary[k][l] && ary[k - 1][l + 1] == ary[k - 2][l + 2])
			{
				if (ary[k][l] == 1)
					return 1;
				else
					return 2;
			}
		}
	}

	return 0;
	
}


int main()
{
	int i, j, p, coo, x, y, jud1, jud2;
	int array[9][9];
	int turn = 1;

	printf("〜五目並べ〜\n\n座標を入力するときはx座標とy座標を続けて入力してください。\n	ex)x座標：2,y座標：3 → 座標：23\n\n");

	printf(" 0   1 2 3 4 5 6 7 8 9\n\n");

	for (i = 0; i < 9; i++)
	{
		printf(" %d  ", i + 1);

		for (j = 0; j < 9; j++)
		{
			array[i][j] = 0;

			printf(" %d", array[i][j]);
		}
	
		printf("\n");
	}

	printf("\n");

	while (is_finish(array, jud1, jud2) == 0)
	{
		turn++;

		p = turn % 2 + 1;

		printf("プレイヤー%dは座標を入力してください。\n座標：", p);
		scanf("%d", &coo);
			
		x = coo / 10 - 1;
		y = coo % 10 - 1;

		while (coo < 11 || coo > 99)
		{
			printf("条件の範囲内で入力してください。\n座標：");
			scanf("%d", &coo);

			x = coo / 10 - 1;
			y = coo % 10 - 1;
		}

		while (array[y][x] != 0)
		{
			printf("そこは既に選ばれています。\n座標：");
			scanf("%d", &coo);
		
			x = coo / 10 - 1;
			y = coo % 10 - 1;
		}

		printf(" 0   1 2 3 4 5 6 7 8 9\n\n");

		for (i = 0; i < 9; i++)
		{
			printf(" %d  ", i + 1);

			for (j = 0; j < 9; j++)
			{
				if (x == j && y == i)
					array[i][j] = p;

				printf(" %d", array[i][j]);	
			}

			printf("\n");
		}

		printf("\n");

	}

	printf("終了。プレイヤー%dの勝ちです。\n", is_finish(array, jud1, jud2));


	return 0;
}
