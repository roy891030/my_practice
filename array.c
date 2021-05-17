#include <stdio.h>
void test1(void);
void test2(void);
int main()
{
    test1();
    test2();
}
void test1(void)
{
    printf("----------\n");
    printf("test1\n");
    int arr[10] = {0}; //初始化 將所有元素變成零
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void test2(void)
{
    printf("----------\n");
    printf("test2\n");
    double array[5] = {1.1, 2.1, 3.1, 4.5, 6.5};
    printf("一個元素大小 : %ld \n", sizeof(array[0]));
    printf("整個陣列大小 : %ld \n", sizeof(array));
    printf("陣列共幾個元素 : %ld\n", sizeof(array) / sizeof(array[0]));
}