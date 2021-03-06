//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ---------------- Integer Types Definitions -----------------

typedef int8_t int2_t;

// ----------------- Float Types Definitions ------------------

typedef float float32_t;
typedef double float64_t;

// ------------------------ Structures ------------------------

struct _IO_FILE {
    int32_t e0;
};

// ------------------- Function Prototypes --------------------

int32_t bonus(void);
int32_t fov(float32_t a1);
int32_t level_five(void);
int32_t level_four(void);
int32_t level_one(void);
int32_t level_three(void);
int32_t level_two(void);
int32_t ordinal(int32_t a1);
int32_t tumbalek(uint32_t a1);

// --------------------- Global Variables ---------------------

int32_t g1 = 0; // ebp
bool g2 = false; // fpu_ctrl_DM
bool g3 = false; // fpu_ctrl_IM
bool g4 = false; // fpu_ctrl_OM
int2_t g5 = 0; // fpu_ctrl_PC
bool g6 = false; // fpu_ctrl_PM
int2_t g7 = 0; // fpu_ctrl_RC
bool g8 = false; // fpu_ctrl_UM
bool g9 = false; // fpu_ctrl_X
bool g10 = false; // fpu_ctrl_ZM
char (*g11)[219] = "================================================================\n                            LEVEL %02d                              \n================================================================\nEnter secret code: "; // 0x804b07c
struct _IO_FILE * g12 = NULL; // 0x804b080
struct _IO_FILE * g13 = NULL; // 0x804b084

// ------------------------ Functions -------------------------

// Address range: 0x8048fb2 - 0x8049041
int32_t level_one(void) {
    printf((char *)*(int32_t *)&g11);
    int32_t str;
    fgets((char *)&str, 32, g12);
    strcspn((char *)&str, "\n");
    int32_t result = strcmp("7h15 15 4 h1dd3n 57r1n6", (char *)&str) == 0;
    if (*(int32_t *)20 != *(int32_t *)20) {
        // 0x804903b
        __stack_chk_fail();
        // branch -> 0x8049040
    }
    // 0x8049040
    return result;
}

// Address range: 0x8049042 - 0x80490f9
int32_t level_two(void) {
    int32_t str2 = 0x6e316837; // bp-73
    printf((char *)*(int32_t *)&g11);
    int32_t str;
    fgets((char *)&str, 32, g12);
    strcspn((char *)&str, "\n");
    int32_t strcmp_rc = strcmp((char *)&str2, (char *)&str); // 0x80490cf
    if (*(int32_t *)20 != *(int32_t *)20) {
        // 0x80490f3
        __stack_chk_fail();
        // branch -> 0x80490f8
    }
    // 0x80490f8
    return strcmp_rc == 0;
}

// Address range: 0x80490fa - 0x8049179
int32_t tumbalek(uint32_t a1) {
    uint32_t v1 = a1 / 16 % 16 | 16 * a1; // 0x8049126
    uint32_t v2 = v1 / 4 & 51 | 4 * v1 & 204; // 0x8049143
    if (*(int32_t *)20 != *(int32_t *)20) {
        // 0x8049173
        __stack_chk_fail();
        // branch -> 0x8049178
    }
    // 0x8049178
    int32_t v3;
    g1 = v3;
    return 0x1000000 * (v2 / 2 & 85 | 2 * v2 & 170) / 0x1000000;
}

// Address range: 0x804917a - 0x8049263
int32_t level_three(void) {
    int32_t v1;
    g1 = &v1;
    int32_t v2 = *(int32_t *)20; // 0x8049184
    int32_t v3;
    memcpy((char *)&v3, "N", 17);
    printf((char *)*(int32_t *)&g11);
    int32_t str;
    fgets((char *)&str, 32, g12);
    strcspn((char *)&str, "\n");
    int32_t v4 = 0; // bp-140
    int32_t v5 = 0; // 0x804920d
    // branch -> 0x80491fc
    while (true) {
        char v6 = *(char *)(v5 + (int32_t)&str); // 0x8049207
        int32_t v7 = *(int32_t *)(4 * v5 - 128 + g1); // 0x8049213
        if ((int32_t)v6 == tumbalek(0x1000000 * v7 / 0x1000000)) {
            int32_t v8 = v4 + 1; // 0x8049231
            v4 = v8;
            if (v8 >= 17) {
                // break -> 0x804924b
                break;
            }
            v5 = v8;
            // continue -> 0x80491fc
            continue;
        }
        // 0x804924b
        if (*(int32_t *)20 != v2) {
            // 0x8049257
            __stack_chk_fail();
            // branch -> 0x804925c
        }
        // 0x804925c
        return 0;
    }
    // 0x804924b
    if (*(int32_t *)20 != v2) {
        // 0x8049257
        __stack_chk_fail();
        // branch -> 0x804925c
    }
    // 0x804925c
    return 1;
}

// Address range: 0x8049264 - 0x80492ab
int32_t ordinal(int32_t a1) {
    int32_t result = 0;
    if (a1 > 0) {
        int32_t v1 = a1 % 2; // 0x804928a
        while (a1 > 1) {
            // 0x8049284
            a1 /= 2;
            v1 += a1 % 2;
            // continue -> 0x8049284
        }
        // 0x8049290
        result = v1;
        // branch -> 0x8049296
    }
    // 0x8049296
    if (*(int32_t *)20 != *(int32_t *)20) {
        // 0x80492a5
        __stack_chk_fail();
        // branch -> 0x80492aa
    }
    // 0x80492aa
    int32_t v2;
    g1 = v2;
    return result;
}

// Address range: 0x80492ac - 0x80493ee
int32_t level_four(void) {
    int32_t v1;
    int32_t v2 = &v1; // 0x80492af_3
    int32_t v3 = *(int32_t *)20; // 0x80492b3
    int32_t str = 0x46544347; // bp-29
    int32_t v4; // eax
    int32_t v5; // bp+235
    if (ptrace(0) == -1) {
        // 0x80492eb
        puts("GDB IS NOT ALLOWED!");
        v4 = 0;
        v5 = 0;
        // branch -> 0x80493dc
    } else {
        // 0x8049305
        printf((char *)*(int32_t *)&g11);
        int32_t v6;
        int32_t v7;
        int32_t v8;
        int32_t v9;
        int32_t v10;
        int32_t v11;
        int32_t v12;
        int32_t v13;
        int32_t v14;
        int32_t v15;
        int32_t v16;
        int32_t v17;
        scanf("%d %d %d %d %d %d %d %d %d %d %d %d", &v17, &v16, &v15, &v14, &v13, &v12, &v11, &v10, &v9, &v8, &v7, &v6);
        // branch -> 0x804937a
        while (getchar() != 10) {
            // 0x804937a
            // continue -> 0x804937a
        }
        // 0x80493bf
        if (strlen((char *)&str) != 0) {
            int32_t v18 = 0;
            // branch -> 0x804938d
            while (true) {
                char v19 = *(char *)(v18 + (int32_t)&str); // 0x8049395
                *(int32_t *)(v2 - 16) = (int32_t)v19;
                *(int32_t *)(v2 - 20) = 0x80493a4;
                int32_t v20;
                int32_t v21 = ordinal(v20); // 0x804939f
                int32_t v22 = v18 + 1; // 0x80493bb
                if (v21 == *(int32_t *)(4 * v18 - 76 + g1)) {
                    // 0x80493bf
                    if (strlen((char *)&str) <= v22) {
                        // break -> 0x80493d7
                        break;
                    }
                    v18 = v22;
                    // continue -> 0x804938d
                    continue;
                }
                // 0x80493dc
                if (*(int32_t *)20 != v3) {
                    // 0x80493e8
                    __stack_chk_fail();
                    // branch -> 0x80493ed
                }
                // 0x80493ed
                return 0;
            }
            // 0x80493d7
            // branch -> 0x80493dc
            // 0x80493dc
            if (*(int32_t *)20 != v3) {
                // 0x80493e8
                __stack_chk_fail();
                // branch -> 0x80493ed
            }
            // 0x80493ed
            return 1;
        }
        // 0x80493d7
        v4 = 1;
        v5 = 1;
        // branch -> 0x80493dc
    }
    // 0x80493dc
    int32_t result; // 0x80493ee_2
    if (*(int32_t *)20 != v3) {
        // 0x80493e8
        __stack_chk_fail();
        result = v4;
        // branch -> 0x80493ed
    } else {
        result = v5;
    }
    // 0x80493ed
    return result;
}

// Address range: 0x80493ef - 0x80494df
int32_t fov(float32_t a1) {
    int16_t v1 = g2 ? 2 : 0; // 0x8049415
    int16_t v2 = g10 ? 4 : 0; // 0x8049415
    int16_t v3 = g4 ? 8 : 0; // 0x8049415
    int16_t v4 = g8 ? 16 : 0; // 0x8049415
    int16_t v5 = g6 ? 32 : 0; // 0x8049415
    int16_t v6 = g9 ? 0x1000 : 0; // 0x8049415
    uint32_t v7 = (int32_t)((int16_t)g3 | v1 | v2 | v3 | v4 | v5 | 256 * (int16_t)g5 | 1024 * (int16_t)g7 | v6 | 64); // 0x8049415_0
    g3 = v7 % 2 != 0;
    g2 = (v7 & 2) != 0;
    g10 = (v7 & 4) != 0;
    g4 = (v7 & 8) != 0;
    g8 = (v7 & 16) != 0;
    g6 = (v7 & 32) != 0;
    g9 = (v7 & 0x1000) != 0;
    if (*(int32_t *)20 != *(int32_t *)20) {
        // 0x80494d7
        __stack_chk_fail();
        // branch -> 0x80494de
    }
    // 0x80494de
    int32_t v8;
    g1 = v8;
    return 0x5f3759df - (int32_t)a1 / 2;
}

// Address range: 0x80494e0 - 0x80495e2
int32_t level_five(void) {
    int32_t v1 = *(int32_t *)20; // 0x80494e7
    printf((char *)*(int32_t *)&g11);
    int32_t v2;
    int32_t v3;
    int32_t v4;
    int32_t v5;
    int32_t v6;
    scanf("%f %f %f %f %f", &v6, &v5, &v4, &v3, &v2);
    // branch -> 0x8049558
    while (getchar() != 10) {
        // 0x8049558
        // continue -> 0x8049558
    }
    // 0x80495c5
    int32_t v7;
    int32_t v8 = &v7; // 0x804956e
    int32_t v9 = 0;
    // branch -> 0x804956b
    while (true) {
        int32_t v10 = 4 * v9; // 0x804956e
        fov(*(float32_t *)(v8 - 32 + v10));
        float64_t v11 = round(0.0); // 0x804958e
        int16_t v12 = g2 ? 2 : 0; // 0x8049596
        int16_t v13 = g10 ? 4 : 0; // 0x8049596
        int16_t v14 = g4 ? 8 : 0; // 0x8049596
        int16_t v15 = g8 ? 16 : 0; // 0x8049596
        int16_t v16 = g6 ? 32 : 0; // 0x8049596
        int16_t v17 = g9 ? 0x1000 : 0; // 0x8049596
        int16_t v18;
        int16_t v19;
        uint32_t v20 = (int32_t)(1024 * v18 | 256 * v19 | (int16_t)g3 | v12 | v13 | v14 | v15 | v16 | v17 | 64); // 0x8049596_0
        g3 = v20 % 2 != 0;
        g2 = (v20 & 2) != 0;
        g10 = (v20 & 4) != 0;
        g4 = (v20 & 8) != 0;
        g8 = (v20 & 16) != 0;
        g6 = (v20 & 32) != 0;
        int2_t v21 = (int2_t)(v20 / 256) & -2; // 0x80495a9
        g5 = v21;
        int2_t v22 = (int2_t)(v20 / 1024) & -2; // 0x80495a9
        g7 = v22;
        g9 = (v20 & 0x1000) != 0;
        int32_t v23 = g1; // 0x80495b2
        int32_t v24 = *(int32_t *)(v10 - 52 + v23); // 0x80495b2
        int32_t v25 = v9 + 1; // 0x80495c1
        if ((int32_t)v11 == v24) {
            // 0x80495c5
            if (v25 >= 5) {
                // break -> 0x80495d0
                break;
            }
            v8 = v23;
            v9 = v25;
            v18 = v22;
            v19 = v21;
            // continue -> 0x804956b
            continue;
        }
        // 0x80495d0
        if (*(int32_t *)20 != v1) {
            // 0x80495dc
            __stack_chk_fail();
            // branch -> 0x80495e1
        }
        // 0x80495e1
        return 0;
    }
    // 0x80495d0
    if (*(int32_t *)20 != v1) {
        // 0x80495dc
        __stack_chk_fail();
        // branch -> 0x80495e1
    }
    // 0x80495e1
    return 1;
}

// Address range: 0x80495e3 - 0x80496aa
int32_t bonus(void) {
    int32_t str2 = 0x20643164; // bp-50
    printf((char *)*(int32_t *)&g11);
    int32_t str;
    fgets((char *)&str, 32, g12);
    strcspn((char *)&str, "\n");
    int32_t strcmp_rc = strcmp((char *)&str2, (char *)&str); // 0x8049680
    if (*(int32_t *)20 != *(int32_t *)20) {
        // 0x80496a4
        __stack_chk_fail();
        // branch -> 0x80496a9
    }
    // 0x80496a9
    return strcmp_rc == 0;
}

// Address range: 0x80496ab - 0x80497af
int main(int argc, char ** argv) {
    int32_t v1 = *(int32_t *)20; // 0x80496bd
    setbuf(g13, NULL);
    if (level_one() == 0) {
        // 0x804977b
        puts("y0u 4r3n'7 600d 3n0u6h!");
        // branch -> 0x8049790
        // 0x8049790
        if (*(int32_t *)20 != v1) {
            // 0x804979c
            __stack_chk_fail();
            // branch -> 0x80497a1
        }
        // 0x80497a1
        return 1;
    }
    // 0x80496e7
    puts("GCTF{FLAG_ONE}");
    if (level_two() == 0) {
        // 0x804977b
        puts("y0u 4r3n'7 600d 3n0u6h!");
        // branch -> 0x8049790
        // 0x8049790
        if (*(int32_t *)20 != v1) {
            // 0x804979c
            __stack_chk_fail();
            // branch -> 0x80497a1
        }
        // 0x80497a1
        return 1;
    }
    // 0x8049700
    puts("GCTF{FLAG_TWO}");
    if (level_three() == 0) {
        // 0x804977b
        puts("y0u 4r3n'7 600d 3n0u6h!");
        // branch -> 0x8049790
        // 0x8049790
        if (*(int32_t *)20 != v1) {
            // 0x804979c
            __stack_chk_fail();
            // branch -> 0x80497a1
        }
        // 0x80497a1
        return 1;
    }
    // 0x8049719
    puts("GCTF{FLAG_THREE}");
    if (level_four() == 0) {
        // 0x804977b
        puts("y0u 4r3n'7 600d 3n0u6h!");
        // branch -> 0x8049790
        // 0x8049790
        if (*(int32_t *)20 != v1) {
            // 0x804979c
            __stack_chk_fail();
            // branch -> 0x80497a1
        }
        // 0x80497a1
        return 1;
    }
    // 0x8049732
    puts("GCTF{FLAG_FOUR}");
    if (level_five() == 0) {
        // 0x804977b
        puts("y0u 4r3n'7 600d 3n0u6h!");
        // branch -> 0x8049790
        // 0x8049790
        if (*(int32_t *)20 != v1) {
            // 0x804979c
            __stack_chk_fail();
            // branch -> 0x80497a1
        }
        // 0x80497a1
        return 1;
    }
    // 0x804974b
    puts("GCTF{FLAG_FIVE}");
    if (bonus() != 0) {
        // 0x8049764
        puts("GCTF{FLAG_BONUS}");
        // branch -> 0x8049790
        // 0x8049790
        if (*(int32_t *)20 != v1) {
            // 0x804979c
            __stack_chk_fail();
            // branch -> 0x80497a1
        }
        // 0x80497a1
        return 1;
    }
    // 0x804977b
    puts("y0u 4r3n'7 600d 3n0u6h!");
    // branch -> 0x8049790
    // 0x8049790
    if (*(int32_t *)20 != v1) {
        // 0x804979c
        __stack_chk_fail();
        // branch -> 0x80497a1
    }
    // 0x80497a1
    return 1;
}

// --------------- Dynamically Linked Functions ---------------

// void __stack_chk_fail(void);
// char * fgets(char * restrict s, int n, FILE * restrict stream);
// int getchar(void);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// int printf(const char * restrict format, ...);
// long int ptrace(enum __ptracerequest __request, ...);
// int puts(const char * s);
// double round(double);
// int scanf(const char * restrict format, ...);
// void setbuf(FILE * restrict stream, char * restrict buf);
// int strcmp(const char * s1, const char * s2);
// size_t strcspn(const char * s, const char * reject);
// size_t strlen(const char * s);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (5.4.0)
// Detected functions: 10
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-10-05 14:17:12
