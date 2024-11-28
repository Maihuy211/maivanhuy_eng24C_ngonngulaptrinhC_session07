# include<stdio.h>
int main(){
	int i,n[5]={1,2,3,4,5};
	printf("mang khi chua thay doi: \n");
	printf("n[5]={1,2,3,4,5}\n");
    printf("mang moi sau khi da thay doi: \n");
	for(i=0;i<5;i++){
		if(n[i]%2==0){
			n[i]=n[i]+3;
		}else{
			n[i]=n[i]+2;
		}
	  printf("%d ",n[i]);	
	}
	return 0;
	}
