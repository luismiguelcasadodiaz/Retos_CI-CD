#include <stdio.h>
#include <stddef.h>

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



int main() {
    printf("Funciones de cadenas inicializadas.\n");
    return 0;
}
