#include <stdio.h>

void towerOfHanoi(int n, char src, char aux, char des)
{
    if (n == 1)
    {
        printf("Move disk 1 from %c to %c\n", src, des);
        return;
    }
    towerOfHanoi(n - 1, src, des, aux);
    printf("Move disk %d from %c to %c \n", n, src, des);

    towerOfHanoi(n - 1, aux, src, des);
}
int main()
{
    int n;
    printf("Enter the number of disks:");
    scanf("%d", &n);
    towerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}