# include <stdio.h>
# include <time.h>
# include <stdlib.h>
# define M 7

void afficheTab(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void initRandom(int arr[], int n){
    srand(time(NULL));
    for(int i = 0; i < n; i++){
        arr[i] = rand()%11;
    }
}

int somme(int arr[], int n){
    int sum =0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}

int sommePairs(int arr[], int n){
    int sum =0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0)
            sum += arr[i];
    }
    return sum;
}

int sommeNegatifs(int arr[], int n){
    int sum =0;
    for(int i = 0; i < n; i++){
        if(arr[i] < 0)
            sum += arr[i];
    }
    return sum;
}

int main(){
    int t1[M];
    initRandom(t1, M);
    afficheTab(t1, M);
    printf("sum = %d\n", somme(t1, M));
    printf("sumPairs = %d\n", sommePairs(t1, M));
    printf("sumNegatifs = %d\n", sommeNegatifs(t1, M));
}
