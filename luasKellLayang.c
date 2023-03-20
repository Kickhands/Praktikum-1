/*Nama File : luasKellLayang*/
/*Deskripsi : Menghitung dan menampilkan Luas dan Keliling Layang layang*/
/*Pembuat   : Gigih Haidar Falah- 24060122140150*/
/*Tanggal   : Senin, 27, 23.09*/

#include <stdio.h>
#include <stdbool.h>

 main()
{
    float s1;
    float s2;
    float d1;
    float d2;
    float Luas;
    float Keliling;

    printf("Masukkan nilai (s1): ");
    scanf("%f", &s1);
    printf("Masukkan nilai (s2): ");
    scanf("%f", &s2);
    printf("Masukkan nilai (d1): ");
    scanf("%f", &d1);
    printf("Masukkan nilai (d2 : ");
    scanf("%f", &d2) ;

    Luas = (d1*d2)/2 ;
    Keliling = 2*(s1+s2);
    printf("Luas = %f", Luas);
    printf("Keliling = %f", Keliling);
}



