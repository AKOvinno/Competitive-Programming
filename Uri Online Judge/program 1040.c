#include<stdio.h>
int main()
{
    float N1, N2, N3, N4, Media, Media_final, N5;
    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);

    Media = ((2*N1)+(3*N2)+(4*N3)+(1*N4))/10;
    printf("Media: %0.1f\n", Media);

    if(Media >= 5.0 && Media < 7.0){
        printf("Aluno em exame.\n");
        scanf("%f", &N5);
        printf("Nota do exame: %0.1f\n", N5);
        Media_final = (N5 + Media)/2;
        printf("Aluno aprovado.\n");
        printf("Media final: %0.1f\n", Media_final);
    }

    else if(Media >= 7.0){
        printf("Aluno aprovado.\n");
    }
    else if(Media < 5.0){
        printf("Aluno reprovado.\n");
    }

    return 0;
}
