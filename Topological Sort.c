#include <stdio.h>
 
int main(){
	int i,j,k,n,a[10][10],b[10],c[10],count=0;
 
	printf("Number of Vertices : ");
	scanf("%d",&n);
 
	printf("\nThe Adjacency Matrix : ");
	for(i=0;i<n;i++){
		printf("\nEnter row %d : ",i+1);
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
 
	for(i=0;i<n;i++){
        b[i]=0;
        c[i]=0;
    }
 
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            b[i]=b[i]+a[j][i];
 
    printf("\nTopological Order : ");
 
    while(count<n){
        for(k=0;k<n;k++){
            if((b[k]==0) && (c[k]==0)){
                printf("%d ",(k+1));
                c[k]=1;
            }
 
            for(i=0;i<n;i++){
                if(a[i][k]==1)
                    b[k]--;
            }
        }
 
        count++;
    }
 
    return 0;
}
