#include<stdio.h>

main(){
    int nct, i, result, var;
    char ct[3];

    scanf("%d",&nct);
    for(i = 0; i < nct; i++){
        var = nct;
        scanf("%s", &ct);
        result = 0;
        if (ct[1] >= 65 && ct[1] <= 90 && ct[0] != ct[2])
            result = (ct[2] - 48) - (ct[0] - 48);
        else if (ct[1] >= 97 && ct[1] <= 122 && ct[0] != ct[2])
            result = (ct[0] - 48) + (ct[2] - 48);
        else if(ct[0] == ct[2])
            result = (ct[2] - 48) * (ct[2] - 48);
        
        printf("%d\n",result);   
        nct = var;
        
    }

    return 0;
}