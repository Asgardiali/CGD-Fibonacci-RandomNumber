#include<stdio.h>
#include<conio.h>
#include<stdlib.h>                                            //K�t�phaneleri programa tan�tt�m.

void Fibonacci(int i);                                        // Fibonacci ad�nda integer tipli alt fonksiyon olu�turdum.
int main(void)                                                //Main fonksiyonunu ba�latt�m.
{

	int n;                                                     //De�i�ken tan�mlamas� yapt�m.
    printf("Please Enter n For Fibonacci Series\n");           //Fibonacci serisinin ka�a kadar gitmesini kullan�c�dan girmesini istedim.
	scanf("%d",&n);
	Fibonacci(n);                                              //Fibonacci alt fonksiyonunu n de�i�keni girerek �a��rd�m.

}

 void Fibonacci(int i)                                         //Fibonacci alt fonksiyonunu olu�turdum.
{
	int x=0;                                                   //De�i�kenleri tan�mlad�m.
	int y=1;
	int dizi[i];                                               //Sonu�lar� diziye yaz�lmas� i�in integer tipli dizi tan�mlad�m.
	dizi[0]=0;                                                 //Dizini ba�lang�c�n� 0 olarak tan�mlad�m.
	
	for(int n=1;n<=i;n++)                                      //Kullan�c�dan al�nan de�ere kadar Fibonacci serisinin bulunmas� i�in for d�ng�s�
	{
    int toplam=x+y;
	x=y;
	y=toplam;
	dizi[n]=x;                                                 //De�erleri s�ras�yla diziye yerle�tirdim. y'nin de�erini x'e atad�m.
	dizi[n+1]=y;                                               //toplam'�n de�erini y'ye atad�m.
	}
	
	for(int k=0;k<=i;k++)                                      //Diziyi yazd�rabilmek i�in olu�turdum.
	printf("Fibo Number:%d\n",dizi[k]);


}
