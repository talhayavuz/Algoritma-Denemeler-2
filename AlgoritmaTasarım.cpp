/*
Soru: -Klavyeden bir hedef de�er giri�i yap�lacak

			-Hedef de�er verilen dizinin en k���k eleman�ndan b�y�k,
			dizinin toplam�ndan ise k���k olacak. E�er de�ilse kullan�c�dan
			yeni bir de�er giri�i yapmas� istenecek
			
			-Program size verilen dizinin elemanlar�n� kullanarak 2 tane ��z�m dizisi olu�turacak
			
			-1.��z�m dizisi; elemanlar�n�n toplam� hedef de�erden b�y�k olmamak ko�uluyla
			en yak�n de�erde ve bu de�ere en az eleman kullanarak olu�turulacak 
			
			-2.��z�m dizisi; elemanlar�n�n toplam� hedef de�erden k���k olmamak ko�uluyla
			en yak�n de�erde ve en az eleman kullanarak olu�turulacak 
			
			-1.��z�m dizisinin elemanlar�,1.��z�m dizisinin toplam�,hedef de�er ve
			1.��z�m dizisinin toplam�n�n hedef de�ere fark� ekranda g�sterilecek
			
			-2.��z�m dizisinin elemanlar�,2.��z�m dizisinin toplam�,hedef de�er ve
			2.��z�m dizisinin toplam�n�n hedef de�ere fark� ekranda g�sterilecek
			
			Not:Birden fazla do�ru ��z�m listesi olu�turulabilir,Dikkat edilmesi gereken noktalar:
			1-) ��z�m listelerinin toplam� hedef de�ere en yak�n de�erde olmal�
			2-) Bunu olabildi�ince az eleman kullanarak ger�ekle�tirmeli
*/

#include<stdio.h>
#include<stdint.h>

uint16_t AvailableValues[10] = {50,100,150,250,400,500,600,750,850,1000};


int main()
{
		int i,a,b,k,z,p,u,h,v=0,r=0,o,g;
		int kontrol[10] = {0};
		int kontrol2[10] = {0};
	while(1)
	{
		

	printf("Lutfen 50 Ile 4650 Arasinda Bir Sayi Giriniz :\n ");
	scanf("%d", &a);
	
	if (a<50 || a>4650)
	{
	printf("Hatali Giris Yaptiniz\n");
		
		
	}	

	else
	{
	
	goto hesaplama;
	
	}
}
		
	hesaplama:
		

		k = a % 50;
		b = a;
		g = a/50;
		
		
		for(i = 10; i >= 0; i--)
		{
		
		if( b >= AvailableValues[i] )
		
		
		{
			
			b = b - AvailableValues[i];
			kontrol[i] = AvailableValues[i];
			
		}
		
		
		
		}
		printf("1. Cozum :\n");
		for(z=0; z<10; z++)
		
		{
		
		if(kontrol[z]>0)
		{
			u++;
			p = kontrol[z];
			printf("%d. Indeks = %d\n", z,p);
		}
		
		}
		printf("kullanilan eleman sayisi = %d\n",u);
		printf("kullanilan elemanlarin toplami = %d\n", a-k);
		printf("girilen sayi = %d\n",a);
		printf("fark = %d\n",k);
		
		
		
		printf("2. Cozum :\n");
		
		g = g+1;
		o = g*50;
		
			for(i = 10; i > -1; i--)
		{
		
		if( o >= AvailableValues[i] )
		
		
		{
			
			o = o - AvailableValues[i];
			kontrol2[i] = AvailableValues[i];
			
		}
		
		
		
		}
		
		for(h=0; h<10; h++)
		
		{
		
		if(kontrol2[h]>0)
		{
			v++;
			r = kontrol2[h];
			printf("%d. Indeks = %d\n", h,r);
		}
		
		}
		printf("kullanilan eleman sayisi = %d\n",v);
		printf("kullanilan elemanlarin toplami = %d\n", g*50);
		printf("girilen sayi = %d\n",a);
		printf("fark = %d\n",(g*50)-a);
		
		return 0;	
	}
	
	
	
	
	
	
	
	


























