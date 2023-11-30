#include <stdio.h>

int main() {
    int x, y, z;
    
    printf("Ingrese las dimensiones del arreglo tridimensional:\n");
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);
    printf("z: ");
    scanf("%d", &z);
    int arreglo[x][y][z];
    
    // esta parte es para inicializar las matrices en cero
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                arreglo[i][j][k] = 0;
            }
        }
    }

    return 0;
}
   
