#include <stdio.h>
#include <conio.h>
#include <stdlib.h>                                             //Kütüphaneleri ekledim.
#include <stdbool.h>

int main(void)                                                  //Main fonksiyonunu oluþturdum.
{
	int tryNumber=0;                                            //Deneme sayýsýný bulmak için tryNumber adýnda deðiþken tanýmladým.
	
	while(1){                                                   //Program akýþýný sürekli olarak devam ettirmek için while döngüsü.


 	char guess;                                                 //Tahmin edilen harfi karakter olarak tanýmladým.
 	char keep;
																//Alfabenin olduðu bir dizi oluþturdum. 26 harten oluþmaktadýr.
	int alp[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	
	int random;                                                 //Oluþturduðum diziden rastgele bir harf almak için random deðiþkeni oluþturdum.
	random=rand()%25;                                           //rand() fonksiyonunu kullanarak rastgele seçim yaptýrdým.
	keep=alp[random];                                           //keep deðiþkkeni içerisinde rastgele gelen sayýyý tuttum.
	bool finish=false;                                          //Boolean olarak deðiþken tanýmlayýp ilk deðeri olarak false verdim.
																//bunu doðru cevaba ulaþýlýp ulaþýlmadýðýný kontrol etmek için yaptým.
	
 	printf("I have selected a character between A and Z.\n");   //Program baþý mesajlarý.
	printf("Try to guess the character selected by me!\n");
	printf("What is your guess?\n");
	
	while(finish==false)                                        //Boolean deðer false oldukça program tekrardan tahmin isteyecek.
	{

	++tryNumber;                                               //Her while döngüsüne girdikçe deneme sayýsýný arttýrdým.
		
	printf("Please enter your guess...\n\n");                  //Kullanýcýdan tahmin aldým.
	scanf("%c",&guess);
	
	for(int i=0;i<=25;i++){                                    //Kullanýcýnýn giridiði karakterin doðru olup olmadýðýný kontrol ettim.
	
			if(alp[i]==guess)
			{
				if(random>i)                                   //Girilen karektere göre random  deðerin nerede olduðunu taarif ettim.
				printf("Way ahead! Please try again.\n\n");
				else if(random==i)
				break;
				else
				printf("Way behind! Please try again.\n\n");
			}
	}
	
 if(guess==keep)                                              //Girilen karakter doðru ise mesajý verdim ve boolean deðiþkeni true olarak deðiþtirdim.
	{
		printf("Great! Your guess is right!\n\n");
		finish=true;                                          //Bundan dolayý tekrar While döngüsüne girmeyecek Program yeniden baþlayacaktýr.
	}
}

if(tryNumber<5)                                               //Sayýlan deneme sayýsýna göre verilecek mesaj ayarlarý bu þekildedir.
	{
		printf("Either you know the secret or you are lucky!\n\n\n");
		tryNumber=0;
	}
	else if(tryNumber==5)
	{
		printf("I guess you know the secret!\n\n\n");
		tryNumber=0;
	}
	else
	{
		printf("You should be able to do better!\n\n\n");
		tryNumber=0;
	}
}



}

