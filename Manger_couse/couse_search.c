#include "head.h"
#include "manger.h"
#include "log_manger.h"
#include "couse_manger.h"

void couse_search()
{
    int i;
    FILE *fp;
    char num[15];

    fp=fopen("cou.txt","r");
    fread(cou_list,sizeof(cou),100,fp);
    fclose(fp);

    printf("请输入需要查询的课程编号：\n");
    scanf("%s",num);
    getchar();
    for(i=0;cou_list[i].time||cou_list[i].score||cou_list[i].sum||cou_list[i].max;i++)
    {
        if(strcmp(num,cou_list[i].number)==0)
            break;
    }

    if((cou_list[i].time||cou_list[i].score||cou_list[i].sum||cou_list[i].max)==0)
    {
        printf("没有该课程！\n");
    }
    else
    {
        printf("\n");
        printf("课程编号 课程名称 课程性质 授课学时 课程学分 已选人数 人数上限\n");
        printf("%-8s %-8s %-8s %-8d %-8d %-8d %-8d \n",cou_list[i].number,cou_list[i].name,cou_list[i].explain,cou_list[i].time,cou_list[i].score,cou_list[i].sum,cou_list[i].max);
    }
}
