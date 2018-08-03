/* 逆序输出三位数，123
123/100，1；百位
123/10,12;
12%10,2; 
123%10，3 

*/

#include <stdio.h>

int main(void)
{
	int num;
	int temp1;
	int temp2;
	int temp3;
	
	scanf("%d",&num);
	temp1=num%10;	//个位 
	printf("%d\n",temp1);
	temp2=num/100;  //百位
	printf("%d\n",temp2);
	num=num/10;
	temp3=num%10;  //十位
	printf("%d\n",temp3);
	
	num=temp1*100+temp3*10+temp2;
	
	printf("%d\n",num); 
	
	
	return 0;
 } 
