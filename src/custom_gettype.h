#ifndef CUSTOM_GETTYPE_H
#define CUSTOM_GETTYPE_H

#include <stdio.h>

#define TYPE_NAME(var) _Generic((var), \
    _Bool: "_Bool", \
    char: "char", \
    signed char: "signed char", \
    unsigned char: "unsigned char", \
    short: "short", \
    unsigned short: "unsigned short", \
    int: "int", \
    unsigned int: "unsigned int", \
    long: "long", \
    unsigned long: "unsigned long", \
    long long: "long long", \
    unsigned long long: "unsigned long long", \
    float: "float", \
    double: "double", \
    long double: "long double", \
    const char: "const char", \
    const signed char: "const signed char", \
    const unsigned char: "const unsigned char", \
    const int: "const int", \
    const unsigned int: "const unsigned int", \
    const long: "const long", \
    const unsigned long: "const unsigned long", \
    const long long: "const long long", \
    const unsigned long long: "const unsigned long long", \
    const float: "const float", \
    const double: "const double", \
    const long double: "const long double", \
    char *: "char *", \
    signed char *: "signed char *", \
    unsigned char *: "unsigned char *", \
    short *: "short *", \
    unsigned short *: "unsigned short *", \
    int *: "int *", \
    unsigned int *: "unsigned int *", \
    long *: "long *", \
    unsigned long *: "unsigned long *", \
    long long *: "long long *", \
    unsigned long long *: "unsigned long long *", \
    float *: "float *", \
    double *: "double *", \
    long double *: "long double *", \
    const char *: "const char *", \
    const signed char *: "const signed char *", \
    const unsigned char *: "const unsigned char *", \
    const int *: "const int *", \
    const unsigned int *: "const unsigned int *", \
    const long *: "const long *", \
    const unsigned long *: "const unsigned long *", \
    const long long *: "const long long *", \
    const unsigned long long *: "const unsigned long long *", \
    const float *: "const float *", \
    const double *: "const double *", \
    const long double *: "const long double *", \
    void *: "void *", \
    char **: "char **", \
    signed char **: "signed char **", \
    unsigned char **: "unsigned char **", \
    short **: "short **", \
    unsigned short **: "unsigned short **", \
    int **: "int **", \
    unsigned int **: "unsigned int **", \
    long **: "long **", \
    unsigned long **: "unsigned long **", \
    long long **: "long long **", \
    unsigned long long **: "unsigned long long **", \
    float **: "float **", \
    double **: "double **", \
    long double **: "long double **", \
    const char **: "const char **", \
    const signed char **: "const signed char **", \
    const unsigned char **: "const unsigned char **", \
    const int **: "const int **", \
    const unsigned int **: "const unsigned int **", \
    const long **: "const long **", \
    const unsigned long **: "const unsigned long **", \
    const long long **: "const long long **", \
    const unsigned long long **: "const unsigned long long **", \
    const float **: "const float **", \
    const double **: "const double **", \
    const long double **: "const long double **", \
    void **: "void **", \
    char ***: "char ***", \
    signed char ***: "signed char ***", \
    unsigned char ***: "unsigned char ***", \
    short ***: "short ***", \
    unsigned short ***: "unsigned short ***", \
    int ***: "int ***", \
    unsigned int ***: "unsigned int ***", \
    long ***: "long ***", \
    unsigned long ***: "unsigned long ***", \
    long long ***: "long long ***", \
    unsigned long long ***: "unsigned long long ***", \
    float ***: "float ***", \
    double ***: "double ***", \
    long double ***: "long double ***", \
    const char ***: "const char ***", \
    const signed char ***: "const signed char ***", \
    const unsigned char ***: "const unsigned char ***", \
    const int ***: "const int ***", \
    const unsigned int ***: "const unsigned int ***", \
    const long ***: "const long ***", \
    const unsigned long ***: "const unsigned long ***", \
    const long long ***: "const long long ***", \
    const unsigned long long ***: "const unsigned long long ***", \
    const float ***: "const float ***", \
    const double ***: "const double ***", \
    const long double ***: "const long double ***", \
    void ***: "void ***", \
    default: "unknown")

void print_type(const char *name, const char *type) {
    printf("[%s] => [%s]\n", name, type);
}

#define gettype(var) print_type(#var, TYPE_NAME(var))

#endif // CUSTOM_GETTYPE_H
