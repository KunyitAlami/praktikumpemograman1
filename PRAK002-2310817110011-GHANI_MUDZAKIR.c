/*
Buatlah program yang dapat menghasilkan output sebagaimana berikut:
Output
Selamat Pagi, Nama Anda
Selamat Siang, Nama Anda
Selamat Malam, Nama Anda
*/

#include <stdio.h>

int main()
{
    //kita akan buat sebuah command user input untuk memasukan nama dengan fgets
    //kita akan buat sebuah variabel char nya dulu

    char nama_lengkap[100];
    ///artinya kita membuat sebuah array char yang berisi 0-99 indeks
    printf("Masukan nama lengkap anda : ");
    fgets(nama_lengkap, sizeof(nama_lengkap), stdin);
    //didalam c, fgets lebih sering digunakan dalam pengambilan user input string daripada scanf

    printf("\nSelamat Pagi %s\n", nama_lengkap);
    printf("Selamat Siang %s\n", nama_lengkap);
    printf("Selamat Malam %s\n", nama_lengkap);

    return 0;
}




