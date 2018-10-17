#include "head.h"
#include "manger.h"
#include "log_manger.h"
#include "couse_manger.h"
#include "stu_manger.h"

void introduction(int menu)
{
    printf("\n");
    if(menu==1)
    {
        printf(" * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  \n");
        printf("|                         课程管理                         |\n");
        printf("|                                                          |\n");
        printf("|  1 新增课程                                              |\n");
        printf("|  2 删除课程                                              |\n");
        printf("|  3 查看某课程详细信息（学分、课时、所选学生列表等）      |\n");
        printf("|  4 修改某课程的信息（学分、课时、所学学生列表等）        |\n");
        printf("|  5 查看表格信息                                          |\n");
        printf("|  0 退出                                                  |\n");
        printf(" * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  \n\n");
    }
    else
    {
        printf(" * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  \n");
        printf("|                         学生管理                         |\n");
        printf("|                                                          |\n");
        printf("|  1 新增学生信息                                          |\n");
        printf("|  2 删除学生信息                                          |\n");
        printf("|  3 按学号、姓名查看学生详细信息                          |\n");
        printf("|  4 修改学生信息                                          |\n");
        printf("|  5 查看表格信息                                          |\n");
        printf("|  0 退出                                                  |\n");
        printf(" * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  \n\n");
    }

}

void function_cou(int child_menu)
{
    switch(child_menu)
    {
    case 1:
        couse_add();break;
    case 2:
        couse_delete();break;
    case 3:
        couse_search();break;
    case 4:
        couse_modify();break;
    case 5:
        couse_print();

    }
}

void function_stu(int child_menu)
{
    switch(child_menu)
    {
    case 1:
        student_add();break;
    case 2:
        student_delete();break;
    case 3:
        student_search();break;
    case 4:
        student_modify();break;
    case 5:
        student_print();
    }
}

void enter(int menu)
{
    int child_menu=1;
    if(menu==1)
        while(child_menu)
        {
            introduction(menu);
            printf("请输入选项：\n-->");
            scanf("%d",&child_menu);
            while(child_menu<0||child_menu>5)
            {
                printf("输入错误，请重新输入：\n-->");
                scanf("%d",&child_menu);
            }
            function_cou(child_menu);
        }
    else if(menu==2)
        while(child_menu)
        {
            introduction(menu);
            printf("请输入选项：\n-->");
            scanf("%d",&child_menu);
            while(child_menu<0||child_menu>5)
            {
                printf("输入错误，请重新输入：\n-->");
                scanf("%d",&child_menu);
            }
            function_stu(child_menu);
        }
}
