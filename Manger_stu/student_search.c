#include "head.h"
#include "manger.h"
#include "log_manger.h"
#include "stu_manger.h"

void student_search()
{
    int i,j,n,sum;
    FILE *fp,*fp1;
    char num[15];

    fp=fopen("stu.txt","r");
    fread(stu_list,sizeof(stu),100,fp);
    fclose(fp);

    printf("请输入需要查找的学号：\n");
    scanf("%s",num);
    getchar();
    for(i=0;stu_list[i+1].number[0];i++)
    {
        if(strcmp(num,stu_list[i].number)==0)
            break;
    }
    j=i;
    if(stu_list[i+1].number[0]==0)
    {
        printf("没有该学生!\n");
    }
    else
    {
        fp1=fopen("cou.txt","r");
        printf("学生学号\t学生姓名\t");
        fread(cou_list,sizeof(cou),100,fp1);
        i=0;
        while(cou_list[i].time||cou_list[i].score||cou_list[i].sum||cou_list[i].max)
        {
            printf("%s\t\t",cou_list[i].name);
            i++;
        }
        printf("总学分");
        printf("\n");
        n=0;
        printf("%s\t\t%s\t\t",stu_list[j].number,stu_list[j].name);
        sum=0;
        for(n=0;n<i;n++)
        {
            if(stu_list[j].status[n]==1)
                {
                    printf("已选\t\t");
                    sum+=cou_list[n].score;
                }
            else
                printf("未选\t\t");
        }
        printf("%d",sum);
        printf("\n");
    }

    fclose(fp);
}
