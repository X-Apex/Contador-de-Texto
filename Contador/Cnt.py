def contar_texto(texto):
    caracteres = 0
    palabras = 0
    oraciones = 0
    dentro_palabra = False

    for c in texto:
        # Contar caracteres (sin espacios, tabulaciones ni saltos de línea)
        if c not in [' ', '\t', '\n']:
            caracteres += 1

        # Detectar palabras
        if c not in [' ', '\t', '\n']:
            if not dentro_palabra:
                palabras += 1
                dentro_palabra = True
        else:
            dentro_palabra = False

        # Detectar oraciones
        if c in ['.', '?', '!']:
            oraciones += 1

    return caracteres, palabras, oraciones


# Ejemplo de uso
texto = input("Ingrese el texto: ")
caracteres, palabras, oraciones = contar_texto(texto)

print("Numero de caracteres (sin espacios):", caracteres)
print("Numero de palabras:", palabras)
print("Numero de oraciones:", oraciones)
