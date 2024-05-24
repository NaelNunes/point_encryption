#include <stdio.h>
#define TFC 50
#include <string.h>
int main()
{
    int j, i, espacos = 0, numConj, letras;
    char letra[TFC], letra_final = 'a';

    while(scanf("%d", &letras) != EOF){
        while (getchar() != '\n');
        for(j = 0; j < letras; j++){
            fgets(letra, TFC, stdin);
            for(i = 0; letra[i] != '\0'; i++){
                if(letra[i] == ' '){
                    espacos++;
                    if(i == 3){
                        numConj = 3;   
                    } else if(i == 2) {
                        numConj = 2;
                    } else {
                        numConj = 1;
                    }
                }
            }
            if(espacos == 0){
                while(letra[i] != '\0'){
                    i++;
                }
                if(i == 1){
                    printf("%c\n", letra_final);
                } else {
                    letra_final = letra_final + (i - 2);
                    printf("%c\n", letra_final);
                }
            } else {
                letra_final = letra_final + ((espacos + 1) * numConj) -1;
                printf("%c\n", letra_final);
            }
            espacos = 0;
            letra_final = 'a';
        }
        scanf("%d", &letras);
        while (getchar() != '\n');
    }

    return 0;
}
