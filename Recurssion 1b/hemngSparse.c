#include <stdio.h>
#include <stdlib.h>

void tuple(int** arr, int n, int m, int** arr1, int count ){

    int c=1;
    arr1[0][0]=n;
    arr1[0][1]=m;
    arr1[0][2]=count;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]!=0){
                arr1[c][0]=i;
                arr1[c][1]=j;
                arr1[c][2]=arr[i][j];
                c++;
            }
        }
    }
}
int main(){
    int n, m;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    printf("Enter the number of columns: ");
    scanf("%d", &m);
    
    int** arr=(int** ) malloc(n * sizeof(int*));
    int count=0;
    //printf("%d\n", count);
    printf("Enter the array elements: \n");
    for(int i=0;i<n;i++){
        arr[i]=(int*) malloc(m * sizeof(int));
        for(int j=0;j<m;j++){
            scanf("%d", &arr[i][j]);
            if(arr[i][j]!=0){
                count++;
            }
        }
    }
    count++;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    
    int** arr1=(int**) malloc(count * sizeof(int*));

    for(int i=0; i<count; i++){
        arr1[i]=(int*) malloc(3 * sizeof(int));
    }
    
    tuple(arr, n, m, arr1, count);

    printf("Tuple representation is \n");
    for(int i=0;i<(count+1);i++){
        for(int j=0;j<3;j++){
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
}