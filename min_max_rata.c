/* PROGRAM MENGHITUNG NILAI MAXIMUM-MINIMUM-RATA-RATA */

#include <stdio.h>
#include <stdlib.h>

int main() {
   int n,i,j;
   float arr[50], total;
   
   
   while(1) {
      printf("\nJumlah Data (n): ");
      scanf("%d",&n);
      printf("\n");
      
      if(n<=0 || n>50){
        printf("\t\tJUMLAH DATA ERROR\n");
	printf("\t\tInput Data n (0 < n <=50)\n\n");
        continue;
      }
      
      
      else if(n>0 && n<=50){
	for(i=0; i<n; i++){
        printf("Data ke %d : ",i+1);
	scanf("%f",&arr[i]);
        total += arr[i];                           /* mencari jumlah total elemen dalam array i */
	}

        i=0;
        do { 
           i++;
           for(j=n-1; j>i; j--)
              if(arr[j] < arr[j-1]) {              /* mengurutkan data dengan bubble sort */
                int a = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = a;
              }
        } while(i<n);      

        printf("\nNilai Maximum : %g\n",arr[n-1]);  
        printf("Nilai Minimum : %g\n",arr[1]);
	
	float rata = total/n;
	printf("Rata-rata     : %g\n\n",rata);          /* %g , angka 0 dibelakang koma tidak ditampilkan */
	break;      
      }
   }
   
return EXIT_SUCCESS;
}
