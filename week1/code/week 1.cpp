#include <stdio.h>

int main()
{
	int i;
	printf("���-1��0��1��ѡ��һ���������룺");
	scanf("%d",&i);
	while(i!= -1) {	
		if (i==0) {
			printf("helloworld\n");
			printf("���ٴ�ѡ��һ���������룺");
			scanf("%d",&i);
		} else if (i==1){
			printf("HELLOWORLD\n");
			printf("���ٴ�ѡ��һ���������룺"); 
			scanf("%d",&i); 
		} else {
			printf("���������⣡");
			break; 
		}
    } 
	return 0;
}

