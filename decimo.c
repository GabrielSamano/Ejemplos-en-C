
// Strings en C , hay dos fomras de poder visualizarlas

int main() {
    char Saludo[] = "Hello World";
    char CSaludo[] = {'H','e','l','l','o',' ','W','o','r','l','d'};

    printf("%s\n", Saludo[6]);
    printf("%s\n", CSaludo[6]); // En mabos casos mprimira lo mismo que seria "W"

    printf("%lu\n", sizeof(Saludo));
    printf("%lu\n", sizeof(CSaludo));  // Conocemos el tamaño del string

    return 0;
}
