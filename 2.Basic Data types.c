#include <stdio.h>

int main() {

    int integer;
    long long boro;
    char ch[10];
    float fh;
    double dh;

    scanf("%d %lld %c %f %lf", &integer, &boro, &ch, &fh, &dh);
    printf("%d\n",integer); 
    printf("%lld\n",boro);
    printf("%s\n",ch); 
    printf("%.2f\n",fh);
    printf("%.1f\n",dh);

    return 0;
}
