#include <stdio.h>
#include <conio.h>
int main(){
	char kalimat[50];
	int i,temu=0;
	char cari;
	
	printf("Masukkan Kalimat (50 char) : ");
	scanf("%[^\n]",kalimat);
	printf("Masukkan Huruf (case sensitif) : ");
	scanf("%s",&cari);
	for(i=0;kalimat[i]!='\0';i++){
		if(cari==kalimat[i])temu++;
	}
	if(temu!=0)
	printf("\nTerdapat Sebanyak %d Huruf '%c' Dari Kalimat Diatas !",temu,cari);
	else
	printf("\nHuruf Yang Diminta Tidak Ditemukan Pada Kalimat Diatas !");
	getch();
}
