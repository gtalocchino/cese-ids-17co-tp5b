/*=====[Module Name]===========================================================
 * Copyright 2019 Esteban Daniel VOLENTINI <evolentini@gmail.com>
 * All rights reserved.
 * License: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.1.0
 * Creation Date: 2019/03/01
 */

/*=====[Avoid multiple inclusion - begin]====================================*/

#ifndef _ALUMNOS_H_
#define _ALUMNOS_H_

/*=====[Inclusions of public function dependencies]==========================*/

#include <stdbool.h>
#include <stddef.h>

/*=====[C++ - begin]=========================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*=====[Definition macros of public constants]===============================*/

/*=====[Public function-like macros]=========================================*/

/*=====[Definitions of public data types]====================================*/

/**
 * @brief Struct que almacena los datos de un alumno
 */ 
typedef struct alumno_s {
    char apellidos[30];  //!< Apellidos del alumno
    char nombres[30];    //!< Nombres del alumno
    char documento[11];  //!< Documento del alumno
} const * alumno_t;

/*=====[Definitions of public global variables]==============================*/

/*=====[Prototypes (declarations) of public functions]=======================*/

/**
 * @brief Funcion que serializa los datos de un alumno en una cadena JSON.
 * 
 * Esta función se utiliza para convevertir una estructura de datos en memoria
 * en una cadena de caracteres según el formato JSON. Para ello recibe un puntero
 * a un buffer donde escribirá la cadena, el tamaño del buffer y un puntero a una Struct
 * que contiene los datos del alumno.
 *
 * @param[out] cadena Puntero al buffer donde se escribirán los datos serializados de salida.
 * @param[in] espacio Tamaño del buffer de salida en bytes.
 * @param[in] alumno Puntero a un Struct que contiene los datos del alumno.
 * @return true Si no se produce un error en la esctritura de cadena.
 * @return false Si se produce un error en la esctritura de cadena.
 */
bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno);

/**
 * @brief Funcion que serializa los datos de multiples alumnos en una cadena JSON.
 * 
 * Esta función se utiliza para convevertir una estructura de datos en memoria
 * en una cadena de caracteres según el formato JSON. Para ello recibe un puntero
 * a un buffer donde escribira la cadena, el tamaño del buffer.
 *
 * @param[out] cadena Puntero al buffer donde se escribirán los datos serializados de salida.
 * @param[in] espacio Tamaño del buffer de salida en bytes.
 * @return true Si no se produce un error en la esctritura de cadena.
 * @return false Si se produce un error en la esctritura de cadena.
 */
bool SerializarAlumnos(char * cadena, size_t espacio);

/*=====[Prototypes (declarations) of public interrupt functions]=============*/

/*=====[C++ - end]===========================================================*/

#ifdef __cplusplus
}
#endif

/*=====[Avoid multiple inclusion - end]======================================*/

#endif /* _ALUMNOS_H_ */
