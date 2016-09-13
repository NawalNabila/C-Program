// Program Menghitung Pecahan Mata Uang //

#include <stdio.h>
#include <stdlib.h>

int main(void){
   unsigned i, jumlah, uang, pecahan[13]={100000, 50000, 20000, 10000, 5000, 1000, 500, 200, 100, 50, 10, 5, 1}; // menggunakan unsigned agar tidak termasuk minus, karena tidak ada mata uang yang minus //

   printf("\nMasukkan Jumlah Uang : ");
   scanf("%u", &uang); // %u ,karena unsigned //

   printf("\nOutput : ");
   printf("\n-------------------------\n");
   printf(" Pecahan         Jumlah");
   printf("\n-------------------------");

   for (i=0; i<13; i++) { 
     jumlah = uang / pecahan[i]; // menghitung jumlah lembar uang //
     uang %= pecahan[i]; // uang dimodulo dengan pecahan, agar uang itu merupakan sisa dari total yang di input //
     printf("\n%8u %13u", pecahan[i], jumlah); // menggunakan %8 dan %13 untuk mencetak output yang rapi, agar rata kanan, jika digunakan minus"-" misal %-8 , maka akan rata kiri //
   }

   printf("\n-------------------------\n\n");

  return EXIT_SUCCESS;
}


