/*Nama File : gayaSentr*/
/*Deskripsi : Menghitung dan menampilkan Massa F*/
/*Pembuat   : Gigih Haidar Falah- 24060122140150*/
/*Tanggal   : Senin, 27, 23.09*/

#include <stdio.h>
#include <stdbool.h>

 main()
{
    float m;
    float v;
    float r;
    float F;

    printf("Masukkan nilai (m): ");
    scanf("%f", &m);
    printf("Masukkan nilai (v): ");
    scanf("%f", &v);
    printf("Masukkan nilai (r): ");
    scanf("%f", &r);

    F = m*(v*v/r*);
    printf("F = %f", F);
}


