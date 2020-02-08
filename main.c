#include <stdio.h>
#include <stdlib.h>

int main()
{
    //definisikan variabel
    float modal;
    float jumlah_produk;
    float laba_tiap_produk;
    float harga_jual;


    printf("Masukkan modal yang dikeluarkan(Rp): ");
    scanf("%f", &modal);
    printf("Masukkan jumlah produk yang dihasilkan: ");
    scanf("%f", &jumlah_produk);
    printf("Masukkan laba tiap produk yang diinginkan(Rp): ");
    scanf("%f", &laba_tiap_produk);

    //hitung harga jual
    harga_jual = (modal/jumlah_produk) + laba_tiap_produk;
    //tampilkan hasil
    printf("\n -> Jadi, harga jual yang diterapkan agar laba tiap produknya Rp %.2f adalah sebesar Rp %.2f\n\n", laba_tiap_produk,harga_jual);

    return 0;
}
