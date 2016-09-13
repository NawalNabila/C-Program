// Program Menentukan Tahun Kabisat //
#include <stdio.h>

int main() {
   int Year;
      
     printf("\nPlease Enter 4 Digits\n"); // penjelasan agar user hanya memasukkan 4 digit angka //
     printf("\nEnter The Year : ");
     scanf("%d",&Year);

	if(Year%400==0){ // memakai modulo, agar tahun yang dimasukkan habis dibagi 400 //
	   printf("\n");
	   printf("\t\t%d IS THE LEAP YEAR\n",Year);
	   printf("\n");
	}
	 else if(Year%100==0){
		 printf("\n");
	         printf("\t\t%d ISN'T THE LEAP YEAR\n",Year);
		 printf("\n");
	 }
	  else if(Year%4==0){
		  printf("\n");
	          printf("\t\t%d IS THE LEAP YEAR\n",Year);
		  printf("\n");
	  }
	   else{ // jika tidak habis dibagi 400, 100 dan 4, maka pilihan terakhir yang akan dicetak //
		printf("\n");
	        printf("\t\t%d ISN'T THE LEAP YEAR\n",Year);
		printf("\n");
	   }
     
     return 0;
}
