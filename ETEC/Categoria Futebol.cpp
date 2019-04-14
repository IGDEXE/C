#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


int main(void)
{
    int id,opcao;
    
    
    printf("Bem vindo!!!\n");
     volta:
           
    system("pause");
   
    printf("Digite sua idade.\n");
    scanf("%d",&id);
    if(id<=5)
    {
             system("cls");
             system("color 57");
             printf("Voce esta na categoria frandinha!\n");
    }
    if(id>=6 && id<=9)
    {
             system("cls");
             system("color 47");
             printf("Voce esta na categoria mirim!\n");
    }
    if(id>= 10 && id<=13)
    {
            system("cls");
             system("color 17");
             printf("Voce esta na categoria pre-juvenil!\n");
    }
    if(id>= 10 && id<=13)
    {
            system("cls");
             system("color 97");
             printf("Voce esta na categoria pre-juvenil!\n");
    }
    if(id>= 14 && id<=16)
    {
            system("cls");
             system("color 37");
             printf("Voce esta na categoria juvenil!\n");
    }
    if(id>= 17 && id<=21)
    {
            system("cls");
             system("color 87");
             printf("Voce esta na categoria junior!\n");
    }
    if(id>21)
    {
             system("cls");
             system("color e7");
       printf("Voce esta na categoria profissional!\n"); 
    }
    
    system("pause");
    system("cls");
      system("color 07");
    printf("\nO que deseja fazer?\n");
      printf("1) Voltar ao menu iniciar\n");
      printf("2) Sair\n");
      scanf("%d",&opcao);
      
      if (opcao == 1)
      {
         goto volta;
      }
      else 
      {
      }   
    system("pause");
}
