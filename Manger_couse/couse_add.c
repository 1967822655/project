#include "head.h"
#include "manger.h"
#include "log_manger.h"
#include "couse_manger.h"

void couse_add()
{
    FILE *fp;
    cou add;
    fp=fopen("cou.txt","a");
    printf("请输入课程编号、课程名称、课程性质、授课学时、课程学分、人数上限：【空格隔开】\n-->");
    scanf("%s%s%s%d%d%d",add.number,add.name,add.explain,&add.time,&add.score,&add.max);
    add.sum=0;
    fwrite(&add,sizeof(cou),1,fp);
    fclose(fp);
    log_manger_cou(1,add);
}
