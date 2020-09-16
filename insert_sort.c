#include <stdio.h>
int main(void)
{
    int i, j, temp;
    int array[10];
    for (int a = 0; a < 10; a++)
    {
        scanf("%d", &array[a]);
    }
    for (i = 0; i < 9; i++)
    {
        j = i; // i값을 j값로 대입
        while (j >= 0 && array[j] > array[j + 1])
        {
            temp = array[j];
            array[j] = array[j + 1];
            array[j + 1] = temp;
            j--; //j 1씩 감소 후 while 반복, 배열값과 다음의 배열값 비교후 배열 다음값[j + 1]이 원래값[j]보다 클 경우 false이기 때문에 while 종료되고 다음 i를 수행한다.
        }
    }
    printf("\n======Sort Result======\n\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d", array[i]); //정렬 후 출력
    }
    return 0;
}