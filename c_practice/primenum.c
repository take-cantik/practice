
#include <stdio.h>

int main(void)
{   
    int num, rmd, rmd2;
    int i = 1;
    int j = 1;
    int prm = 2;

    puts("入力した数以下の素数を出します。");
    printf("自然数を入力してください。：");
    scanf("%d", &num);

    if (num <= 0)
    {
        do
        {
            printf("自然数を入力してください。：");
            scanf("%d", &num);
        } 
        while (num <= 0);
    }
    else if (num == 1)
    {
        printf("%dは素数ではありません。\n", num);
    }
    else if (num > 1)
    {    
        do
        {
            i++;
            rmd = num % i; 
        }
        while(rmd != 0);

        if (i == num)
        {
            printf("ちなみに%dは素数です。\n", num);
        }
        else if (i != num)
        {
            printf("ちなみに%dは素数ではありません。\n", num);
        }

        do
        {
            do
            {
                j++;
                rmd2 = prm % j;        

            } while (rmd2 != 0);
        
            if (j == prm)
            {
                printf("%d\n", prm);
            }

            j = 1;

            prm++;
        
        }
        while (prm <= num);
    
    }
    
    puts("以上！");

    return 0;
}