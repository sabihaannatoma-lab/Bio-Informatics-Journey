#include <stdio.h>

/**
 * Project: DNA Base Counting (First Step to Bioinformatics)
 * Goal: Master CSE and transition to Bioinformatics.
 * Author: Sabiha Tabassum Annatoma
 */

int main() {
    // A simple DNA sequence
    char dna_sequence[] = "ATGCCTAG";
    int length = 0;

    // Logic to calculate the length of the DNA string
    for (int i = 0; dna_sequence[i] != '\0'; i++) {
        length++;
    }

    printf("Welcome to Sabiha's Bioinformatics Journey!\n");
    printf("Processing DNA Sequence: %s\n", dna_sequence);
    printf("Total sequence length: %d bases\n", length);

    return 0;
}
