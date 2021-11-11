#include <stdio.h>
#include <stdlib.h>

//Declaração de Variáveis
float NotaA1p, NotaA2p, NotaA3p, NotaA4, NotaA1o, NotaA2o, NotaA3o,  Media1p, Media3o;
int CalculoMedias, CasoA3;

int main()
	{
	
	printf("\n--------------------------\n");
	printf("1 - A1, A2, A3\n");
	printf("2 - A4\n");
	printf("3 - Online\n");
	printf("4- Finalizar o Programa\n");
	printf("--------------------------\n");
	printf("\nDigite a opcao desejada: ");
	scanf("%d", &CalculoMedias);
	
	switch (CalculoMedias)
	
	{
	case 1:
       {
	 	 system ("cls");
  	  	 printf("\n-------------------");
		 printf("\nDigite nota da A1: ");
		 scanf("%f", &NotaA1p);
		 printf("\nDigite nota da A2: ");
		 scanf("%f", &NotaA2p);
		 printf("\n-------------------");
		 
		 
		 Media1p = (NotaA1p + NotaA2p)/2;
		 if (Media1p >= 6)
		 {
		 	printf("\n-------------------------\n");
 	 		printf("Parabens voce passou!\n");
 		 	printf("Sua media foi de..: %.1f", Media1p);
 		 	printf("\n-------------------------\n\n");
 		 	
 		 	printf("Lembrando que voce pode fazer a prova A3 para melhorar sua nota!");
 		 	printf("\nCaso tenha feito a A3, digite 1 , caso nao tenha feito digite 2:  ");
 		 	scanf("%d", &CasoA3);
 		 	
 		 	if (CasoA3 == 1)
 		 	{
 		 	
 		 	   printf("\nDige sua nota da A3: ");
   	 		   scanf("%f", &NotaA3p);
   	 		   
				   if (NotaA1p > NotaA2p)
				   {
				   
				   	  if ( NotaA3p > NotaA2p)
				   	  {
				   	  
				   	  	 Media1p = (NotaA1p + NotaA3p)/2;
				   	  	 
				   	  	 printf("\n-----------------------------------------------");
				   	  	 printf("\n Sua nota da A3 foi maior que sua nota da A2!");
				   	  	 printf("\n Com isso sua nova media é de..: %.1f", Media1p);
				   	  	 printf("\n-----------------------------------------------");
				   	  	 system("PAUSE");
			   	  	     system("cls");
				   	  	 main();
				   }
   	  	 		     else
   	  	 		     {
   	  	 		     	  printf("\n---------------------------------------------------");
   	  	 		     	  printf("\n Sua nota da A3 foi menor que as notas da A1 e A2");
   	  	 		     	  printf("\n Com isso sua media continua a mesma de..: %.1f", Media1p);
   	  	 		     	  printf("\n---------------------------------------------------");
   	  	 		     	  system("PAUSE");
   	  	 		     	  system("cls");
   	  	 		     	  main();
   	  	 		     }
   	  	 		    }
		     	   else if ( NotaA3p > NotaA1p)
				   	  {
				   	  
				   	  	 Media1p = (NotaA2p + NotaA3p)/2;
				   	  	 
				   	  	 printf("\n-----------------------------------------------");
				   	  	 printf("\n Sua nota da A3 foi maior que sua nota da A1!");
				   	  	 printf("\n Com isso sua nova media e de..: %.1f", Media1p);
				   	  	 printf("\n-----------------------------------------------");
				   	  	 system("PAUSE");
			   	  	     system("cls");
				   	  	 main();
				   }
   	  	 		     else
   	  	 		     {
   	  	 		     	  printf("\n---------------------------------------------------");
   	  	 		     	  printf("\n Sua nota da A3 foi menor que as notas da A1 e A2");
   	  	 		     	  printf("\n Com isso sua media continua a mesma ..: %.1f", Media1p);
   	  	 		     	  printf("\n---------------------------------------------------");
   	  	 		     	  system("PAUSE");
 	 		     	      system("cls");
   	  	 		     	  main();
 		 	
		 	         }
		 	     }
			 else if (CasoA3 == 2)
			 {
			 
			 	  printf("\n-------------------------------------------------------------------------");
			 	  printf("\n Bom voce passou, mais nao se esqueca que ainda pode melhorar sua media!");
			 	  printf("\n--------------------------------------------------------------------------");
			 	  system("PAUSE");
		 	      system("cls");
			 	  
			 	  main();
		 }
}
 	  	 else
		 	 if (NotaA1p > NotaA2p)
		 
 		{	  	printf("\n-----------------------------------------------------------");
		 	  	printf("\nInfelizmente voce nao passou.\n");
		 	  	printf("Sua media foi ..: %.1f", Media1p);
 		 	  	printf("\nFaca a prova A3 para substituir sua nota da A2.\n");
  			    printf("-----------------------------------------------------------\n");
		 	  	printf("Caso ja tenha feito A3 digite 1, caso nao digite 2: ");
 	 
		 	  	scanf("%d", &CasoA3);
		 	  
		 
   		  	  	if (CasoA3 == 1)
			  {
			  
			   	    printf("\nDige sua nota da A3: ");
			   	 	scanf("%f", &NotaA3p);
		 
		 	   	 	Media1p = (NotaA1p + NotaA3p)/2;

		 	  	 	if (Media1p >= 6)
		 	  	 {		printf("\n-------------------------\n");
		 	  	 		printf("Parabens voce passou!\n");
		 		 		printf("Sua media foi de..: %.1f", Media1p);
		 		 		printf("\n-------------------------\n\n");
		 		 		system("PAUSE");
		 		 		 system("cls");
		 		 	

		 		 		main();
		 			}
					else
 				 {
	  		  	    printf("--------------------------------\n");
	  		 	 	printf("Infelizmente voce nao passou.");
	  		 	 	printf("\nSua media foi de..: %.1f", Media1p);
	  		 	 	printf("\n--------------------------------\n");
	  		 	 	system("PAUSE");
	  		 	 	 system("cls");
	  		 	 	main();
 		 			}
 }
			   else if (CasoA3 == 2)
		   {
                    printf("\n-----------------\n");
			   		printf(" Faca a prova A3!");
			   		printf("\n-----------------\n");
			   		system("PAUSE");
			   		 system("cls");
			   		main();
		 }
	 	 
      }
	  else
	 	 {
 			  printf("-----------------------------------------------------------\n");
	 		  printf("Infelizmente voce nao passou.\n");
	 		  printf("Sua media foi ..: %.1f", Media1p);
 		 	  printf("\nFaca a prova A3 para substituir sua nota da A1.\n");
 		 	  printf("-----------------------------------------------------------\n");
			  printf("Caso ja tenha feito A3 digite 1, caso nao digite 2: ");
		 	  scanf("%d", &CasoA3);
		 	  
		 
   		  	  if (CasoA3 == 1)
			  {
			  
			   	 printf("\nDige sua nota da A3: ");
			   	 scanf("%f", &NotaA3p);
		 
		 	   	 Media1p = (NotaA2p + NotaA3p)/2;

		 	  	 if (Media1p >= 6)
		 	  	 {	printf("\n-------------------------\n");
		 	  	 	printf("Parabens voce passou!\n");
		 		 	printf("Sua media foi de..: %.1f", Media1p);
		 		 	printf("\n-------------------------\n\n");
		 		 	system("PAUSE");
		 		 	 system("cls");
		 		 	main();
		 			}
					else
 				 {
	  		  	    printf("\n---------------------------------\n");
	  		 	 	printf("Infelizmente voce nao passou.");
	  		 	 	printf("\nSua media foi de..: %.1f", Media1p);
	  		 	 	printf("\n---------------------------------\n");
	  		 	 	system("PAUSE");
	  		 	 	 system("cls");
	  		 	 	main();
 		 			}
 }
			   else if (CasoA3 == 2)
		   {
			   		printf("\n-----------------\n");
			   		printf(" Faca a prova A3!");
			   		printf("\n-----------------\n");
			   		system("PAUSE");
			   		 system("cls");
			   		main();
			   		
	       }
    }
}



	case 2:
		{
 		 printf("\nDigite a nota da A4: ");
 		 scanf("%f", &NotaA4);
 		 
 		 if (NotaA4 >= 7)
 		  {
 		 	printf("\n-------------------------------------------------\n");
 		 	printf("Parabens voce passou, sua nota foi..: %.f", NotaA4);
 		 	printf("\nLembrando que materias A4 nao tem segunda chamada!");
 		 	printf("\n---------------------------------------------------\n");
 		 	system("PAUSE");
 		 	system("cls");
 		 	main();
 		 }
		  else
			{
			 
			 printf("\n-----------------------------------------------\n");
			 printf("Infelizmente voce nao passou, sua nota foi..: %.f", NotaA4 );
			 printf("\nLembrando que materias A4 nao tem segunda chamada!");
 		 	 printf("\n-------------------------------------------------\n");
 		 	 system("PAUSE");
 		 	 system("cls");
 		 	 main();
 		 	
 		 }
 	}

	
	
	case 3:
		 {
		 	
		 }
			 
	case 4:
		{
			printf("\n-------------------------------------\n");
			printf("Espero que tenha funcionado!\n");
			printf("Obrigado por utilizar o pragama.\n");
			printf("\n-------------------------------------\n");
			exit(0);
		}
		


}
}

