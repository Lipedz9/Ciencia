#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"portuguese");
int menu,i=0,p;
int num1[10],num2[10],res[10];
char op[10];

do{
		for(i=1;i<=1000;){
			system("cls");
			printf("	******************************************");
			printf("\n	*              Menu de Op��es            *");
			printf("\n	*                                        *");
			printf("\n	*   1- Adi��o                            *");
			printf("\n	*   2- Subtra��o                         *");
			printf("\n	*   3- Multiplica��o                     *");
			printf("\n	*   4- Divis�o                           *");
			printf("\n	*   5- Hist�rico                         *");
			printf("\n	*   0- Sair                              *");
			printf("\n	*                                        *");
			printf("\n	******************************************");
			printf("\n	");
			printf("Escolha uma op��o: ");
			scanf("%d",&menu);
		
			switch(menu){
				case 0:
					system("cls");
					printf("Fim do programa!!\n\n");
					break;
				case 1:
						system("cls");
						printf("\n******************* Op��o Soma *******************\n\n");
						printf("Digite o primeiro n�mero: ");
						scanf("%d",&num1[i]);
						printf("Digite o segundo n�mero: ");
						scanf("%d",&num2[i]);
			
						res[i]=num1[i]+num2[i];
			
						printf("%d + %d = %d\n\n",num1[i],num2[i],res[i]);
						printf("\n*********************************************************\n");
						system("pause");
						op[i]='+';
						i++;
						break;
				case 2:
						system("cls");
						printf("\n******************* Op��o Subtra��o *******************\n\n");
						printf("Digite o primeiro n�mero: ");
						scanf("%d",&num1[i]);
						printf("Digite o segundo n�mero: ");
						scanf("%d",&num2[i]);
		
						res[i]=num1[i]-num2[i];
		
						printf("%d - %d = %d\n\n",num1[i],num2[i],res[i]);
						printf("\n*********************************************************\n");
						system("pause");
						op[i]='-';
						i++;
						break;
				case 3:
						system("cls");
						printf("\n******************* Op��o Multiplica��o *******************\n\n");
						printf("Digite o primeiro n�mero: ");
						scanf("%d",&num1[i]);
						printf("Digite o segundo n�mero: ");
						scanf("%d",&num2[i]);
			
						res[i]=num1[i]*num2[i];
			
						printf("%d X %d = %d\n\n",num1[i],num2[i],res[i]);
						printf("\n*********************************************************\n");
						system("pause");
						op[i]='*';
						i++;
						break;
				case 4:
						system("cls");
						printf("\n******************* Op��o Divis�o *******************\n\n");
						printf("Digite o primeiro n�mero: ");
						scanf("%d",&num1[i]);
						printf("Digite o segundo n�mero: ");
						scanf("%d",&num2[i]);
		
						res[i]=num1[i]/num2[i];
	
						printf("%d � %d = %d\n\n",num1[i],num2[i],res[i]);
						printf("\n*********************************************************\n");
						system("pause");
						op[i]='�';
						i++;
						break;
				case 5:
						printf("\n******************* Op��o Consulta *******************\n\n");
						printf("Qual c�lculo deseja consultar: ");
						scanf("%d",&p);
						printf("%d %c %d = %d",num1[p],op[p],num2[p],res[p]);
						printf("\n*********************************************************\n");
						system("pause");
						break;
				default: 
					printf("Op��o Inv�lida!\n\n");
					system("pause");
			}
		
			if(menu==0)break;
		}//fim do contador
	}while(menu!=0);
return 0;
}
