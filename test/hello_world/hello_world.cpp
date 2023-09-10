// 每个程序员都该有一个属于自己的helloworld
#include <stdio.h>
#include <winsock2.h>

int main()
{
    char name[100] = {0};
    printf("hello world\n");
    scanf("%s", name);
    printf("%s\n", name);
    return 0;
}