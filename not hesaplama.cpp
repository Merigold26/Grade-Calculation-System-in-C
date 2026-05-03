#include <stdio.h>

int main()
{
int nott,vize,final,odev,quiz,quiziki;

printf("lutfen ogrencinin notlarini giriniz \n \n");
printf("Lutfen ogrencinin vize notunu giriniz :  ");
scanf("%d",&vize);
printf("Lutfen ogrencinin final notunu giriniz : ");
scanf("%d",&final);
printf("Lutfen ogrencinin odev notunu giriniz : ");
scanf("%d",&odev);
printf("Lutfen ogrencinin quiz notunu giriniz : ");
scanf("%d",&quiz);
printf("Lutfen ogrencinin quiz 2 notunu giriniz : ");
scanf("%d",&quiziki);
nott=(vize*0.3)+(final*0.5)+(quiz*0.05)+(quiziki*0.05)+(odev*0.1);

if (nott>=90) {
	printf("Bu ogrenci AA notunu almistir tebrikler");	
}

else if (nott>=85) {
	printf("Bu ogrenci BA notunu almistir tebrikler");
}

else if (nott>=80) {
	printf("Bu ogrenci BB notunu almistir tebrikler");
}

else if (nott>=75) {
	printf("Bu ogrenci CB notunu almistir tebrikler");
}

else if (nott>=50) {
	printf("Bu ogrenci sartli gecmistir yani DD veya DC almistir");
}

else if (nott<50) {
	printf("Bu ogrenci dersten kalmistir yani FF almistir");
}

return 0;
getchar()

}


