#include<stdio.h>
#include<conio.h>
#include<stdlib.h>                                            //Kütüphaneleri programa tanýttým.

void Fibonacci(int i);                                        // Fibonacci adýnda integer tipli alt fonksiyon oluþturdum.
int main(void)                                                //Main fonksiyonunu baþlattým.
{

	int n;                                                     //Deðiþken tanýmlamasý yaptým.
    printf("Please Enter n For Fibonacci Series\n");           //Fibonacci serisinin kaça kadar gitmesini kullanýcýdan girmesini istedim.
	scanf("%d",&n);
	Fibonacci(n);                                              //Fibonacci alt fonksiyonunu n deðiþkeni girerek çaðýrdým.

}

 void Fibonacci(int i)                                         //Fibonacci alt fonksiyonunu oluþturdum.
{
	int x=0;                                                   //Deðiþkenleri tanýmladým.
	int y=1;
	int dizi[i];                                               //Sonuçlarý diziye yazýlmasý için integer tipli dizi tanýmladým.
	dizi[0]=0;                                                 //Dizini baþlangýcýný 0 olarak tanýmladým.
	
	for(int n=1;n<=i;n++)                                      //Kullanýcýdan alýnan deðere kadar Fibonacci serisinin bulunmasý için for döngüsü
	{
    int toplam=x+y;
	x=y;
	y=toplam;
	dizi[n]=x;                                                 //Deðerleri sýrasýyla diziye yerleþtirdim. y'nin deðerini x'e atadým.
	dizi[n+1]=y;                                               //toplam'ýn deðerini y'ye atadým.
	}
	
	for(int k=0;k<=i;k++)                                      //Diziyi yazdýrabilmek için oluþturdum.
	printf("Fibo Number:%d\n",dizi[k]);


}
