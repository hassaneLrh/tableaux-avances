#include<stdio.h>
#include<stdlib.h>
int main(){
        int T = 10;
        int N[T];
    printf("donnez les (entries) du tableau\n");
    for(int i =0 ; i < T ; i++) {
        printf("N%d : ",i+1);
        scanf("%d", &N[i]);
    }
int min = N[0];
for(int i = 1 ; i < T ;i++){
   if(N[i] < min) min = N[i];
}
int max =  N[0];
for(int i = 1 ; i < T ;i++){
    if(N[i] > max) max = N[i];
}
    printf("\n N: %d", N[0]);
    for(int i = 1 ; i < T ; i++)
    printf(", %d", N[i]);

    printf("\nla valeur minimale est : %d", min);
    printf("\nla valeur) maximale est : %d", max);

    return 0 ;
}

