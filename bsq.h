//
// Created by Jake Queen on 4/1/18.
//

#ifndef BSQ_H

# define BSQ_H

#include <sys/types.h>

#include <sys/stat.h>

#include <fcntl.h>

#include <unistd.h>

#include <stdlib.h>

unsigned int BUF_SIZE = 4096;

typedef struct  s_matrix

{

    int     wide;

    int     deep;

    char    open;

    char    obst;

    char    fill;

}               t_matrix;

void        ft_putstr(char *);

t_matrix    init_map(char *);

int         **parse_map(t_matrix, char *);

#endif
