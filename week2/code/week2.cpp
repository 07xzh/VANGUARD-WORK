#include <stdio.h>
enum number{
	GPIO_Speed_2MHz,
	GPIO_Speed_10MHz,
	GPIO_Speed_50MHz
};
struct speed {
	enum number GPIO_Speed;
};
void GPIO_Structurelnit(struct speed *p);

int main()
{
	struct speed x;
	GPIO_Structurelnit(&x);
	return 0; 
}
void GPIO_Structurelnit(struct speed *p) {
	p->GPIO_Speed=GPIO_Speed_2MHz;
}

