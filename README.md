# Vowel Replacer

This project is a simple command-line program written in C that replaces vowels in a given word with specific numbers. While doing it, I utilized interactions with strings, command-line arguments, and switch statements! 

## Description

The program takes a single command-line argument (a word) and replaces the vowels in the word with the following numbers:
- 'a' -> '6'
- 'e' -> '3'
- 'i' -> '1'
- 'o' -> '0'
- 'u' remains unchanged

## Getting Started

### Installing

1. Clone the repository or download the source code.

### Usage

1. Compile the program using a C compiler. For example:
   ```sh
   gcc -o vowel_replacer vowel_replacer.c -lcs50
   ```
2. Run the program with a word as a command-line argument:
   ```sh
   ./vowel_replacer yourword
   ```

### Example

```sh
./vowel_replacer hello
h3ll0
```

![image](https://github.com/user-attachments/assets/1c4224d8-4e15-4fe6-9287-dcf5e09de274)
*Can you guess what this says?* Arcade!
![image](https://github.com/user-attachments/assets/d317191c-050f-4835-aed5-e23668d605e4)
*Quintuple!!!*

## Code Explanation

The main components of the program are:

1. **Main Function**: The program checks if the correct number of command-line arguments is provided, and if not, prints an error message. Otherwise, it calls the `replace` function and prints the converted word.
2. **Replace Function**: Iterates through each character of the word and uses a switch statement to replace vowels with the(ir) corresponding numbers! 

## License

This project is not currently licensed under anything. 
