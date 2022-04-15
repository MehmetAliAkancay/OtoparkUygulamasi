#include <stdio.h>
#include <stdlib.h>

typedef struct
    {
        char saat[20];
    }Giris;

typedef struct
    {
        char plaka[40];
        char model[40];
        char renk[40];
        Giris GirisSaati;
    }AracOzellik;
AracOzellik Araclar[1000];

void AracEkle(int a)
{
    int i;
    printf("-----------------ARAC EKLEME------------------\n");
    for(i=0;i<a;i++)
    {

        printf("  %d.Aracin plakasini giriniz:",i+1);
        gets(Araclar[i].plaka);
        printf("  %d.Aracin modelini giriniz:",i+1);
        gets(Araclar[i].model);
        printf("  %d.Aracin rengini giriniz:",i+1);
        gets(Araclar[i].renk);
        printf("  %d.Aracin giris saatini giriniz:",i+1);
        gets(Araclar[i].GirisSaati.saat);
        printf("\n");
    }
}

void AracListele(int n)
{
    int i;
    printf("--------------OTOPARKDAKI ARACLAR-------------\n");
    for(i=0;i<n;i++)
    {

        printf("  %d.Aracin plakasi:%s\n",i+1,Araclar[i].plaka);
        printf("  %d.Aracin modeli:%s\n",i+1,Araclar[i].model);
        printf("  %d.Aracin rengi:%s\n",i+1,Araclar[i].renk);
        printf("  %d.Aracin giris saati:%s",i+1,Araclar[i].GirisSaati.saat);
        printf("\n");printf("\n");
    }

}

int main()
{
    int GirilecekAracsayisi;
    printf("Lutfen girilecek arac sayisini giriniz:");
    scanf("%d",&GirilecekAracsayisi);
    printf("\n");
    getchar();
    AracEkle(GirilecekAracsayisi);
    AracListele(GirilecekAracsayisi);
    return 0;
}
