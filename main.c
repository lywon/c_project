#include <stdio.h>
#include <stdlib.h>
#include  <time.h>


// 获取当前时间
char * get_time(){
	time_t temp;
	time(&temp);
	return ctime(&temp);
}

int main(){
	char * card_n;
	struct id_card {
		char * name;
		int age;
		char province[3];
		char city[3];
		char county[3];
		char year[5];
		char month[3];
		char day[3];
		char checker[5];
	} card;
	char temp[10];
	int temp1;
	int temp2;

	//puts("请输入一个身份证号: ");
	//scanf("%s", card_n);
	card.name = "张三";
	card_n = "110101199003070732";
	sscanf(card_n, "%2c%2c%2c%4c%2c%2c%4c",card.province, card.city, card.county, card.year, card.month, card.day);
	puts(card.name);
	puts(card.province);
	puts(card.city);
	puts(card.county);
	puts(card.year);
	puts(card.month);
	puts(card.day);

	//取出当前时间中的年分
	//Sat Aug 29 04:10:36 2020
 	sscanf(get_time(), "%3c %3c %2c %2c:%2c:%2c %4c", temp, temp, temp,temp,temp,temp, temp);
	sscanf(temp, "%4d", &temp1);
	sscanf(card.year, "%4d", &temp2);
	printf("您的生日是%d", temp1 - temp2);

	return 0;
}
