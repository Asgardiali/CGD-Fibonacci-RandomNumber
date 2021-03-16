#include <stdio.h>
int func(int n1,int n2);                                    //Altta oluþturduðum func alt fonksiyonu için tanýmla yaptým.
int main(void)                                              //Ana(Main) fonksiyonunu baþlattým.
{
	while(1)                                                //While sonsuz döngüsünü oluþturdum. Sürekli çalýþtýrmak için yaptým.
{
	printf("!!!PROGRAM START!!!\n");
	int a=0;                                                // a ve b olarak iki adet integer sayý tanýmladým.
	int b=0;
	printf("Enter first integers: ");                       // Integer iki sayýnýn kulannýcýdan girilmesini istedim.
	scanf("%d", &a);
    printf("Enter second integers: ");
	scanf("%d", &b);

    int gcd1=func( a, b) ;                                   // Girilen a ve b sayýlarý ile func fonksiyonunu çaðýrdým.
	printf("G.C.D of %d and %d is %d\n\n", a, b, func( a, b)); // Func fonksiyonu sonucunda dönen deðeri ekrana yazdýrdým.
 }
}

int func(int n1,int n2)                                     //func fonksiyonunu oluþturdum.
{
	int  i, gcd;                                            //Deðiþkenleri tanýmladým.

	for(i=1; i <= n1 && i <= n2; ++i)                       // For döngüsü oluþturdum. GCD'yi elde etmek amacýyla oluþturdum.
	{
        if(n1%i==0 && n2%i==0)                              //Bölümünden kalan bir olursa GCD olarak elde ediliyor.
            gcd = i;
    }
    return gcd;                                             //Main foksiyonuna gcd deðerini döndüryorum.
    

}
