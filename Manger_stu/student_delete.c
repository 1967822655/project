#include "head.h"
#include "manger.h"
#include "log_manger.h"
#include "stu_manger.h"

void student_delete()
{
    int i,j,n,sum,m;
    FILE *fp,*fp1;
    char num[15];

    fp=fopen("stu.txt","r");
    fread(stu_list,sizeof(stu),100,fp);
    fclose(fp);

    printf("请输入需要删除的学号：\n");
    scanf("%s",num);
    getchar();
    i=0;
    while(stu_list[i].number[0])
    {
	if(strcmp(num,stu_list[i].number)==0)
	    break;
        i++;
    }
    log_manger_stu(2,stu_list[i]);
    if(!stu_list[i].number[0])
    {
        printf("没有该学生!\n");
    }
    else
    {
	n=i;
        fp1=fopen("cou.txt","r");
        fread(cou_list,sizeof(cou),100,fp1);
        fclose(fp1);

        for(j=0;cou_list[j].time||cou_list[j].score||cou_list[j].sum||cou_list[j].max;j++)
        {
            if(stu_list[i].status[j]==1)
                cou_list[j].sum--;
        }
        while(stu_list[i].number[0])
        {
            stu_list[i]=stu_list[i+1];
            i++;
        }

        fp=fopen("stu.txt","w");
        fwrite(stu_list,sizeof(stu),i-1,fp);
        fp1=fopen("cou.txt","w");
        fwrite(cou_list,sizeof(cou),j,fp1);
        fclose(fp);
        fclose(fp1);
    }

}

