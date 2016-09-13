/* PROGRAM MEMBALIKKAN KALIMAT */

#include <stdio.h>
#include <ctype.h>

int main() {
   char ch[225], *pch;
   int a;

   printf("\nEnter Your Sentence : ");
   scanf("%[^\n]",ch);                          /* %[^\n] digunakan agar spasi ikut ditampilkan */

   for(a=0; ch[a] !='\0'; a++) {                /* ch[a] !='\0' , agar \0 tidak ikut ditampilkan */
      ch[a] = tolower(ch[a]);
   }
   
   pch = &ch[a];                                /* pointer ke elemen dalam array ch[a] */
   printf("\nAfter Reversed >>> ");

   do {
     pch--;                          /* pch--, dari index terakhir turun satu-satu hingga pada index 0 akan berhenti */
     putchar(*pch);                  /* menampilkan huruf yang ditunjuk oleh pointer pch */
   } while(pch != &ch[0]);                      
   
   putchar('\n');
   putchar('\n');

return 0;
}
