#include <iostream>
// L1-012. 计算指数
using namespace std;
int main(int argc, char *argv[]) {
	int arr[3], min;
	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
	min=arr[0];
	for(int i=0;i<2;i++)
	{
		for(int j=1;j<3;j++)
		{
			if(arr[j]<arr[i])
			{
				min=arr[j];
				arr[j]=arr[i];
				arr[i]=min;
			}
		}
	}
	printf("%d->%d->%d\n", arr[0],arr[1],arr[2]);
	return 0;
}