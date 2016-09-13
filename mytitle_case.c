/* PROGRAM MENGUBAH KALIMAT DALAM FORMAT TITLE CASE */

#include <stdio.h>
#include <ctype.h>

int main() {
   char huruf[225], *phuruf = &huruf[0];

/* proses user menginput kalimat */                                
   printf("\nEnter Your Sentence : ");
   scanf("%[^\n]",huruf);
   

/* proses membuat title case */
   int i=0;                                              
   do {
      i++;
      huruf[i] = tolower(huruf[i]);                     /* semua huruf dirubah menjadi huruf kecil dulu */
   } while(huruf[i] !='\0');                            /* '\0' tidak termasuk */
   
   *phuruf = toupper(huruf[0]);                         /* huruf pada index 0 dirubah menjadi kapital */
   do {
   phuruf++;
   if(*phuruf == ' '){                                  /* jika ada spasi, maka pointer di ++ kan */
        ++phuruf;
        *phuruf = toupper(*phuruf);                     /* huruf pertama setelah spasi dirubah menjadi kapital */
      }
   } while(*phuruf !='\0');

   printf("\nAfter Modified >>> %s\n\n",huruf);
   
return 0;
}
