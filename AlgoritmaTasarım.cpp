/*
Soru: -Klavyeden bir hedef deðer giriþi yapýlacak

			-Hedef deðer verilen dizinin en küçük elemanýndan büyük,
			dizinin toplamýndan ise küçük olacak. Eðer deðilse kullanýcýdan
			yeni bir deðer giriþi yapmasý istenecek
			
			-Program size verilen dizinin elemanlarýný kullanarak 2 tane çözüm dizisi oluþturacak
			
			-1.Çözüm dizisi; elemanlarýnýn toplamý hedef deðerden büyük olmamak koþuluyla
			en yakýn deðerde ve bu deðere en az eleman kullanarak oluþturulacak 
			
			-2.Çözüm dizisi; elemanlarýnýn toplamý hedef deðerden küçük olmamak koþuluyla
			en yakýn deðerde ve en az eleman kullanarak oluþturulacak 
			
			-1.çözüm dizisinin elemanlarý,1.Çözüm dizisinin toplamý,hedef deðer ve
			1.Çözüm dizisinin toplamýnýn hedef deðere farký ekranda gösterilecek
			
			-2.çözüm dizisinin elemanlarý,2.Çözüm dizisinin toplamý,hedef deðer ve
			2.Çözüm dizisinin toplamýnýn hedef deðere farký ekranda gösterilecek
			
			Not:Birden fazla doðru çözüm listesi oluþturulabilir,Dikkat edilmesi gereken noktalar:
			1-) Çözüm listelerinin toplamý hedef deðere en yakýn deðerde olmalý
			2-) Bunu olabildiðince az eleman kullanarak gerçekleþtirmeli
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
	
	
	
	
	
	
	
	


























