#include <stdio.h>
int main(void)
{
    int i, j, temp;
    int array[10];
    for (int a = 0; a < 10; a++)
    {
        scanf("%d", &array[a]);
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 9 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            } // 앞에 값이 바로 뒤의 값보다 크면 앞의 것과 바로 뒤의 것 값 위치 바꾸기
        }
    }
    printf("\n======Sort Result======\n\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d", array[i]); //정렬 후 출력
    }
    return 0;
}