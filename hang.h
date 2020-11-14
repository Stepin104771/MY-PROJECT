#include "Hang.h"

int letter_fill(char guess, char secretword[], char guessword[])
{
    int i;
    int matches = 0;
    for (i = 0; secretword[i] != '\0'; i++)
    {
        /* Did we already match this letter in a previous guess? */
        if (guess == guessword[i])
            return 0;
        /* Is the guess in the secret word? */
        if (guess == secretword[i])
        {
            guessword[i] = guess;
            matches++;
        }
    }
    return matches;
}
