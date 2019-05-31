#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define INPUT_MAX 5
void NTC(char * ); 
char *map(int);     
int main(void){
	
	int B,D=0;      
	char *input;    
	char input_num[INPUT_MAX];
	int length;     
	 
	printf("請輸入一串阿拉伯數字:");
	scanf("%s",input_num);
	
	input=input_num;
	length=strlen(input_num);
	for(B=0;B<length;B++){
		NTC(input);
		if(*(input)!='0'){
			printf("%s",(map(length))+D);
		}
		input++;
		D+=3;
	}
	printf("\n");
	system("pause");
	return 0;
} 
char *map(int digital){
	int B,D=0;
	char *result[4];
	char chinese[5][3]={"萬","千","百","拾"," "};
	
	for(B=digital;B>1;B--){
		result[D]=chinese[5-B];
		D++;
	}
	return *result;
}
void NTC(char *input){
	
	char chinese_map[10][4]={"零","壹","貳","參","肆","伍","陸","柒","捌","玖"};
	
	switch(*input){
	case '0':{
		printf("%s",chinese_map[0]);
		break;
	}
	case '1':{
		printf("%s",chinese_map[1]);
		break;
	}
	case '2':{
		printf("%s",chinese_map[2]);
		break;
	}
	case '3':{
		printf("%s",chinese_map[3]);
		break;
	}
	case '4':{
		printf("%s",chinese_map[4]);
		break;
	}
	case '5':{
		printf("%s",chinese_map[5]);
		break;
	}
	case '6':{
		printf("%s",chinese_map[6]);
		break;
	}
	case '7':{
		printf("%s",chinese_map[7]);
		break;
	}
	case '8':{
		printf("%s",chinese_map[8]);
		break;
	}	
	case '9':{
		printf("%s",chinese_map[9]);
		break;
	}			
	}
}
