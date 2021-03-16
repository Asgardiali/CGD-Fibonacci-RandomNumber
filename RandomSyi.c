#include <stdio.h>
#include <conio.h>
#include <stdlib.h>                                             //K�t�phaneleri ekledim.
#include <stdbool.h>

int main(void)                                                  //Main fonksiyonunu olu�turdum.
{
	int tryNumber=0;                                            //Deneme say�s�n� bulmak i�in tryNumber ad�nda de�i�ken tan�mlad�m.
	
	while(1){                                                   //Program ak���n� s�rekli olarak devam ettirmek i�in while d�ng�s�.


 	char guess;                                                 //Tahmin edilen harfi karakter olarak tan�mlad�m.
 	char keep;
																//Alfabenin oldu�u bir dizi olu�turdum. 26 harten olu�maktad�r.
	int alp[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	
	int random;                                                 //Olu�turdu�um diziden rastgele bir harf almak i�in random de�i�keni olu�turdum.
	random=rand()%25;                                           //rand() fonksiyonunu kullanarak rastgele se�im yapt�rd�m.
	keep=alp[random];                                           //keep de�i�kkeni i�erisinde rastgele gelen say�y� tuttum.
	bool finish=false;                                          //Boolean olarak de�i�ken tan�mlay�p ilk de�eri olarak false verdim.
																//bunu do�ru cevaba ula��l�p ula��lmad���n� kontrol etmek i�in yapt�m.
	
 	printf("I have selected a character between A and Z.\n");   //Program ba�� mesajlar�.
	printf("Try to guess the character selected by me!\n");
	printf("What is your guess?\n");
	
	while(finish==false)                                        //Boolean de�er false olduk�a program tekrardan tahmin isteyecek.
	{

	++tryNumber;                                               //Her while d�ng�s�ne girdik�e deneme say�s�n� artt�rd�m.
		
	printf("Please enter your guess...\n\n");                  //Kullan�c�dan tahmin ald�m.
	scanf("%c",&guess);
	
	for(int i=0;i<=25;i++){                                    //Kullan�c�n�n giridi�i karakterin do�ru olup olmad���n� kontrol ettim.
	
			if(alp[i]==guess)
			{
				if(random>i)                                   //Girilen karektere g�re random  de�erin nerede oldu�unu taarif ettim.
				printf("Way ahead! Please try again.\n\n");
				else if(random==i)
				break;
				else
				printf("Way behind! Please try again.\n\n");
			}
	}
	
 if(guess==keep)                                              //Girilen karakter do�ru ise mesaj� verdim ve boolean de�i�keni true olarak de�i�tirdim.
	{
		printf("Great! Your guess is right!\n\n");
		finish=true;                                          //Bundan dolay� tekrar While d�ng�s�ne girmeyecek Program yeniden ba�layacakt�r.
	}
}

if(tryNumber<5)                                               //Say�lan deneme say�s�na g�re verilecek mesaj ayarlar� bu �ekildedir.
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

