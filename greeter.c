#include <stdio.h>
#include <stdlib.h>

#define BLACK         "\e[0;30m"
#define BLUE          "\e[0;34m"
#define GREEN         "\e[0;32m"
#define CYAN          "\e[0;36m"
#define RED           "\e[0;31m"
#define PURPLE        "\e[0;35m"
#define BROWN         "\e[0;33m"
#define GRAY          "\e[0;37m"
#define DARK_GRAY     "\e[1;30m"
#define LIGHT_BLUE    "\e[1;34m"
#define LIGHT_GREEN   "\e[1;32m"
#define LIGHT_CYAN    "\e[1;36m"
#define LIGHT_RED     "\e[1;31m"
#define LIGHT_PURPLE  "\e[1;35m"
#define YELLOW        "\e[1;33m"
#define WHITE         "\e[1;37m"
#define NONE          "\033[0m"

int main(int argc, char const *argv[]) {
    printf("%s               +\n", GRAY);
    printf("%s               #\n", GRAY);
    printf("%s              ###\n", GRAY);
    printf("%s             #####    %sWelcome to Arch Linux\n", GRAY, WHITE);
    printf("%s             ######\n", GRAY);
    printf("%s            ; #####;\n", GRAY);
    printf("%s           +##.#####\n", GRAY);
    printf("%s          +##########\n", GRAY);
    printf("%s         ######%s#####%s##;\n", GRAY, CYAN, GRAY);
    printf("%s        ###%s############%s+\n", GRAY, CYAN, GRAY);
    printf("%s       #%s######   #######\n", GRAY, CYAN);
    printf("%s     .######;     ;###;`\".\n", CYAN);
    printf("%s    .#######;     ;#####.\n", CYAN);
    printf("%s    #########.   .########\n", CYAN);
    printf("%s   ######'           '######\n", CYAN);
    printf("%s  ;####                 ####;\n", CYAN);
    printf("%s  ##'                     '##\n", CYAN);
    printf("%s #'                         `#\n", CYAN);

    printf("%s", NONE); // Reset

    return EXIT_SUCCESS;
}
