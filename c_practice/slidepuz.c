int main(void)
{   
    int i, q;
    int panel[9] = {1, 2, 3, 4, 5, 6, 7, 8, 0};

    puts("スライダーパズル");

    //シャッフルさせたい
    int shfNum(int ary[], int size)
    {
        for(int j = 0; j < size; j++)
        {
            int k = rand() % size;
            int l = ary[j];
            ary[j] = ary[k];
            ary[k] = l;
        }
    }

    shfNum(panel, 9);

    int swpNum(int m, int n)
    {
        int o = panel[m];
        panel[m] = panel[n];
        panel[n] = o;
    }

    int click(int p)
    {
        if(p <= 5 && panel[p + 3] == 0)
        {
            //下と入れ替え
            swpNum(p, p + 3);
        }
        else if(p >= 3 && panel[p - 3] == 0)
        {
            //上と入れ替え
            swpNum(p, p - 3);
        }
        else if(p + 1 % 3 != 0 && panel[p + 1] == 0)
        {
            //右と入れ替え
            swpNum(p, p + 1);
        }
        else if(p +
        
         1 % 3 != 1 && panel[p - 1] == 0)
        {
            //左と入れ替え
            swpNum(p, p - 1);
        }
        else
        {
            puts("そこは選べません。");
        }
        
    }

while(panel[0] != 1 || panel[1] != 2 || panel[2] != 3 || panel[3] != 4 || panel[4] != 5 || panel[5] != 6 || panel[6] != 7 || panel[7] != 8 || panel[8] != 0)
{   
     //パネルの表示
    for (i = 1; i <= 9; i++)
    {
        printf(" %d ", panel[i - 1]);

        if (i % 3 == 0)
            printf("\n");
    }


    puts("入れ替えるパネルの場所を入力してください。\nなおパネルの場所は左上から1～9とする。");
    printf("パネルの場所：");    scanf("%d", &q);

    click (q - 1);

}

for (i = 1; i <= 9; i++)
{
    printf(" %d ", panel[i - 1]);

    if (i % 3 == 0)
        printf("\n");
}

puts("よくできました！");


    return 0;
}
