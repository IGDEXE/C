#include<stdio.h>
#include<conio.h>
#include<iostream>

main( )
{
      int d, m, ano, ano1, atual, opcao;
      
       volta:
      
     
            
      system("cls");
       printf("Bem vindo!!\n"); 
       system("pause");    
      printf("Digite o ano atual\n");
      scanf("%d",&atual);
      printf("Que dia voce nasceu?\n");
      scanf("%d",&d);
      printf("Digite o numero do seu mes de nascimento\n");
      scanf("%d",&m);
      printf("Que ano voce nasceu?\n");
      scanf("%d",&ano);
      
      ano1=atual-ano;
      
      if (((d >= 21 || d == 31) && m == 3) || ((d >= 1 || d == 19) && m == 4))
      {
         system("cls");
         printf("Sua idade e: %d",ano1);
         printf("\nSeu signo e: Aries\n");
      }
      else if (((d >= 20 || d == 30) && m== 4) || ((d >= 1 || d == 20) && m == 5))
      {
           system("cls");
         printf("Sua idade e: %d",ano1);
         printf("\nSeu signo e: Touro\n");
      }
      else if (((d >= 21 || d == 31) && m == 5) || ((d >= 1 || d == 21) && m == 6))
      {
           system("cls");
         printf("Sua idade e: %d",ano1);
         printf("\nSeu signo e: Gemeos\n");
      }
      else if (((d >= 22 || d == 30) && m == 6) || ((d >= 1 || d == 22) && m == 7))
      {
           system("cls");
         printf("Sua idade e: %d",ano1);
         printf("\nSeu signo e: Cancer\n");
      }
      else if (((d >= 23 || d == 31) && m == 7) || ((d >= 1 || d == 22) && m == 8))
      {
           system("cls");
         printf("Sua idade e: %d",ano1);
         printf("\nSeu signo e: Leao\n");
      }
      else if (((d >= 23 || d == 31) && m == 8) || ((d >= 1 || d == 22) && m == 9))
      {
           system("cls");
         printf("Sua idade e: %d",ano1);
         printf("\nSeu signo e: Virgem\n");
      }
      else if (((d >= 23 || d == 30) && m == 9) || ((d >= 1 || d == 22) && m == 10))
      {
           system("cls");
         printf("Sua idade e: %d",ano1);
         printf("\nSeu signo e: Libra\n");
      }
      else if (((d >= 23 || d == 31) && m == 10) || ((d >= 1 || d == 21) && m == 11))
      {
           system("cls");
         printf("Sua idade e: %d",ano1);
         printf("\nSeu signo e: Escorpiao\n");
      }
      else if (((d >= 22 || d == 30) && m == 11) || ((d >= 1 || d == 21) && m == 12))
      {
           system("cls");
         printf("Sua idade e: %d",ano1);
         printf("\nSeu signo e: Sagitario\n");
      }
      else if (((d >= 22 || d == 31) && m == 12) || ((d >= 1 || d == 19) && m == 1))
      {
           system("cls");
         printf("Sua idade e: %d",ano1);
         printf("\nSeu signo e: Capricornio\n");
      }
      else if (((d >= 20 || d == 31) && m == 1) || ((d >= 1 || d == 18) && m == 2))
      {
           system("cls");
         printf("Sua idade e: %d",ano1);
         printf("\nSeu signo e: Aquario\n");
      }
      else
      {
          system("cls");
         printf("Sua idade e: %d",ano1);
         printf("\nSeu signo e: Peixes\n");
      }
      
      printf("O que deseja fazer?\n");
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
      system("Pause");
      return(0);
}
