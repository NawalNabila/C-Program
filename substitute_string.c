/* PROGRAM REPLACE KARAKTER*/

#include <stdio.h>
 
char *substitute(char *, char, char);                                                 /* prototype fungsi */

int main(void) {
      char arr[50], cari, ganti;
      printf("\nMasukkan Sebuah String\t: ");
      scanf("%[^\n]", arr); 
      printf("Karakter yang dicari\t: ");
      scanf(" %c", &cari);                                                            /* input huruf yang akan diganti */
      printf("Karakter Pengganti\t: ");
      scanf(" %c", &ganti);                                                           /* input huruf pengganti */
      printf("\nHasil Substitute String\t>>> %s\n\n", substitute(arr, cari, ganti));  /* pemanggilan fungsi */
      return 0;
}

char *substitute(char *data, char find, char replace) {
      char *pdata = data;                                                             /* pointer menunjuk data pada alamat nol */
      for ( ; *data != '\0'; ) {
        if(*data==find) {                                                             /* jika data = karakter yang dicari */
          *data=replace;                                                       /* maka data diganti dengan karakter pengganti yang diinput */
        }
        else {
          data++;                                                                    /* jika tidak ada karakter yang dicari, pointer di ++ */
        }
      } 
      return pdata;
}
