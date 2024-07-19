#include <stdio.h>
int main(){
    int m,z;
    printf("Entre com o tamanho desejado da matrix\n");
    scanf("%d",&m);
    printf("Entre com o numero desejado da matrix\n");
    scanf("%d",&z);
    int ma[m*m];
    int i, x,j;
    FILE *arq=fopen("arqA.dat","w");
    for(i=0;i<m;i++){
        for(x=0;x<m;x++){
            ma[i*m+x]=z;
        };
    };
    char string1[m*m];
for(i=0;i<m;i++){
    for(j=0;j<m;j++){
      string1[i*m+j]=(char)ma[i*m+j];
    };
};
for(i=0;i<m;i++){
    for(j=0;j<m;j++){
     fprintf(arq,"%d ",string1[i*m+j]);

    };
    fprintf(arq,"\n");
};

    

}