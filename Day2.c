#include <stdio.h>
int main(){
    int n, pos;
    printf("Enter size of array");
    scanf("%d", &n);

    int arr[n];

    for(int i = 1; i <= n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter position: ");
    scanf("%d", &pos);

    if(pos < 1 || pos > n){
        printf("INVALID POSITION");
        return 0;
    }

    for( int i = 1; i <= n -1; i++){
        printf("%d \n", arr[i]);
    }

    return 0;
}