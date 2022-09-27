
// Parametro y argumentos

void myFunction(char name[]) {
    printf("Hello%s\n", name);
}

int main() {
    myFunction("Lian");
    myFunction("Lola");
    myFunction("Jenny");

    return 0;
}
// Hello Jenny
// Hello Lola
// Hello Lian