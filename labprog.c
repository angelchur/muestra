#include <stdio.h>
float metros_a_cm(float metros) {
    return metros * 100;
}
float cm_a_metros(float centimetros) {
    return centimetros / 100;
}
float cm_a_pulgadas(float centimetros) {
    return centimetros / 2.54;
}
float pulgadas_a_cm(float pulgadas) {
    return pulgadas * 2.54;
}
void linea(char simbolo) {
    for (int i = 0; i < 20; i++) {
        printf("%c", simbolo);
    }
    printf("\n");
}
void repetir(const char *texto, int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        printf("%s\n", texto);
    }
}
void cartel(const char *texto, int cantidad) {
    repetir(texto, cantidad); 
}
int main() {
    repetir("juan", 3);
    repetir("pepe", 2);
    
    cartel("Maria", 5);
    
    float metros = 2.0;
    float centimetros = metros_a_cm(metros);
    printf("la conversión de %.2f metros a centímetros es: %.2fcm\n", metros, centimetros);
    
    linea('T');
    
    centimetros = 80.0;
    float pulgadas = cm_a_pulgadas(centimetros);
    printf("la conversión de %.2f centímetros a pulgadas es: %.4f\n", centimetros, pulgadas);
    
    linea('$');
    
    cartel("Marcos", 4);
    
    return 0;
}
