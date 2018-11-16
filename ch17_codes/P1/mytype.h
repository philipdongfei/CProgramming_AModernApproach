#ifndef MYTYPE_H
#define MYTYPE_H

#define NAME_LEN 25
#define MAX_PARTS 100
#define INIT_PARTS 2 

struct part {
    int number;
    char name[NAME_LEN+1];
    int on_hand;
    float price;
};

#endif
