#include <stdio.h>
#include <string.h>


typedef struct{
    int num;
    char name[50];
    int marks[20];
    float avr;
} TStudent;

int main()
{
    TStudent s;
    int i,brp;
    char *p;
    do{
        printf("Subject count=");
        scanf("%d",&brp);
    }while(brp<1||brp>20);
    printf("Num=");scanf("%d",&s.num);
    getchar();
    printf("Name=");fgets(s.name,50,stdin);
    if(p=strchr(s.name,'\n'))*p='\0';
    s.avr=0;
    for(i=0;i<brp;i++)
    {
      printf("Mark %d=",i+1);
      scanf("%d",&s.marks[i]);
      s.avr+=s.marks[i];
    }
    s.avr=s.avr/brp;
    printf("%d %s ",s.num,s.name);
    for(i=0;i<brp;i++)printf("%2d" ,s.marks[i]);
    printf("%6.2f",s.avr);
   
    return 0;
}
