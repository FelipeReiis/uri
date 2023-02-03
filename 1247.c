#include<stdio.h>
#include <math.h>

main(){
    float VF,VG,D;

    while(scanf(" %f %f %f", &D, &VF, &VG) != EOF){

        VF = 12 / VF;
        D = sqrt(pow(12,2)+pow(D,2));
        VG = D / VG;

        if(VF < VG)
            printf("N\n");
        else
            printf("S\n");
    }
    return 0;

}