#include <iostream>
// L1-030. 一帮一
using namespace std;
#define MAXN 50
struct student
{
	int sex;
	char name[9];
	int flag;// 为0则表示还未匹配同学，为1表示已经匹配
};

int main(int argc, char *argv[]) {
	int n,i,j;
	struct student students[MAXN];
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d %s", &students[i].sex, students[i].name);
		students[i].flag=0;// 匹配标志初始化为未匹配
	}
	for(int i=0;i<n/2;i++)
	{
		students[i].flag=1;
		printf("%s ", students[i].name);// 名词前一半的依次输出即可
		j=n-1;// 匹配被帮助同学时候的索引,从后往前
		for(j=n-1;j>=n/2;j--)// 从后往前扫描后一半的同学
		{
			if(students[j].sex != students[i].sex && students[j].flag==0 )
			{
				printf("%s\n", students[j].name);
				students[j].flag=1;
				break;
			}
		}
	}
	return 0;
}