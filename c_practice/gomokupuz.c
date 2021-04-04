#include <stdio.h>

int player_five_consecutive(int ary[9][9], int i, int j) {
  int div[4][4][2] = {
                       {{0, 1}, {0, 2}, {0, 3}, {0, 4}},
                       {{1, 0}, {2, 0}, {3, 0}, {4, 0}},
                       {{1, 1}, {2, 2}, {3, 3}, {4, 4}},
                       {{1, -1}, {2, -2}, {3, -3}, {4, -4}}
                     };
  int k, l, di, dj;
  int cnt = 0;
  for (k = 0; k < 4; k++) {
    for (l = 0; l < 4; l++) {
      di = i + div[k][l][0];
      dj = j + div[k][l][1];
      if (di <= 8 && dj <= 8 && dj >= 0) {
        if (ary[i][j] == ary[di][dj]) {
          cnt++;
        } else {
          break;
        }
      } else {
        break;
      }
    }
    if (cnt == 4) {
      return ary[i][j];
    }
    cnt = 0;
  }
  return 0;
}

int winner(int ary[9][9]) {
  int i, j, win_player;
  for (i = 0; i < 9; i++) {
    for (j = 0; j < 9; j++) {
      if (ary[i][j] != 0) {
        if ((win_player = player_five_consecutive(ary, i, j)) != 0) {
          printf("win: %i\n", win_player);
          return win_player;
        }
      }
    }
  }
  return 0;
}

void player_scan(int *x, int *y) {
  int num;
  scanf("%d", &num);

  *x = num % 10 - 1;
  *y = num / 10 - 1;
}

void print_board(int ary[9][9]) {
	printf(" 0   1 2 3 4 5 6 7 8 9\n\n");

  int i, j;
	for (i = 0; i < 9; i++) {
		printf(" %d  ", i + 1);

		for (j = 0; j < 9; j++) {
			printf(" %d", ary[i][j]);
		}
	
		printf("\n");
	}

	printf("\n");
}

int main(void) {
	printf("〜五目並べ〜\n\n座標を入力するときはx座標とy座標を続けて入力してください。\n	ex)x座標：2,y座標：3 → 座標：23\n\n");

	int array[9][9] = {};
  print_board(array);

  int p, x, y;
  int win = 0;
  int turn = 0;
  for (; win == 0; turn++) {
		p = turn % 2 + 1;
		printf("プレイヤー%dは座標を入力してください。\n座標：", p);
    player_scan(&x, &y);

		while (x < 0 || x > 8 || y < 0 || y > 8) {
			printf("条件の範囲内で入力してください。\n座標：");
      player_scan(&x, &y);
		}

		while (array[x][y] != 0) {
			printf("そこは既に選ばれています。\n座標：");
      player_scan(&x, &y);
		}

    array[x][y] = p;
    print_board(array);
    win = winner(array);
  }

	printf("終了。プレイヤー%dの勝ちです。\n", win);

	return 0;
}

