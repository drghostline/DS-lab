#include <stdio.h>

int main() {
    float basic, hra, ta, it, gross,net,hra_per,ta_per,it_per;
        
    printf("Enter Basic Pay: ");
    scanf("%f", &basic);
    
    printf("Enter HRA : ");
    scanf("%f", &hra_per);
    
    printf("Enter TA : ");
    scanf("%f", &ta_per);
    
    printf("Enter IT : ");
    scanf("%f", &it_per);
    
    hra=(hra_per*basic)/100;
    ta=(ta_per*basic)/100;
    gross=(hra+basic+ta);
    it=(it_per*gross)/100;
    net=(gross-it);
    printf("Basic = %f\nHRA= %f\nTA = %f\n,gross = %f\nIT = %f\n net = %f\n",basic,hra_per,ta_per,gross,it_per,net);
    return 0;
}
