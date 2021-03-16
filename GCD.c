#include <stdio.h>
int func(int n1,int n2);                                    //Altta olu�turdu�um func alt fonksiyonu i�in tan�mla yapt�m.
int main(void)                                              //Ana(Main) fonksiyonunu ba�latt�m.
{
	while(1)                                                //While sonsuz d�ng�s�n� olu�turdum. S�rekli �al��t�rmak i�in yapt�m.
{
	printf("!!!PROGRAM START!!!\n");
	int a=0;                                                // a ve b olarak iki adet integer say� tan�mlad�m.
	int b=0;
	printf("Enter first integers: ");                       // Integer iki say�n�n kulann�c�dan girilmesini istedim.
	scanf("%d", &a);
    printf("Enter second integers: ");
	scanf("%d", &b);

    int gcd1=func( a, b) ;                                   // Girilen a ve b say�lar� ile func fonksiyonunu �a��rd�m.
	printf("G.C.D of %d and %d is %d\n\n", a, b, func( a, b)); // Func fonksiyonu sonucunda d�nen de�eri ekrana yazd�rd�m.
 }
}

int func(int n1,int n2)                                     //func fonksiyonunu olu�turdum.
{
	int  i, gcd;                                            //De�i�kenleri tan�mlad�m.

	for(i=1; i <= n1 && i <= n2; ++i)                       // For d�ng�s� olu�turdum. GCD'yi elde etmek amac�yla olu�turdum.
	{
        if(n1%i==0 && n2%i==0)                              //B�l�m�nden kalan bir olursa GCD olarak elde ediliyor.
            gcd = i;
    }
    return gcd;                                             //Main foksiyonuna gcd de�erini d�nd�ryorum.
    

}
