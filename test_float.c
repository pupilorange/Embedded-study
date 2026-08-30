#include <stdio.h>
#include <stdlib.h>

//在管理 C 语言中的内存时，请遵循最佳实践：
//1.记住检查错误（NULL 返回值）以确定内存分配是否成功
//2.防止内存泄漏 - 始终记住释放不再使用的内存，否则程序可能会性能下降，甚至更糟，如果内存耗尽，程序可能会崩溃
//3.释放内存后将指针设置为 NULL，以防止意外继续使用它

int main()
{
    int *ptr;
    ptr = malloc(sizeof(*ptr)); // 为一个整数分配内存 

    // 如果无法分配内存，打印消息并结束 main() 函数 
    if (ptr == NULL) {
        printf("无法分配内存");
        return 1;
    }

    // 设置整数值 
    *ptr = 20;

    // 打印整数值 
    printf("整数值: %d\n", *ptr);

    // 释放分配的内存 
    free(ptr);

    // 将指针设为 NULL 以防止意外使用 
    ptr = NULL; 

    return 0;
} 


