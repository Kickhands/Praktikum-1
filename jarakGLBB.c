/*Nama File : JarakGLBB*/
/*Deskripsi : Menghitung dan menampilkan Jarak s*/
/*Pembuat   : Gigih Haidar Falah- 24060122140150*/
/*Tanggal   : Senin, 27, 23.09*/

#include <stdio.h>
#include <stdbool.h>

 main()
{
    float V0;
    float t;
    float a;
    float s;

    printf("Masukkan nilai (V0): ");
    scanf("%f", &V0);
    printf("Masukkan nilai (t): ");
    scanf("%f", &t);
    printf("Masukkan nilai (a): ");
    scanf("%f", &a);

    s = V0*t+1/2*(a*t*t);
    printf("Jarak S = %f", s);
}

