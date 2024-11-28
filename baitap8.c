# include<stdio.h>
int main(){
    int n,m;
	printf("nhap so rows: ");
	scanf("%d",&n);
	printf("nhap so cols: ");
	scanf("%d",&m);
	int a[n][m];
	int i,j;
	
	printf("nhap tung phan tu cho mang: \n");
    
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("nhap a[%d][%d]= ",i,j);
			scanf("%d",&a[i][j]);
		}
		}
	printf("cac phan tu co trong mang 2 chieu la:\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%2d",a[i][j]);
			}
	    printf("\n"); 
	    }
		return 0;
	    }
