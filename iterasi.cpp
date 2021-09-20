#include<stdio.h>
 
int iterasi(int a, int x, int y)
{
	int total=1;
	
    for(a=1;a<=y;a++)
	{
        total=total*x;
    }
    return total;
}
 
int main()
{
	int x,y,a,total;
	printf("Masukan Angka yang Akan Dipangkatkan : ");
    scanf("%d", &x);
    printf("Masukan Pangkat : ");
    scanf("%d", &y);
	printf("Hasilnya adalah %d", iterasi(a,x,y));
}

