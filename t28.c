#include <stdio.h>
#include <dirent.h>
#include <sys/stat.h>
#include <string.h>

int main()
{
    FILE *fp = NULL;
    char *path = "E:/TV303-DVB";
    char *dp = NULL;
    dp = opendir(path);
    printf("%d\n",dp);
    return 0;
}