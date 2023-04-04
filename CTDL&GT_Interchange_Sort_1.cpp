int Interchange_Sort(int a[], int n){//ham doi cho truc tiep
	int i,j;
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(a[i]>a[j]){
				int tg = a[i];
            a[i] = a[j];
            a[j] = tg;	
			}
		}
	}
	printf("\nMang sau khi sap xep:\t");
	Xuat(a,n);
}
