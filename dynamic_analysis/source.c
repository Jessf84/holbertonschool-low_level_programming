#include <stdio.h>
#include <stdint.h>

uint32_t compute_target(uint32_t k) {
    return k ^ 0xDEADBEEF;
}

int validate(uint32_t k) {
    uint32_t tgt = compute_target(k);
    if ((tgt & 1u) != 0) {
        tgt += 0x1234;
    } else {
        tgt -= 0x1234;
    }
    uint16_t mask = (uint16_t)(tgt & 0xFFFF);
    uint16_t sig = (uint16_t)(tgt >> 16);
    return mask ^ sig;
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <number>\n", argv[0]);
        return 1;
    }
    uint32_t val = (uint32_t)atoi(argv[1]);
    int result = validate(val);
    printf("Result: %d\n", result);
    return 0;
}
