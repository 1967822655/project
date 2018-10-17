#include "head.h"
#include "manger.h"
#include "log_manger.h"
#include "couse_manger.h"

void couse_print()
{
    int n,i=0;
    FILE *fp;
    fp=fopen("cou.txt","r");
    printf("\n");
    printf("课程编号 课程名称 课程性质 授课学时 课程学分 已选人数 人数上限\n");
    n=fread(cou_list,sizeof(cou),100,fp);
    while(cou_list[i].time||cou_list[i].score||cou_list[i].sum||cou_list[i].max)
    {
        printf("%-8s %-8s %-8s %-8d %-8d %-8d %-8d \n",cou_list[i].number,cou_list[i].name,cou_list[i].explain,cou_list[i].time,cou_list[i].score,cou_list[i].sum,cou_list[i].max);
        i++;
    }
    printf("\n*****共%d门课程*****\n",i);
    fclose(fp);
}
