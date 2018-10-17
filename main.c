#include "head.h"
#include "manger.h"
#include "stu_manger.h"
#include "couse_manger.h"

int main()
{
    int menu=1,n;
    FILE *fp;

    if((fp=fopen("stu.txt","r")) == NULL)
        fp=fopen("stu.txt","w");
    fclose(fp);
    if((fp=fopen("cou.txt","r")) == NULL)
        fp=fopen("cou.txt","w");
    fclose(fp);
    if((fp=fopen("log.txt","r")) == NULL)
        fp=fopen("log.txt","w");
    fclose(fp);
    while(menu)
    {
        printf("\n");
        printf(" * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  \n");
        printf("|                     学生选课管理系统                     |\n");
        printf("|                                                          |\n");
        printf("|  1 课程管理                                              |\n");
        printf("|  2 学生管理                                              |\n");
        printf("|  0 退出                                                  |\n");
        printf(" * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  \n");
        printf("请输入选项：\n-->");
        scanf("%d",&menu);
        while(menu<0||menu>2)
        {
            printf("输入错误，请重新输入：\n-->");
            scanf("%d",&menu);
        }

        enter(menu);
    }
    printf("\n\n * * * * * * * * * * * * *谢谢使用* * * * * * * * * * * * *\n\n");
    return 0;
}


