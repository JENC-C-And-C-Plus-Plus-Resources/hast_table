#include <iostream>
#include <vector>
#include <string>

#include "./HashTable/HashTable.h"

using namespace std;

int main() {
    
    char* name = new char[5]();
    name[0] = '3';
    name[1] = 'x';
    name[2] = 'c';
    name[3] = 'd';
    unsigned long hash_value = hash_function(name);
    printf("The result of %s is %lu \n", name, hash_value);
    return 0;
}