#include<stdio.h>
int main (){
	struct distance
	{
		int inches;
		int feet;
		
	};
	struct distance d1,d2,d3;
	printf("Enter the two distance in feet:\n");
	scanf("%d%d",&d1.feet,&d2.feet);
	struct distance d4,d5,d6;
	printf("Enter the two distance in inches:\n");
	scanf("%d%d",&d4.inches,&d5.inches);
	d3.feet=d1.feet+d2.feet;
	d6.inches=d4.inches+d5.inches;
	if(d6.inches>12){
		d3.feet++;
		d6.inches=12;
		
	}
	printf("The value in feet:%d\n",d3.feet);
	printf("The value in inches:%d\n",d6.inches);
}
