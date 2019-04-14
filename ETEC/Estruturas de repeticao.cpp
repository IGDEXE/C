#include<stdio.h>
#include<conio.h>
#include<iostream>



int main(void)
{
    int ip;
    printf("Bem vindo!!!!\n");
    system("pause");
      volta:
    printf("Qual estrutura quer testar?\n");
    printf("1-For\n");
    printf("2-While\n");
    printf("3-Do While.\n");
    scanf("%d",&ip);
    if(ip==1)
    //For
    {
                    system("cls");
                    int c,d;
                    for(c=1;c<=10;c++)
                    {
                      printf("%d\n",&c);    
                    }
                    system("PAUSE");
                    for(c=10;c>=0;c--)
                    {
                      printf("%d\n",&c);    
                    }
    
                   system("PAUSE");
                   system("cls");
                   printf("\nO que deseja fazer?\n");
                   printf("1) Voltar ao menu iniciar\n");
                   printf("2) Sair\n");
                   scanf("%d",&d);
      
                   if (d == 1)
                   {
                      goto volta;
                   }
                   else {}                                      
                   system("pause");
    }
    if(ip==2)
    //While
    {
                    system("cls");
                    int c,d;
                    c=0;
                    while(c<=10)
                    {
                      printf("%d\n",&c);
                      c++;
                    }
                    system("PAUSE");
                    c=10;
                    while(c>=0)
                    {
                      printf("%d\n",&c);
                      c--;
                    }
    
                   system("PAUSE");
                   system("cls");
                   printf("\nO que deseja fazer?\n");
                   printf("1) Voltar ao menu iniciar\n");
                   printf("2) Sair\n");
                   scanf("%d",&d);
      
                   if (d == 1)
                   {
                      goto volta;
                   }
                   else {}                                      
                   system("pause");
    }
    if(ip==3)
    //Do While
    {
                    system("cls");                    
                    int c,d;
                    c=0;
                    do
                    {
                        printf("%d\n",&c);
                        c++;
                    }
                    while(c<=10);
                    system("PAUSE");
                    c=10;
                    do
                    {
                        printf("%d\n",&c);
                        c--;
                    }
                    while(c>=0);
    
                   system("PAUSE");
                   system("cls");
                   printf("\nO que deseja fazer?\n");
                   printf("1) Voltar ao menu iniciar\n");
                   printf("2) Sair\n");
                   scanf("%d",&d);
      
                   if (d == 1)
                   {
                      goto volta;
                   }
                   else {}                                      
                   system("pause");
      }
    
}
