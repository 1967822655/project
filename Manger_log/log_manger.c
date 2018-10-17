#include "head.h"
#include "couse_manger.h"
#include "manger.h"
#include "stu_manger.h"
#include "log_manger.h"

int log_manger_stu(int child_menu,stu stu_log)
{
    FILE *fp;
    int i,couse_num;
    fp=fopen("cou.txt","r");
    fread(cou_list,sizeof(cou),100,fp);
    fclose(fp);
    for(i=0;cou_list[i].time||cou_list[i].score||cou_list[i].sum||cou_list[i].max;i++)
    {
        i++;
    }
    couse_num=i-1;
    switch(child_menu)
    {
        case 1:
            system("date >> log.txt");
            if(fp=fopen("log.txt","a"))
            {
                fputs("添加学生内容-->姓名： ",fp);
                fputs(stu_log.name,fp);
                fputs(" 学号： ",fp);
                fputs(stu_log.number,fp);
                for(i=0;i<couse_num;i++)
                    fprintf(fp," 课程：%d ",stu_log.status[i]);
                fputs("\n",fp);
                fclose(fp);
            }
            else
                printf("error\n");
            break;
        case 2:
            system("date >> log.txt");
            if(fp=fopen("log.txt","a"))
            {
                fputs("删除学生内容-->姓名： ",fp);
                fputs(stu_log.name,fp);
                fputs(" 学号： ",fp);
                fputs(stu_log.number,fp);
                for(i=0;i<couse_num;i++)
                    fprintf(fp," 课程：%d ",stu_log.status[i]);
                fputs("\n",fp);
                fclose(fp);
            }
            else
                printf("error\n");
            break;
        case 4:
            system("date >> log.txt");
            if(fp=fopen("log.txt","a"))
            {
                fputs("修改学生内容-->姓名： ",fp);
                fputs(stu_log.name,fp);
                fputs(" 学号： ",fp);
                fputs(stu_log.number,fp);
                for(i=0;i<couse_num;i++)
                    fprintf(fp," 课程：%d ",stu_log.status[i]);
                fputs("\n",fp);
                fclose(fp);
            }
            else
                printf("error\n");
            break;
    }

    return 0;
}

int log_manger_cou(int child_menu,cou cou_log)
{
    FILE *fp;
    switch(child_menu)
    {
    case 1:
            system("date >> log.txt");
            if(fp=fopen("log.txt","a"))
            {
                fputs("添加课程内容-->课程名称： ",fp);
                fputs(cou_log.name,fp);
                fputs(" 课程编号： ",fp);
                fputs(cou_log.number,fp);
                fputs(" 课程性质： ",fp);
                fputs(cou_log.explain,fp);
                fprintf(fp," 授课学时：%d 学分：%d 人数上限：%d ",cou_log.time,cou_log.score,cou_log.max);
                fputs("\n",fp);
                fclose(fp);
            }
            else
                printf("error\n");
        break;
    case 2:
            system("date >> log.txt");
            if(fp=fopen("log.txt","a"))
            {
                fputs("删除课程内容-->课程名称： ",fp);
                fputs(cou_log.name,fp);
                fputs(" 课程编号： ",fp);
                fputs(cou_log.number,fp);
                fputs(" 课程性质： ",fp);
                fputs(cou_log.explain,fp);
                fprintf(fp," 授课学时：%d 学分：%d 人数上限：%d ",cou_log.time,cou_log.score,cou_log.max);
                fputs("\n",fp);
                fclose(fp);
            }
            else
                printf("error\n");
        break;
    case 4:
            system("date >> log.txt");
            if(fp=fopen("log.txt","a"))
            {
                fputs("修改课程内容-->课程名称： ",fp);
                fputs(cou_log.name,fp);
                fputs(" 课程编号： ",fp);
                fputs(cou_log.number,fp);
                fputs(" 课程性质： ",fp);
                fputs(cou_log.explain,fp);
                fprintf(fp," 授课学时：%d 学分：%d 人数上限：%d ",cou_log.time,cou_log.score,cou_log.max);
                fputs("\n",fp);
                fclose(fp);
            }
            else
                printf("error\n");
        break;

    }
    return 0;
}


