//
// Created by ruan on 2020/5/2.
//

#include <stdio.h>
#include <stdint.h>
#include "adlist.h"
#include "dict.h"

int main() {
    unsigned  int h;
    h = dictGenCaseHashFunction("fafdfsafafasdfasdfasfdsfdsdfadf", 12);
    printf("xxxxx %u\n", h);
    h = dictGenCaseHashFunction("fafdfsafafasdfasdfasfdsfdsdfadf", 7);
    printf("xxxxx %u\n", h);
    h = dictGenCaseHashFunction("fafdfsafafasdfasdfasfdsfdsdfadf", 2);
    printf("xxxxx %u\n", h);

    return 0;
}
