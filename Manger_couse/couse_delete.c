#include "head.h"
#include "manger.h"
#include "log_manger.h"
#include "couse_manger.h"

void couse_delete()
{
    int i,j,n,m;
    FILE *fp;
    char num[15];

    fp=fopen("cou.txt","r");
    fread(cou_list,sizeof(cou),100,fp);
    fclose(fp);

    printf("请输入需要删除的课程编号：\n");
    scanf("%s",num);
    getchar();
    for(i=0;cou_list[i].time||cou_list[i].score||cou_list[i].sum||cou_list[i].max;i++)
    {
        if(strcmp(num,cou_list[i].number)==0)
            break;
    }
    log_manger_cou(2,cou_list[i]);
    if((cou_list[i].time||cou_list[i].score||cou_list[i].sum||cou_list[i].max)==0)
    {
        printf("没有该课程！\n");
    }
    else
    {
        j=i;
        while(cou_list[i].time||cou_list[i].score||cou_list[i].sum||cou_list[i].max)
        {
            cou_list[i]=cou_list[i+1];
            i++;
        }
        m=i;

        fp=fopen("cou.txt","w");
        fwrite(cou_list,sizeof(cou),i-1,fp);
        fclose(fp);

        fp=fopen("stu.txt","r");
        fread(stu_list,sizeof(stu),100,fp);
        fclose(fp);
        fp=fopen("stu.txt","w");
        i=0;
        while(stu_list[i].number[0])
        {
            for(n=j;n<m;n++)
                stu_list[i].status[n]=stu_list[i].status[n+1];
            i++;
        }
	fwrite(stu_list,sizeof(stu),i,fp);
        fclose(fp);

    }


}
