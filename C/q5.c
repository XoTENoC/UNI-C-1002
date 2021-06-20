#include <stdio.h>
#include <stdlib.h>

char ** remove_nucleotides(char ** sequences, char * nucleotides, int number_of_sequences, int DNA_Length){

    char ** result = malloc(sizeof(char*)* number_of_sequences);

    for (int i = 0; i < number_of_sequences; i++){
        
        result[i] = malloc(sizeof(char) * 10);

        for (int j = 0; j < 10; j++){
            result[i][j] = '\0';
        }

        int count = 0;

        for(int k= 0; k < 10; k++){
            
            if( sequences[i][k] != nucleotides[0] && sequences[i][k] != nucleotides[1] && sequences[i][k] != nucleotides[2] && sequences[i][k] != nucleotides[3]){
                result[i][count] = sequences [i][k];
                count++;
            }

        }

    }

    return result;

}

int main(void){
    int amount;
    char ** dna_sequence;
    char ** updated_sequences;
    char nucleotides[4] = {'\0'};
    // int nucleotide[] = {0, 0, 0, 0};

    printf("\n");
    printf("How many DNA sequences do you want to enter?: ");
    scanf("%d", &amount);

    dna_sequence = malloc(sizeof(char*) * amount);

    printf("\n");

    for (int i = 0; i < amount; i++){
        dna_sequence[i] = malloc(sizeof(char) * 10);

        for (int j = 0; j < 10; j++){
            dna_sequence[i][j] = '\0';
        }

        printf("Please enter a DNA sequence: ");
        scanf("%10s", dna_sequence[i]);
    }

    printf("\n");

    printf("Which nucleotides do you want to remove?: ");
    scanf("%4s", nucleotides);

    updated_sequences = remove_nucleotides(dna_sequence, nucleotides, amount, 4);

    printf("\n");

    printf("Sequences:\n");
    
    for (int i = 0; i < amount; i++){
        printf("%s\n", updated_sequences[i]);
    }
    
    printf("\n");

    for(int i = 0; i < amount; i++){
        free(dna_sequence[i]);
    }
    free(dna_sequence);

    for(int i = 0; i < amount; i++){
        free(updated_sequences[i]);
    }
    free(updated_sequences);

}
