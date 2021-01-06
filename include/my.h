/*
** EPITECH PROJECT, 2020
** LS
** File description:
** my_ls
*/

#ifndef MY_LS_H_
#define MY_LS_H_

//best printers ever
void my_printf(char *str, ...);

//open_files
int fs_open_file_no_str(char const *filepath);


char *my_strcpy_te(char *dest, char *src);
//int my_strlen(char const *str);
char *my_strlowcase(char *str);

//getnbr
int  my_atoi(char *str);

//my_strlen bg
int my_strlen_rec(char *str);

#endif /* !MY_LS_H_ */
