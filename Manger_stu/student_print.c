#include "head.h"
#include "manger.h"
#include "log_manger.h"
#include "stu_manger.h"

void student_print()
{
    int n,i,j,sum;
    FILE *fp,*fp1;
    fp=fopen("stu.txt","r");
    fp1=fopen("cou.txt","r");
    printf("学生学号 学生姓名 ");
    fread(stu_list,sizeof(stu),100,fp);
    fread(cou_list,sizeof(cou),100,fp1);
    i=0;
    while(cou_list[i].time||cou_list[i].score||cou_list[i].sum||cou_list[i].max)
    {
        printf("%-8s ",cou_list[i].name);
        i++;
    }

    printf("总学分");
    printf("\n");


    j=0;
    n=0;
    while(stu_list[j].number[0])
    {
        printf("%-8s %-8s ",stu_list[j].number,stu_list[j].name);
        sum=0;
        for(n=0;n<i;n++)
        {
            if(stu_list[j].status[n]==1)
                {
                    printf("已选     ");
                    sum+=cou_list[n].score;
                }
            else
                printf("未选     ");
        }
        printf("%-8d",sum);
        printf("\n");
        j++;
    }


    printf("\n*****共%d个学生*****\n",j);
    fclose(fp);
    fclose(fp1);
}
