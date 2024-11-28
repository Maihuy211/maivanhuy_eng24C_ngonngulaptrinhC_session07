# include <stdio.h>
int main(){
    int n,i;
	printf("so phan tu cua mang:  ");
	scanf("%d",&n);
	int a[n];
	printf("nhap tung phan tu cho mang: \n");
	for( i=0;i<n;i++){
		scanf("%d",&a[i]);
		}
		printf("phan tu cho mang la so nguyen to la: \n");
    for (i=0; i<n; i++)
	{ 
	   if (a[i]<10)
	    {
		
		 switch (a[i])
		 
		 {
			case 1:
			printf ("%d\n",a[i]);
			break;
			case 2:
			printf ("%d\n",a[i]);
			break;
			case 3:
			printf ("%d\n",a[i]);
			break;
			case 5:
			printf ("%d\n",a[i]);
			break;
			case 7:
		    printf ("%d\n",a[i]);
			break;
		  }
	    } else if (a[i]%2!=0 && a[i]%3!=0 && a[i]%5!=0 && a[i]%7!=0)
	    {
	      printf ("%d\n",a[i]);	
		}
    } 
	return 0;
}
