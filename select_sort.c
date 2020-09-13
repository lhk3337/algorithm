#include <stdio.h>
int main(void)
{
    int i, j, min, index, temp;
    int array[10];
    for (int a = 0; a < 10; a++)
    {
        scanf("%d", &array[a]);
    }
    for (i = 0; i < 10; i++)
    {
        min = 9999; //최소값
        for (j = i; j < 10; j++)
        {
            if (min > array[j])
            {
                min = array[j];
                index = j; //작은 값을 찾음.
            }
        }
        //------------------------
        temp = array[i];
        array[i] = array[index];
        array[index] = temp;
        // 위치 바꾸기
    }
    printf("\n======Sort Result======\n\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d", array[i]); //정렬 후 출력
    }
    return 0;
}