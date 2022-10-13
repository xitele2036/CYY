
#include <stdio.h>
#include <dirent.h>
#include <sys/types.h>
int main()
{
	//打开一个文件目录,opendir中行目录的名字
    DIR * dir = opendir("E:/TV303-DVB");
	//成功：返回指向该目录的结构体目录
	//失败：返回NULL
    if(dir == NULL)
    {
        printf("打开失败！\n");
    }
    //定义一个目录结构体题指针
    struct dirent * dirp;
    while(1)
    {
        dirp = readdir(dir);
        //readdir打开目录，返回值为一个结构体
        if(dirp == NULL)
        {
            break;
        }
        //dirp->d_type 是这个指针指向文件的类型
        //DT_DIR  目录
        //DT_REG  文件
        if(dirp->d_type == DT_DIR)
        {
            printf("%s是一个目录\n",dirp->d_name);
        }
        else if(dirp->d_type == DT_REG)
        {
            printf("%s 是一个普通文件\n",dirp->d_name);
        }
        else
        {
            break;
        }
    }
    //关闭目录
    closedir(dir);
    return 0;
}
