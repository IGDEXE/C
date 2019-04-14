#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


int main(void)
{
    float n1,n2,n3,n4,f,med,opcao;
    volta:
          
    system("color 02");
    printf("Bem vindo!!!\n");
    system("pause");
    voltar:
    printf("Digite a primeira nota.\n");
    scanf("%f",&n1);
    printf("Digite a segunda nota.\n");
    scanf("%f",&n2);
    printf("Digite a terceira nota.\n");
    scanf("%f",&n3);
    printf("Digite a quarta nota.\n");
    scanf("%f",&n4);
    printf("Digite a porcentagem de frequencia do aluno, so  numeros.\n");
    scanf("%f",&f);
    med=((n1+n2+n3+n4)/4);
    system("cls");
    if(med >= 6 && f >= 75)
    {
           system("color 17");
           printf("O aluno foi aprovado!!.\n");
    }
    else
    {
        
        system("color 47");
        printf("O aluno foi reprovado!!.\n");
    }
      system("pause");
      system("cls");
      system("color 07");
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
    system("pause");
    
    
}
