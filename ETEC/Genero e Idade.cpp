#include<stdio.h>
#include<conio.h>
#include<iostream>


int main(void)
{
    int id, sexo,opcao;
    printf("Bem vindo!!!\n");
     volta:
           
    system("pause");
    printf("Voce eh homem (1) ou mulher (2)?\n");
    scanf("%d",&sexo);
    printf("Voce tem quantos anos?\n");
    scanf("%d",&id);
    
    if((sexo == 2)&&(id >= 18))
          {
           printf("Voce eh mulher e maior de idade\n");
          }
     if((sexo == 1)&&(id >= 18))
          {
           printf("Voce eh homem e maior de idade\n");
          }
     if((sexo == 2)&&(id <= 18))
          {
           printf("Voce eh mulher e menor de idade\n");              
          }
    if((sexo == 1)&& (id <=18)) 
         {
           printf("Voce eh homem e menor de idade\n");            
         }
    
    system("PAUSE");
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

