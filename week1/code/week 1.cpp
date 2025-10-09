#include <stdio.h>

int main()
{
	int i;
	printf("请从-1，0，1中选择一个数字输入：");
	scanf("%d",&i);
	while(i!= -1) {	
		if (i==0) {
			printf("helloworld\n");
			printf("请再次选择一个数字输入：");
			scanf("%d",&i);
		} else if (i==1){
			printf("HELLOWORLD\n");
			printf("请再次选择一个数字输入："); 
			scanf("%d",&i); 
		} else {
			printf("请重新审题！");
			break; 
		}
    } 
	return 0;
}

