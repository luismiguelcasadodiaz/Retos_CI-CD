#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <assert.h>

size_t mi_strlen(const char *s)
{
	size_t	idx;

	idx = 0;
	while (s[idx] != '\0')
		idx++;
	return (idx);
}

int mi_strcmp(const char *s1, const char *s2)
{
    while (*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

// Copia la cadena src en dest (incluyendo el '\0')
// Retorna: puntero a dest
char *mi_strcpy(char *dest, const char *src)
{
    char *ptr = dest;
    
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    
    return ptr;
}

void test_strlen()
{
    printf("=== TESTS de mi_strlen ===\n");
    
    // Test 1: Cadena normal
    assert( mi_strlen("hola") ==  strlen("hola"));
    // Test 2: Cadena vacía
    assert( mi_strlen("") ==  strlen(""));
    // Test 3: Cadena con espacios
    assert( mi_strlen("hola mundo") ==  strlen("hola mundo"));
    // Test 4: Cadena larga
    char frase[] = "El veloz murciélago hindú comía feliz cardillo y kiwi";
    assert( mi_strlen(frase) ==  strlen(frase));  
    // Test 5: Un solo carácter
    assert( mi_strlen("h") ==  strlen("h"));
}

void test_strcmp()
{
    printf("=== TESTS de mi_strcmp ===\n");
    // Test 1: Cadenas iguales
    int result1 = mi_strcmp("hola", "hola");

    assert(result1 == 0 );
    
    // Test 2: Primera cadena menor
    int result2 = mi_strcmp("abc", "abd");

    assert(result2 < 0);
    
    // Test 3: Primera cadena mayor
    int result3 = mi_strcmp("xyz", "abc");

    assert(result3 > 0);
    
    // Test 4: Cadena vacía vs cadena con contenido
    int result4 = mi_strcmp("", "algo");

    assert(result4 < 0);
    
    // Test 5: Ambas cadenas vacías
    int result5 = mi_strcmp("", "");

    assert(result5 == 0);
    
    // Test 6: Una cadena es prefijo de otra
    int result6 = mi_strcmp("hola", "holamundo");
 
    assert(result6 < 0);
}

void test_strcpy()
{
    printf("=== TESTS de mi_strcpy ===\n");
    
    char buffer[100];
    
    // Test 1: Copia simple
    mi_strcpy(buffer, "Hola mundo");
    assert ( strcmp(buffer, "Hola mundo") == 0 );
    
    // Test 2: Cadena vacía
    mi_strcpy(buffer, "");
    assert ( strcmp(buffer, "") == 0 );
    
    // Test 3: Cadena larga
    mi_strcpy(buffer, "Esta es una cadena muy larga para probar");
    assert ( strcmp(buffer, "Esta es una cadena muy larga para probar") == 0 );
    
    // Test 4: Caracteres especiales
    mi_strcpy(buffer, "123!@#$%^&*()");
    assert ( strcmp(buffer, "123!@#$%^&*()") == 0 );
    
    // Test 5: Verificar que retorna el puntero correcto
    char *result = mi_strcpy(buffer, "test");
    assert(result == buffer);
}


int main()
{
    printf("Probando mis funciones\n\n");

    test_strlen();
    test_strcmp();
    test_strcpy();


    printf("Todas las pruebas satisfactorias");    


}
