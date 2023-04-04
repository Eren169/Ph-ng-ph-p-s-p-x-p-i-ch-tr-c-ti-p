#include <stdio.h>
#include<math.h>

void nhap(int a[],int n){//ham nhap mang
	for(int i=0;i<n;i++){
		 printf("\nNhap a[%d]=",i);
         scanf("%d",&a[i]);
	}
}

void Xuat(int a[],int n){//ham xuat mang
    for(int i=0; i<n; i++){
        printf("%d \t",a[i]);
    }
}

int soNguyenTo(int n)
{
    if (n < 2)    
        return 0;

    for (int i = 2; i <= sqrt((float)n); i ++)
    {
        if (n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int Interchange_Sort(int a[], int n){//ham doi cho truc tiep
	int i,j;
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(soNguyenTo(a[i])==1){
				if(a[i]>a[j]){
					int tg = a[i];
	                a[i] = a[j];
	                a[j] = tg;	
	}
			}
		}
	}
	printf("\nMang sau khi sap xep:\t");
	Xuat(a,n);
}

int main()
{
	int a[1000],n;
	printf("Nhap so phan tu cua mang:");
	scanf("%d",&n);
	nhap(a,n);
	printf("Mang ban dau:\t\t");
	Xuat(a,n);
	Interchange_Sort(a, n);
}
