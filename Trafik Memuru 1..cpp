#include<stdio.h>
#include <stdlib.h>
int main(){


 int hiz; 

 printf(" hiz degerini girin:");
 scanf("%d",&hiz);

 printf("\n");
 
 printf("arac turunu girin:");
 scanf("%d",&hiz);
 


 if (hiz > 90) {

 	printf("\n arac turu otomobildir \n arac cezalidir\n ceza parasi:1000 TL");
 	
 } 
 else
 
 if (hiz > 70) {
  printf(" \n arac turu otobus \n arac cezalidir \n ceza parasi:1500 TL");
  
 }

 else  
  if (hiz > 50)
 	{
 	 printf(" \n arac turu kamyon \n arac cezalidir \n ceza parasi:ceza parasi:2000 TL"); 		
	 } 	  	
 else 
 {
   printf("\nkamyon\nGecebilirsiniz");	
 }

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
