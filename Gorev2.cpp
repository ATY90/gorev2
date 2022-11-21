#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Turkish");
	int sayi;
	cout << "1-999 aras� bir say� giriniz:";
	cin >> sayi;
	
	string strsayi = to_string(sayi);
	int count = 0;
	for(int i = 0; strsayi[i]; i++){
		count++;
	}
	
	string yazilisayi, yuzler, onlar, birler;
	
	if(count >3){
		cout<< "aral���n d���na ��kt�n�z";
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
						birler = "��";
						break;
					case '4':
						birler = "d�rt";
						break;
					case '5':
						birler = "be�";
						break;
					case '6':
						birler = "alt�";
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
						onlar = "k�rk";
						break;
					case '5':
						onlar = "elli";
						break;
					case '6':
						onlar = "altm��";
						break;
					case '7':
						onlar = "yetmi�";
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
						cout << "yanl�� bir �eyler girdiniz" ;
						return 0;
						
			    } 
		    }
		    
		    if(j == count-3){
		    	switch (strsayi[j]){
					case '1':
						yuzler = "y�z";
						break;
					case '2':
						yuzler = "ikiy�z";
						break;
					case '3':
						yuzler = "��y�z";
						break;
					case '4':
						yuzler = "d�rty�z";
						break;
					case '5':
						yuzler = "be�y�z";
						break;
					case '6':
						yuzler = "alt�y�z";
						break;
					case '7':
						yuzler = "yediy�z";
						break;
					case '8':
						yuzler = "sekizy�z";
						break;
					case '9':
						yuzler = "dokuzy�z";
						break;
					case '0':
						break;
					default:
						cout << "yanl�� bir �eyler girdiniz" ;
						return 0;	
		    	}
			}
		}
		yazilisayi = yuzler + onlar + birler;
		
		cout << yazilisayi;
	}
	return 0;
}
