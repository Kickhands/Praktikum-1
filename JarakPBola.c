/*Nama File : JarakPBola*/
/*Deskripsi : Menghitung dan menampilkan y*/
/*Pembuat   : Gigih Haidar Falah- 24060122140150*/
/*Tanggal   : Senin, 27, 23.09*/

#include <stdio.h>
#include <stdbool.h>

 main()
{
    float V0;
    float t;
    float g;
    float y;

    printf("Masukkan nilai (V0): ");
    scanf("%f", &V0);
    printf("Masukkan nilai (t): ");
    scanf("%f", &t);
    printf("Masukkan nilai (g): ");
    scanf("%f", &g);

    y = V0*t-1/2*(g*t*t);
    printf("y = %f", y);
}

