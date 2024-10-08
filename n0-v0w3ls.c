// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

string replace(string word);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Error: Please type in an argument.\n");
        return 1;
    }
    string word = argv[1];
    string converted_word = replace(word);

    printf("%s\n", converted_word);
}

string replace(string word)
{
    for (int i = 0; i < strlen(word); i++)
    {
        switch (tolower(word[i]))
        {
            case 'a':
                word[i] = '6';
                break;
            case 'e':
                word[i] = '3';
                break;
            case 'i':
                word[i] = '1';
                break;
            case 'o':
                word[i] = '0';
                break;
            case 'u':
                word[i] = 'u';
                break;
            default:
                break;
        }
    }
    return word;
}
