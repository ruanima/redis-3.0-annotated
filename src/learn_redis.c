//
// Created by ruan on 2020/5/2.
//

#include <stdio.h>
#include <stdint.h>
#include "adlist.h"
#include "ziplist.h"
#include "dict.h"
#include "string.h"

void _redisAssert(char *estr, char *file, int line){};

void test_dict() {
    unsigned  int h;
    h = dictGenCaseHashFunction("fafdfsafafasdfasdfasfdsfdsdfadf", 12);
    printf("xxxxx %u\n", h);
    h = dictGenCaseHashFunction("fafdfsafafasdfasdfasfdsfdsdfadf", 7);
    printf("xxxxx %u\n", h);
    h = dictGenCaseHashFunction("fafdfsafafasdfasdfasfdsfdsdfadf", 2);
    printf("xxxxx %u\n", h);
}

void print_hex(unsigned char *zl, unsigned int length) {
    for (unsigned i=0; i<length; i++) {
        printf("%02X\t", (unsigned char )*(zl+i));
    }
    printf("\n");
}

int main() {
    unsigned char *zl;
    zl = ziplistNew();
    unsigned char a[] = "abc";
    ziplistPush(zl, a, strlen(a), 0);
    unsigned char b[] = "123456";
    ziplistPush(zl, b, strlen(b), 0);
    unsigned char c[] = "87654321";
    ziplistPush(zl, c, strlen(c), 0);
    print_hex(zl, (unsigned int) *zl);
    return 0;
}
