#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

typedef struct{
    int num;
    char name[20];
    int marks[20];
    float avr;
}TStudent;


void mywrite(char *filename);
void myread(char *filename);
void myadd(char *filename);
void myedit(char *filename);


int main()
{
    int op,i,k;
    FILE *f;
    TStudent s;
    char filename[80];
    char *p;

    printf("File Name:");
    fgets(filename,80,stdin);
    if(p=strchr(filename,'\n'))*p='\0';
    while(1)
    {
        system("cls");
        printf("1. Change file\n");
        printf("2. Write\n");
        printf("3. Read\n");
        printf("4. Add\n");
        printf("5. Edit\n");
        printf("6. Exit\n");
        scanf("%d",&op);
        getchar();                 /* eat the newline left by scanf */
        switch(op)
        {
            case 1:  printf("File Name:");
                     fgets(filename,80,stdin);
                     if(p=strchr(filename,'\n'))*p='\0';
                     break;
            case 2: mywrite(filename);break;

            case 3:myread(filename);  break;
            case 4:myadd(filename);   break;
            case 5:myedit(filename);  break;
            case 6:return 0;
            default:printf("Incorrect choice!");
        }
        printf("Press a key to continue");getch();
    }
    return 0;
}


void mywrite(char *filename)
{
    TStudent s;
    FILE *f;
    char *p;
    int k,i=0;
    if(f=fopen(filename,"wb"))
    {
      while(1)
      {
         printf("num (-1 for end)=");
         scanf("%d",&s.num);
         if(s.num==-1)break;
         getchar();
         printf("name=");
         fgets(s.name,20,stdin);
         if(p=strchr(s.name,'\n'))*p='\0';
         s.avr=0;
         k=0;
         while(k<20)
         {
            printf("Mark %d for student %d (-1 for end)=",k+1,i+1);
            scanf("%d",&s.marks[k]);
            if(s.marks[k]==-1)break;
            s.avr+=s.marks[k];
            k++;
         }
         if(k)s.avr/=k;
         fwrite(&s,sizeof(s),1,f);
         i++;
       }
       fclose(f);
     }
     else printf("Error opening file for writing!");
}



void myread(char *filename)
{
    TStudent s;
    FILE *f;
    char *p;
    int k;
    if(f=fopen(filename,"rb"))
    {
                     while(!feof(f))
                     {
                      if(fread(&s,sizeof(s),1,f))
                      {
                         printf("%3d %-21s",s.num,s.name);
                         k=0;
                         while(k<20)
                         {
                            if(s.marks[k]==-1)break;
                            printf("%3d",s.marks[k]);
                            k++;
                         }
                         printf("%6.2f\n",s.avr);
                       }
                     }
                     fclose(f);
    }
    else printf("Error opening file for reading!");
}


void myadd(char *filename)
{
    TStudent s;
    FILE *f;
    char *p;
    int k,i=0;
    if(f=fopen(filename,"ab"))
    {
                     while(1)
                     {
                           printf("num (-1 for end)=");
                           scanf("%d",&s.num);
                           if(s.num==-1)break;
                           getchar();
                           printf("name=");
                           fgets(s.name,20,stdin);
                           if(p=strchr(s.name,'\n'))*p='\0';
                           s.avr=0;
                           k=0;
                           while(k<20)
                           {
                               printf("Mark %d for student %d (-1 for end)=",k+1,i+1);
                               scanf("%d",&s.marks[k]);
                               if(s.marks[k]==-1)break;
                               s.avr+=s.marks[k];
                               k++;
                           }
                           if(k)s.avr/=k;
                           fwrite(&s,sizeof(s),1,f);
                           i++;
                     }
                     fclose(f);
                   }
                   else printf("Error opening file for writing!");
   }


void myedit(char *filename)
{
    TStudent s;
    FILE *f;
    char *p;
    int k,target,found=0;
    if(f=fopen(filename,"rb+"))
    {
        printf("num of student to edit=");
        scanf("%d",&target);
        getchar();
        while(fread(&s,sizeof(s),1,f))
        {
            if(s.num==target)
            {
                found=1;
                printf("Editing student %d (%s)\n",s.num,s.name);
                printf("name=");
                fgets(s.name,20,stdin);
                if(p=strchr(s.name,'\n'))*p='\0';
                s.avr=0;
                k=0;
                while(k<20)
                {
                    printf("Mark %d (-1 for end)=",k+1);
                    scanf("%d",&s.marks[k]);
                    if(s.marks[k]==-1)break;
                    s.avr+=s.marks[k];
                    k++;
                }
                getchar();
                if(k)s.avr/=k;
                fseek(f,-(long)sizeof(s),SEEK_CUR);
                fwrite(&s,sizeof(s),1,f);
                break;
            }
        }
        if(!found)printf("Student %d not found!",target);
        fclose(f);
    }
    else printf("Error opening file for editing!");
}