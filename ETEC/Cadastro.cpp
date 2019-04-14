#include <stdio.h>
#include<string.h>
#include<conio.h>
#include<windows.h>

         int main () {
             
         char login[20],senha[20];
         int i,c, res, cont_0=0, cont_1=0, cont_2=0, cont_3=0, cont_4=0, cont_5=0, cont_6=0, cont_7=0, cont_8=0, cont_9=0;
         volta:
         printf("Bem vindo !!!!\n");
         
         printf("\nSistema de cadastro\n");
         
         printf("\nLogin:");
         gets(login);
         printf("\nSenha :");
         gets(senha);
         res= strlen(senha);
         
         while (res <6)
               { 
         printf("\nSistema de cadastro\n");
         printf("\nLogin:");
         gets(login);
         printf("\nSenha :");
         gets(senha);
         res= strlen(senha);      
         }
         for (i=0;i< strlen(senha);i++ )
		{
		 
            if(senha[i]=='0')
               {
                    cont_0++;
                }
            if(senha[i]=='1')
                 {
                   cont_1++;
                 }
            if(senha[i]=='2')
                 {
                   cont_2++;
                 }
            if(senha[i]=='3')
                 {
                   cont_3++;
                 }
             if(senha[i]=='4')
                 {
                   cont_4++;
                 }
             if(senha[i]=='5')
                 {
                   cont_5++;
                 }
             if(senha[i]=='6')
                 {
                   cont_6++;
                 }
             if(senha[i]=='7')
                 {
                   cont_7++;
                 }
             if(senha[i]=='8')
                 {
                   cont_8++;
                 }
             if(senha[i]=='9')
                 {
                   cont_9++;
                 }
             printf("%d",i );
        
        printf("\nUsuario e senha cadastrados com Sucesso\n");
        printf("\nQuantidade de Vezes que os Numeros foram Cadastrados\n,\nQuantidade de 0= %d\n,\n Quantidade de 1= %d\n,\n Quantidade de 2= %d\n,\n Quantidade de 3= %d\n,\n Quantidade de 4= %d\n,\n Quantidade de 5= %d\n,\n Quantidade de 6= %d\n,\n Quantidade de 7= %d\n,\n Quantidade de 8= %d\n,\n Quantidade de 9= %d\n\n", cont_0, cont_1, cont_2, cont_3, cont_4, cont_5, cont_6, cont_7, cont_8, cont_9);
          
          }
          system("pause");  
          printf("\nDeseja cadastrar outro usuario?");
          printf("\nSim == 1\n");
          printf("\nNao == precione outra tecla\n");
          scanf("%d",&c);
          if(c==1)
          {
           
          system("cls");
          goto volta;
          }
        
            system("pause");
         return 0;
}
