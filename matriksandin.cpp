#include <iostream>
#include <stdio.h>     //pemanggilan header standard input output
#include <stdlib.h>    //pemanggilan header standard library

int main(void)   //fungsi utama
{
float mat_a [2][2], mat_b [2][2], hasil[2][2], detB, mat_b_invers[2][2];   //deklarasi matrik array 2 dimensi
int pilih,i,j,k,keluar=1;
	do{
	printf("PERHITUNGAN MATRIX\n");
    printf("[1]penjumlahan\n[2]pengurangan\n[3]perkalian\n[4]pembagian\n[0]keluar\n\n");
    printf("Masukkan Pilihan= ");
    scanf("%d",&pilih);  //menerima inputan dan menyimpan
   
    switch (pilih)       //pernyataan berdasarkan variabel inputan dari user
    {
    case 1:       //kondisi yang dijalankan jika user menginputkan angka 1
                        //input matrix a 2x2
        for (i=0; i<2; i++){  //perulangan untuk baris
        for (j=0; j<2; j++){  //perulangan untuk kolom
           printf("masukkan isi matriks A [%d][%d] ",i,j);   //meminta inputan dari user untuk isi dari setiap matrik a
		   scanf("%f",&mat_a[i][j]);  //menyimpan data inputan
            }
		}
    printf("\n"); //baris baru
    //input matrix b 2x2
    for (i=0; i<2; i++){  //perulangan untuk baris                  
		for (j=0; j<2; j++){  //perulangan untuk kolom                       
    	printf("masukkan isi matriks B [%d][%d] ",i,j);   //meminta inputan dari user untuk isi dari setiap matrik b
    	scanf("%f",&mat_b[i][j]);  //menyimpan data inputan
        }
    }  
    //pertambahan matrix
    printf("\n hasil pertambahan \n\n");
    for (i=0; i<2; i++){
        for (j=0; j<2; j++){                      
        	hasil[i][j]=mat_a[i][j]+mat_b[i][j];     //menampilkan hasil pertambahan matrik a dan b
	    }
	}
	printf("%2.0f\t %2.0f\t \t %2.0f\t %2.0f\t \t %2.0f\t %2.0f\t \n",mat_a[0][0],mat_a[0][1], mat_b[0][0], mat_b[0][1], hasil[0][0], hasil[0][1]);
    printf("\t\t + \t\t\t =\n");
	printf("%2.0f\t %2.0f\t \t %2.0f\t %2.0f\t \t %2.0f\t %2.0f\t \n\n\n",mat_a[1][0],mat_a[1][1], mat_b[1][0], mat_b[1][1], hasil[1][0], hasil[1][1]);
	break;
	case 2:       //kondisi yang dijalankan jika user menginputkan angka 2
    //input matrix a 2x2
	for (i=0; i<2; i++){                 
    	for (j=0; j<2; j++){
            printf("masukkan isi matriks A [%d][%d] ",i,j);
	        scanf("%f",&mat_a[i][j]);
	     }
	}
	printf("\n");

	//input matrix b 2x2
	for (i=0; i<2; i++){                
		for (j=0; j<2; j++){
			printf("masukkan isi matriks B [%d][%d] ",i,j);
			scanf("%f",&mat_b[i][j]);
	    }
	}
  
    //pengurangan matrix
	printf("\n hasil pengurangan \n\n");
	for (i=0; i<2; i++){                
		for (j=0; j<2; j++){
			hasil[i][j]=mat_a[i][j]-mat_b[i][j];     //menampilkan hasil pengurangan matrik a dengan b
	    }
	}
    printf("%2.0f\t %2.0f\t \t %2.0f\t %2.0f\t \t %2.0f\t %2.0f\t \n",mat_a[0][0],mat_a[0][1], mat_b[0][0], mat_b[0][1], hasil[0][0], hasil[0][1]);
	printf("\t\t - \t\t\t =\n");
	printf("%2.0f\t %2.0f\t \t %2.0f\t %2.0f\t \t %2.0f\t %2.0f\t \n\n\n",mat_a[1][0],mat_a[1][1], mat_b[1][0], mat_b[1][1], hasil[1][0], hasil[1][1]);
	break; 
	case 3:       //kondisi yang dijalankan jika user menginputkan angka 3
    //input matrix a 2x2
	for (i=0; i<2; i++){
		for (j=0; j<2; j++){                       
			printf("masukkan isi matriks A [%d][%d] ",i,j);
        	scanf("%f",&mat_a[i][j]);
        }
	}
    printf("\n"); 
	//input matrix b 2x2
	for (i=0; i<2; i++){                       
		for (j=0; j<2; j++){
			printf("masukkan isi matriks B [%d][%d] ",i,j);
	        scanf("%f",&mat_b[i][j]);
	    }
	}
	//perkalian matrix
	printf("\n hasil perkalian matrik A dan B \n\n");
	//proses mencari hasil perkalian matrix
	for(i=0; i<2; i++){                        
	    for (j=0; j<2; j++){                              
			for (k=0; k<2; k++)                            
	           hasil[i][j]=mat_a[i][k]*mat_b[k][j]+mat_a[k][i]*mat_b[k][j];	
		}
	}    
	//menampilkan hasil perkalian matrix a dan matrix b
	//printf("= \n\n");
	for(i=0;i<2;i++) {                       
		for(j=0;j<2;j++){
            hasil[i][j]=0;
				for(k=0;k<2;k++){
					hasil[i][j]=hasil[i][j]+mat_a[i][k]*mat_b[k][j];
	            }
	    }
	}
	printf("%2.0f\t %2.0f\t \t %2.0f\t %2.0f\t \t %2.0f\t %2.0f\t \n",mat_a[0][0],mat_a[0][1], mat_b[0][0], mat_b[0][1], hasil[0][0], hasil[0][1]);
	printf("\t\t x \t\t\t =\n");
	printf("%2.0f\t %2.0f\t \t %2.0f\t %2.0f\t \t %2.0f\t %2.0f\t \n\n\n",mat_a[1][0],mat_a[1][1], mat_b[1][0], mat_b[1][1], hasil[1][0], hasil[1][1]);
	break;
	case 4:       //kondisi yang dijalankan jika user menginputkan angka 4
	//input matrix a 2x2
	for (i=0; i<2; i++){
		for (j=0; j<2; j++){
			printf("masukkan isi matriks A [%d][%d] ",i,j);
			scanf("%f",&mat_a[i][j]);
		}
	}
	printf("\n");
	//input matrix b 2x2
	for (i=0; i<2; i++) {
		for (j=0; j<2; j++){
			printf("masukkan isi matriks B [%d][%d] ",i,j);
			scanf("%f",&mat_b[i][j]);
		}
	}
	detB = 1/((mat_b[0][0]*mat_b[1][1])-(mat_b[0][1]*mat_b[1][0]));
	//mencari nilai determinan dari matrik B
	
	mat_b_invers[0][0] = detB*mat_b[1][1];   //mencari invers setiap nilai pada matrik B
	mat_b_invers[0][1] = detB*(-mat_b[0][1]);
	mat_b_invers[1][0] = detB*(-mat_b[1][0]);
	mat_b_invers[1][1] = detB*mat_b[0][0];
	
	printf("\nHasil Pembagian:\n\n");
	for (i=0; i<2; i++){                  
		for (j=0; j<2; j++){                         
			hasil[i][j]=0;
				for (k=0; k<2; k++) {
					hasil[i][j]+=mat_a[i][k]*mat_b_invers[k][j];   //mencari hasil pembagian akhir dari matrik a dan b dengan mengalikan matrik a dengan hasil invers matrik B
				}
		}
	}
	printf("%2.0f\t %2.0f\t \t %2.0f\t %2.0f\t \t %2.0f\t %2.0f\t \n",mat_a[0][0],mat_a[0][1], mat_b[0][0], mat_b[0][1], hasil[0][0], hasil[0][1]);
	printf("\t\t : \t\t\t =\n");
	printf("%2.0f\t %2.0f\t \t %2.0f\t %2.0f\t \t %2.0f\t %2.0f\t \n\n\n",mat_a[1][0],mat_a[1][1], mat_b[1][0], mat_b[1][1], hasil[1][0], hasil[1][1]);
	break;
	case 0:       //jika user menginputkan angka 0
	keluar=0;     //kondisi variabel keluar bernilai 0
	system("exit");      //mengeluarkan program
	break;
	default:      //jika user menginputkn angka diluar pilihan
	printf("Anda menginputkan diluar menu pilihan!!\n\n");
	break;
	}
	}
	while (keluar==1);   //mengulang kondisi diatas jika uaser menginputkan angka 1-4
	system("pause");     //menahan eksekusi program
	return(0);    //mengembalikan nlai fungsi utama yang bertipe integer
	}
