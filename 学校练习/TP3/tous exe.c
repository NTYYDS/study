# include <stdio.h>
# include <time.h>
# include <stdlib.h>
# define N 15
# define M 7

void afficheTab(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void initClavier(int arr[], int n){
    int m = 0;
    for(int i = 0; i < n; i++){
        printf("Entier positif arr[%d]:", i);
        scanf("%d", &m);
        if(m >= 0){
            arr[i] = m;
        }
        else{
            int loop = 1;
            printf("error\n");
            while(loop){
                printf("Entier positif arr[%d]:", i);
                scanf("%d", &m);
                if(m >= 0){
                    loop =0;
                }                 
            }
        }
    }    
}

void initRandom(int arr[], int n){
    srand((unsigned)time(NULL));
    for(int i = 0; i < n; i++){
        arr[i] = rand()%11;
    }
}

int rechercheTab(int arr[], int n, int x){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            count++;
        }
    }
    if(count > 0){
        printf("%d est dans le tableau\n ", x);
        return 0;
    }
    else{
        return -1;
    }
}

int maxTab(int arr[], int n){
    int max = arr[0];
    for(int i = 1; i < n; i++){
        if(max < arr[i]){
            max = arr[i];
        }        
    }
    return max;
}

int maxTabPairs(int arr[], int n){
    int max = 0;
    for(int i = 0; i < n; i++){
        if(max < arr[i] && arr[i] % 2 == 0){
            max = arr[i];
        }        
    }
    return max;
}

int maxPosTab(int arr[], int n){
    int max = arr[0];
    int num = 0;
    for(int i = 1; i < n; i++){
        if(max < arr[i]){
            max = arr[i];
            num = i + 1;
        }        
    }
    return num;
}

void echangeDernierTab(int arr[], int n, int p){
    if(p > n){
        printf("Indice non valide\n");
    }
    else{
        int a;
        a = arr[p-1];
        arr[p-1] = arr[n-1];
        arr[n-1] = a;
    }
}

void bubble_sort(int arr[], int n){
    int tmp;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i; j++){
            if(arr[j] > arr[j+1]){
                tmp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = tmp;
            } 
        }      
    }
}

int main(){
    int t1[N];
    int t2[M];
    t1[0] = 1;
    t2[0] = 1;
    for(int m = 1; m < N; m++){
        t1[m] = 0;
    }
    for(int i = 1; i < M; i++){
        t2[i] = 0;
    }
//    initClavier(t1, N);
    initRandom(t1, N);
    rechercheTab(t1, N, 6);
    afficheTab(t1, N);
    bubble_sort(t1, N);
    afficheTab(t1, N);
    initClavier(t2, M);
    echangeDernierTab(t2, M, 4);
    afficheTab(t2, M);
    printf("max = %d\n", maxTab(t2, M));
    printf("maxPairs = %d\n", maxTabPairs(t2, M));
    printf("max est dans le %d cas\n", maxPosTab(t2, M));
    return 0;
}
