#include <stdio.h>
#include <math.h>
int main()
{
    int Hi,Mi,min,Hf,Mf;
    do{
        scanf(" %d %d %d %d", &Hi, &Mi, &Hf, &Mf);
        if(Hi + Mi + Hf + Mf ==0)
            break;
        if((Hf * 60 + Mf) <= (Hi * 60 + Mi)){
            min =  24 * 60 - abs(((Hf * 60 + Mf) - (Hi * 60 + Mi)));
            printf("%d\n",min);
        }else{
            min = (Hf * 60 + Mf) - (Hi * 60 + Mi);
            printf("%d\n",min);
        }
    }while(Hi + Mi + Hf + Mf !=0);
    return 0;
}