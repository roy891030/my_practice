#include <stdio.h>
void push(int, int *);
int pop(int *);
void display(int *);
int Top = 0;
int main()
{
    int array[10] = {0}; //宣告創造stack
    int n = 0;
    int num = 0;
    do
    {
        printf("你想要那個操作 1:push 2:pop 3:leave ? ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("你想要push進什麼數字?");
            scanf("%d", &num);
            push(num, array);
            display(array);
            break;
        case 2:
            pop(array);
            display(array);
            break;
        case 3:
            display(array);
            break;
        }
    } while (n != 3);
}
void push(int x, int *array)
{
    if (Top == 10)
    {
        printf("Stack is full");
    }
    else
    {

        array[Top] = x;
        Top += 1;
    }
}
int pop(int *array)
{
    int num;
    if (Top == 0)
    {
        printf("Stack is empty");
        return 0;
    }
    else
    {
        num = array[Top];
        array[Top-1] = 0;
        Top -= 1;
        return num;
    }
}

void display(int *arr)
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
}