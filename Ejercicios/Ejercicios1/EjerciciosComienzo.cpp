#include "EjerciciosComienzo.h"

// **** INICIO Funciones Auxiliares ****
int largoStr(char* str){
    int largo = 0;
    while (str[largo] != '\0')
        largo++;
    // for (largo = 0; str[largo] != '\0'; largo++);
    return largo+1;
}
char *copiarStrings(char *str) {
    if (str == NULL) return NULL;
    else {
        int largo = largoStr(str);
        char* strCopia = new char[largo];
        strCopia[largo-1] = '\0';
        for (int i = 0; i < largo; i++) {
            strCopia[i] = str[i];
        }
        return strCopia;
    }
}

char **copiarVecStrings(char **vecStr, int largoVecStr) {
    if (vecStr == NULL) return NULL;
    else {
        char** vecCopido = new char*[largoVecStr];
        for (int i = 0; i < largoVecStr; i++) {
            vecCopido[i] = copiarStrings(vecStr[i]);
        }
        return vecCopido;
    }
}

bool esMayorStr(char *str1, char *str2){
    // true si str1 es mayor q str2
    bool esMayor = false;
    bool esIgual = true;
    int pos = 0;
    if (str1 != str2) {
        while (esIgual && (str1[pos] != '\0' || str2[pos] != '\0')) {
            if (str1[pos] > str2[pos]) {
                esMayor = true;
                esIgual = false;
            } else if (str1[pos] < str2[pos]){
                esIgual = false;
            } else {
                pos++;
            }
        }
    }
    if (str2[pos] == '\0') {
        esMayor = true;
    }
    return esMayor;
}

// **** FIN Funciones Auxiliares ****

int suma(int a, int b) {
 	// IMPLEMENTAR SOLUCION
    return a+b;
}

void tablaDel(unsigned int tablaDel, unsigned int desde, unsigned int hasta) {
 	// IMPLEMENTAR SOLUCION
    cout << desde << '*' << tablaDel << '=' << desde * tablaDel;
    for (int i = desde; i < hasta; i++)
    {
        cout << ';';
        desde++;
        cout << desde << '*' << tablaDel << '=' << desde * tablaDel;
    }
}

void simplificar(int n, int d) {
	// IMPLEMENTAR SOLUCION
    int menor = 0;
    int i = 0;
    int hay_multiplo = 0;
    int multiplo = 0;
    bool esPositivo = true;
    if (n < 0 && d < 0) {
        n = abs(n);
        d = abs(d);
    }
    else {
        if (n < 0 || d < 0) {
            esPositivo = false;
            n = abs(n);
            d = abs(d);
        }
    }
    do {
        if (n < d)
            menor = n;
        else
            menor = d;
        i = 2;
        hay_multiplo = 0;
        while (i <= menor && hay_multiplo == 0) {
            if (n % i == 0 && d % i == 0)
            {
                multiplo = i;
                hay_multiplo = 1;
            }
            i++;
        }
        if (hay_multiplo == 1) {
            n = n / multiplo;
            d = d / multiplo;
        }
    } while (hay_multiplo == 1);
    
    if (!esPositivo) {
        n *= -1;
    }
    cout << n << '/' << d;
}

int ocurrencias123Repetidos(int* vector, int largo) {
    // IMPLEMENTAR SOLUCION
    int vieneEn = vector[0];
    int ocurrencias = 0;
    if (largo > 2) {
        for (int i = 0; i < largo; i++) {
            if (vector[i] == 1)
                vieneEn = 1;
            else if (vector[i] == 2) {
                if (vieneEn == 2 || vieneEn == 1) {
                    vieneEn = 2;
                }
                else vieneEn = 0;
            }
            else { // vector[i] = 3
                if (vieneEn == 2 || vieneEn == 3)
                    vieneEn = 3;
                else vieneEn = 0;
            }
            if (vieneEn == 3) {
                ocurrencias++;
                vieneEn = 0;
            }
        }
    }
    return ocurrencias;
}

int maximoNumero(unsigned int n) {
	// IMPLEMENTAR SOLUCION
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        int num = 0;
        cin >> num;
        if (num > max)
            max = num;
    }
    return max;
}

void ordenarVecInt(int *vec, int largoVec) {
    // IMPLEMENTAR SOLUCION
    for (int i = 0; i < largoVec-1; i++) {
        for (int j = i+1; j < largoVec; j++) {
            int aux;
            if (vec[i]>vec[j]) {
                aux = vec[i];
                vec[i] = vec[j];
                vec[j] = aux;
            }
        }
    }
}


char* invertirCase(char* str) {
    // IMPLEMENTAR SOLUCION
    char* caseInvertido = new char[largoStr(str)];
    caseInvertido[largoStr(str)-1] = '\0';
    int pos = 0;
    while (str[pos] != '\0') {
        if (str[pos] > 64 && str[pos] < 91)
            caseInvertido[pos] = str[pos] + 32;
        else if (str[pos] > 96 && str[pos] < 123)
            caseInvertido[pos] = str[pos] - 32;
        else
            caseInvertido[pos] = str[pos];
        pos++;
    }
    return caseInvertido;
}

int islas(char** mapa, int col, int fil){
	// IMPLEMENTAR SOLUCION
    return 0;
}

unsigned int ocurrenciasSubstring(char **vecStr, int largoVecStr, char *substr)
{
	// IMPLEMENTAR SOLUCION
    return 0;
}

char **ordenarVecStrings(char **vecStr, int largoVecStr) {
	// IMPLEMENTAR SOLUCION
    if (vecStr == NULL) return NULL;
    else {
        char** vecOrdenado = copiarVecStrings(vecStr, largoVecStr);
        // recorrer vecOrcenado
        for (int i = 0; i < largoVecStr-1; i++) {
            for (int j = i+1; j < largoVecStr; j++) {
                // ir intercambiando posicion con el String mas grande
                if (esMayorStr(vecOrdenado[i], vecOrdenado[j])) {
                    char* aux = copiarStrings(vecOrdenado[i]);
                    vecOrdenado[i] = vecOrdenado[j];
                    vecOrdenado[j] = aux;
                }
            }
        }
        return vecOrdenado;
    }
}

int* intercalarVector(int* v1, int* v2, int l1, int l2){
	// IMPLEMENTAR SOLUCION
    if (v1 == NULL && v2 == NULL) return NULL;
    else {
        int* res = new int[l1 + l2];
        res[l1+l2-1] = '\0';
        int pos1 = 0;
        int pos2 = 0;
        int pos = 0;
        
        while (pos1 < l1 && pos2 < l2) {
            if (v1[pos1] <= v2[pos2]) {
                res[pos] = v1[pos1];
                pos1++;
            } else {
                res[pos] = v2[pos2];
                pos2++;
            }
            pos++;
        }
        if (pos2 < l2) {
            while (pos2 < l2) {
                res[pos] = v2[pos2];
                pos2++;
                pos++;
            }
        } else if (pos1 < l1) {
            while (pos1 < l1) {
                res[pos] = v1[pos1];
                pos1++;
                pos++;
            }
        }
        return res;
    }
}

bool subconjuntoVector(int* v1, int* v2, int l1, int l2) {
	// IMPLEMENTAR SOLUCION
    bool esSubConjunto = false;
    if (v1 == NULL) return true;
    
    return esSubConjunto;
}

char** splitStr(char* str, char separador, int &largoRet)
{
	// IMPLEMENTAR SOLUCION
    /*  */
	return NULL;
}

void ordenarVecIntMergeSort(int* vector, int largo) 
{
	// IMPLEMENTAR SOLUCION
}
