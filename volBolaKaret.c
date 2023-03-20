/*Nama File : volBolaKaret*/
/*Deskripsi : Menghitung dan menampilkan Volume Bola Karet*/
/*Pembuat   : Gigih Haidar Falah- 24060122140150*/
/*Tanggal   : Senin, 27, 23.09*/

#include <stdio.h>
#include <stdbool.h>

 main()
{
    int r;
    int Vb;
    int Vk;
    const float phi=3.14 ;

    printf("Masukkan nilai (r): ");
    scanf("%d", &r);

    Vb = 4/3*(phi*r*r*r) ;
    Vk = 1/2 * Vb ;
    printf("\n Vb = %d", Vb);
    printf("\n Vk = %d", Vk);
}



