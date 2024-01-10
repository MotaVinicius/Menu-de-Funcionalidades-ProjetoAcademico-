#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void tabuleiro(char casas2[3][3]){
				system("cls");
            	printf("\t %c | %c | %c \n", casas2[0][0], casas2[0][1], casas2[0][2]);
            	printf("\t-----------\n");
            	printf("\t %c | %c | %c \n", casas2[1][0], casas2[1][1], casas2[1][2]);
                printf("\t-----------\n");
            	printf("\t %c | %c | %c \n", casas2[2][0], casas2[2][1], casas2[2][2]);
			}

main()
{   setlocale (LC_ALL,"portuguese");
	int op;
    int i=1, resultado;
	int numero;
	char casas[3][3];
	char resposta;
	int jogadas, l, c, vez=0, j, k;

    printf("Projeto Algoritmo\n\n");

    do {

        printf("\n           MENU          \n");
        printf("[1] - Calculadora de Notas\n");
        printf("[2] - Calculo de Fibonacci\n");
        printf("[3] - Numeros Primos\n");
        printf("[4] - Jogo da Velha\n");
        printf("[5] - Sair\n");
        printf("                                            Desenvolvido por: Vinicius Mota Neves\n");
        printf("Escolha uma das opções: ");
        scanf("%d",&op);
        if(op==5){
        	i=51;
		}

        switch (op) {
          case 1: {
		
            printf("\n*Calculadora de Notas*\n");
            int N[4], media, cont=0, cont2=0, i;
	printf("Digite suas notas bimestrais para saber se passou de ano\n\n");
	for(i=0;i<=3;i++){
	printf("Digite sua Nota %d: ",i+1);
	scanf("%d",&N[i]);
	cont=cont+N[i];
}
media = cont/4;
for(i=0;i<=3;i++){
	if(N[i]>=6){
		cont2=cont2+1;
	}
}

printf("\nA quantidade de notas a cima da média são: %d \ne a sua média final é: %d", cont2, media);
if(media>=6){
	printf("\n\nVoce foi Aprovado");
}
else{
	printf("\n\nVoce foi Reprovado");
}
}
            break;
		 
		  case 2: {
		  printf("\n*Calculo de Fibonacci*\n");
	int i,n;
    int t1=0,t2=1;
    int t3=t1+t2;
    printf("Insira o numero de termos: ");
    scanf("%d",&n);
    printf("Sequencia Fibonacci: %d, %d, ",t1,t2);
    for (i=3;i<=n;++i) {
        printf("%d, ",t3);
        t1 = t2;
        t2 = t3;
        t3=t1+t2;
    }
}
 			break;

		  case 3: {
		  	printf("\n*Numeros Primos*\n");
	int max, i, j, primo;
	printf("Digite um valor , e mostrarei todos os numeros primos ate esse valor: ");
	scanf("%d",&max);
	for (i=0;i<=max;i++) {
		if (i==0) {
		primo = 0;
		} else {
			primo = 1; 
			for(j=2;j<i;j++) { 
				if (i%j == 0) {
					primo=0; 
				}
			}
		}
		if (primo==1) 
			printf(" %d ",i);
	}
	}
	 		break;
	
          case 4:{
        	tabuleiro(casas);
			do{
		jogadas = 1;
		for(k=0;k<=2;k++){
			for(j=0;j<=2;j++){
				casas[k][j] = ' ';
			}
		}
		do{
			tabuleiro(casas);
			if(vez%2==0){
				printf("Jogador X\n");
			}
			else{
				printf("Jogador O\n");
			}
			printf("Digite a linha: ");
			scanf("%d",&l);
			printf("Digite a coluna: ");
			scanf("%d",&c);
			if(l<1 || c<1 || l>3 || c>3){
				l = 0;
				c = 0;
			}else if(casas[l-1][c-1] != ' '){
			l = 0;
			c = 0;
			}else{
				if(vez%2==0){
					casas[l-1][c-1] = 'X';
					}else{
						casas[l-1][c-1] =  'O';
					}
					vez++;
					jogadas++;
					}
					if(casas[0][0]=='X' && casas[0][1]=='X' && casas[0][2]=='X'){jogadas = 11;}
					if(casas[1][0]=='X' && casas[1][1]=='X' && casas[1][2]=='X'){jogadas = 11;}
					if(casas[2][0]=='X' && casas[2][1]=='X' && casas[2][2]=='X'){jogadas = 11;}
					if(casas[0][0]=='X' && casas[1][0]=='X' && casas[2][0]=='X'){jogadas = 11;}
					if(casas[0][1]=='X' && casas[1][1]=='X' && casas[2][1]=='X'){jogadas = 11;}
					if(casas[0][2]=='X' && casas[1][2]=='X' && casas[2][2]=='X'){jogadas = 11;}
					if(casas[0][0]=='X' && casas[1][1]=='X' && casas[2][2]=='X'){jogadas = 11;}
					if(casas[0][2]=='X' && casas[1][1]=='X' && casas[2][0]=='X'){jogadas = 11;}
					
					if(casas[0][0]=='O' && casas[0][1]=='O' && casas[0][2]=='O'){jogadas = 12;}
					if(casas[1][0]=='O' && casas[1][1]=='O' && casas[1][2]=='O'){jogadas = 12;}
					if(casas[2][0]=='O' && casas[2][1]=='O' && casas[2][2]=='O'){jogadas = 12;}
					if(casas[0][0]=='O' && casas[1][0]=='O' && casas[2][0]=='O'){jogadas = 12;}
					if(casas[0][1]=='O' && casas[1][1]=='O' && casas[2][1]=='O'){jogadas = 12;}
					if(casas[0][2]=='O' && casas[1][2]=='O' && casas[2][2]=='O'){jogadas = 12;}
					if(casas[0][0]=='O' && casas[1][1]=='O' && casas[2][2]=='O'){jogadas = 12;}
					if(casas[0][2]=='O' && casas[1][1]=='O' && casas[2][0]=='O'){jogadas = 12;}
					
					
		}while(jogadas<=9);
		tabuleiro(casas);
		if(jogadas==10){
			printf("O jogo Empatou\n");
		}
		if(jogadas==11){
			printf("O jogador X venceu\n");	
		}
		if(jogadas==12){
			printf(" O jogador O venceu\n");
		}
			
			
		printf("Deseja jogar novamente? [S-N]\n");
		scanf("%s",&resposta);
	}while(resposta=='s');
		  }
			break;
			
          case 5:{
           	printf("\nAte a proxima o/");
		  }
            break;
            
          default:
            printf("\nComando invalido, tente novamente");
        }
        printf("\n\n");
        i++;  
    } while(i<=50);
    return 0;
}
	
	
