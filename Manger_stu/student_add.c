#include "head.h"
#include "manger.h"
#include "log_manger.h"
#include "stu_manger.h"

void student_add()
{
    FILE *fp,*fp1;
    stu add;
    int i,j,n;
    fp=fopen("stu.txt","a");
    fp1=fopen("cou.txt","r");
    printf("请输入学生学号、学生姓名【空格隔开】\n");
    scanf("%s%s",add.number,add.name);
    printf("下列课程已选输1，未选输0。【空格隔开】\n");
    fread(cou_list,sizeof(cou),100,fp1);
    fclose(fp1);
    fp1=fopen("cou.txt","w");
    i=0;
    while(cou_list[i].time||cou_list[i].score||cou_list[i].sum||cou_list[i].max)
    {
        printf("%s ",cou_list[i].name);
        i++;
    }
    printf("\n");
    for(j=0;j<i;j++)
    {
        scanf("%d",&add.status[j]);
        if(add.status[j]==1)
        {
            cou_list[j].sum++;
        }
    }
    fwrite(&add,sizeof(stu),1,fp);
    fwrite(cou_list,sizeof(cou),i,fp1);
    fclose(fp);
    fclose(fp1);
    log_manger_stu(1,add);
}

