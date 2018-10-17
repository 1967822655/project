#include "head.h"
#include "manger.h"
#include "log_manger.h"
#include "couse_manger.h"

void couse_modify()
{
    int i;
    FILE *fp;
    char num[15];

    fp=fopen("cou.txt","r");
    fread(cou_list,sizeof(cou),100,fp);
    fclose(fp);

    printf("请输入需要修改的课程编号：\n");
    scanf("%s",num);
    getchar();
    for(i=0;cou_list[i].time||cou_list[i].score||cou_list[i].sum||cou_list[i].max;i++)
    {
        if(strcmp(num,cou_list[i].number)==0)
            break;
    }
    log_manger_cou(4,cou_list[i]);
    if((cou_list[i].time||cou_list[i].score||cou_list[i].sum||cou_list[i].max)==0)
    {
        printf("没有该课程！\n");
    }
    else
    {
        printf("请输入该课程修改后的信息：\n课程编号、课程名称、课程性质、授课学时、课程学分、人数上限：【空格隔开】\n");
        scanf("%s%s%s%d%d%d",cou_list[i].number,cou_list[i].name,cou_list[i].explain,&cou_list[i].time,&cou_list[i].score,&cou_list[i].max);
        fp=fopen("cou.txt","w");


        printf("课程编号\t课程名称\t课程性质\t授课学时\t课程学分\t已选人数\t人数上限\n");
        i=0;
        while(cou_list[i].time||cou_list[i].score||cou_list[i].sum||cou_list[i].max)
        {
            printf("%s\t\t%s\t\t%s\t\t%d\t\t%d\t\t%d\t\t%d\n",cou_list[i].number,cou_list[i].name,cou_list[i].explain,cou_list[i].time,cou_list[i].score,cou_list[i].sum,cou_list[i].max);
            i++;
        }
        fwrite(cou_list,sizeof(cou),i,fp);
    	fclose(fp);
    }
}
