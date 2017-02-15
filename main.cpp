#include<stdio.h> 
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
int get_integer(void);
void get_number(int *pa,int *pb,int *pc);
char get_sign(void);
int value(int,int,char); 
bool language=true;
int main(void)
{
	int i,num,count=0;
	int a,b,c,answer; 
	int * pa,* pb,* pc; 
	pa=&a;pb=&b;pc=&c;
	char sign1,sign2;
	char ch;
	printf("选择中文版请输入1。\nEnter 0 to choose English.");
    scanf("%d",&language);
	
    num=get_integer();
    if(language)
    printf("请输入一个整数答案（输入e结束并得出结果）\n"); 
    else printf("Please enter an integer answer(e to quit and get the result).\n");
	for(i=1;i<=num;)
    {
    	sign1=get_sign();
        sign2=get_sign();
	    get_number(pa,pb,pc);
		if(sign2=='/')
		    if(c==0||(float)(b/c)==(b/c))continue;
		
		if(sign1=='/')
		    if(value(b,c,sign1)==0||(float)(b/c)==(b/c))continue;
		
		printf(" %d %c ( %d %c %d)=",a,sign1,b,sign2,c);	
		if(scanf("%d",&answer)!=1)break;
		b=value(b,c,sign2);
		
		if(answer==value(a,b,sign1))
		{
			if(language)
			printf("答案正确!\n");
			else printf("You're right!\n");
			count++;
		}
		else {
		if(language)printf("答案错误！答案为%d\n",value(a,b,sign1));
	    else printf("It's wrong,the right answer is %d\n",value(a,b,sign1));
		}
		i++;
	}
	if(language) printf("正确题数：%d",count);
	else printf("You have %d right answer.",count);
	return 0;
}
 void get_number(int *pa,int *pb,int *pc)
{
	srand(time(NULL));
	*pa=rand()%11;
	*pb=rand()%11;
	*pc=rand()%11;
}
