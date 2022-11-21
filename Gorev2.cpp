#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Turkish");
	int sayi;
	cout << "1-999 arasý bir sayý giriniz:";
	cin >> sayi;
	
	string strsayi = to_string(sayi);
	int count = 0;
	for(int i = 0; strsayi[i]; i++){
		count++;
	}
	
	string yazilisayi, yuzler, onlar, birler;
	
	if(count >3){
		cout<< "aralýðýn dýþýna çýktýnýz";
	}
	else{
		for(int j = count -1; strsayi[j]; j-=1){
			if(j == count -1){
				switch (strsayi[j]){
					case '1':
						birler = "bir";
						break;
					case '2':
						birler = "iki";
						break;
					case '3':
						birler = "üç";
						break;
					case '4':
						birler = "dört";
						break;
					case '5':
						birler = "beþ";
						break;
					case '6':
						birler = "altý";
						break;
					case '7':
						birler = "yedi";
						break;
					case '8':
						birler = "sekiz";
						break;
					case '9':
						birler = "dokuz";
						break;
					default:
						break;	
				}
			}
			
			if(j == count-2){
				switch (strsayi[j]){
					case '1':
						onlar = "on";
						break;
					case '2':
						onlar = "yirmi";
						break;
					case '3':
						onlar = "otuz";
						break;
					case '4':
						onlar = "kýrk";
						break;
					case '5':
						onlar = "elli";
						break;
					case '6':
						onlar = "altmýþ";
						break;
					case '7':
						onlar = "yetmiþ";
						break;
					case '8':
						onlar = "seksen";
						break;
					case '9':
						onlar = "doksan";
						break;
					case '0':
						break;
					default:
						cout << "yanlýþ bir þeyler girdiniz" ;
						return 0;
						
			    } 
		    }
		    
		    if(j == count-3){
		    	switch (strsayi[j]){
					case '1':
						yuzler = "yüz";
						break;
					case '2':
						yuzler = "ikiyüz";
						break;
					case '3':
						yuzler = "üçyüz";
						break;
					case '4':
						yuzler = "dörtyüz";
						break;
					case '5':
						yuzler = "beþyüz";
						break;
					case '6':
						yuzler = "altýyüz";
						break;
					case '7':
						yuzler = "yediyüz";
						break;
					case '8':
						yuzler = "sekizyüz";
						break;
					case '9':
						yuzler = "dokuzyüz";
						break;
					case '0':
						break;
					default:
						cout << "yanlýþ bir þeyler girdiniz" ;
						return 0;	
		    	}
			}
		}
		yazilisayi = yuzler + onlar + birler;
		
		cout << yazilisayi;
	}
	return 0;
}
