#include<stdio.h>

main(){
    int ct, i, counter, favorable;
    float result;
    while(scanf("%d", &ct) != EOF){
        int wishes[ct];
        counter = 0;
        favorable = 0;
        for(i = 0; i < ct; i++){
            scanf("%d", &wishes[i]);
            if(wishes[i] == 1)
                counter ++;
            else
                favorable ++;
        }
        result = (float)(ct * 2) / 3;
        if(counter >= result )
            printf("impeachment\n");      
        else 
            printf("acusacao arquivada\n"); 
    }
    return 0;
}