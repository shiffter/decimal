
#include <stdio.h>
#include <math.h>
#include "./s21_decimal.h"


int main() {
    
    s21_decimal dec1 = {{0, 0, 0, 0}};
    put_bit(&dec1, 0, 1);
    put_bit(&dec1, 1, 1);
    put_bit(&dec1, 2, 0);
    put_bit(&dec1, 3, 1);
    put_exp(&dec1, 1);
//
//    float f = 5.5;
//    unsigned int fbits = *((unsigned int*)&f);
//    int scale_f = scale(f);
//    printf("scale = %d\n", scale_f);
//    printf("start_tmp\n");
//        int out;
//        for (unsigned int mask = 0x80000000, i = 0; mask; mask >>= 1, i++) {
//            out = !!(fbits&mask);
//        if (i > 0 && i < 9)
//            printf("\x1B[35m""%d", out);
//        else if(i >= 9 && i < 9 + (unsigned int)scale_f)
//            printf("\x1B[33m""%d", out);
//        else
//            printf( "\x1B[0m""%d", out);
//        }
//    printf("\nendtmp\n");
//
//    fbits <<= 8; // delete exp
//
//
//    for (unsigned int mask = 0x80000000, i = 23; mask; mask >>= 1, i--) {
//        if (i == 23) {
//            put_bit(&dec1, i, 1);
//        } else if (!!(fbits&mask)) { 
//            put_bit(&dec1, i, 1);
//        } else {
//            put_bit(&dec1, i, 0); }
//    }
//
//
//    for (unsigned int mask = 0b1; !(mask&dec1.bits[0]); dec1.bits[0] >>= 1);
//
// 
//    printf("start_tmp\n");
//        for (unsigned int mask = 0x80000000, i = 0; mask; mask >>= 1, i++) {
//            out = !!(fbits&mask);
//        if (i > 0 && i < 9)
//            printf("\x1B[35m""%d", out);
//        else if(i >= 9 && i < 9 + (unsigned int)scale_f)
//            printf("\x1B[33m""%d", out);
//        else
//            printf( "\x1B[0m""%d", out);
//        }
//    printf("\nendtmp\n");
//
//    put_exp(&dec1, 20);
//
//    printf("res = %f\n", res);
//    unsigned int res = 0;


//    for (unsigned int mask = 0x80000000, i = 0; mask; mask >>= 1, i++) {
//        if (i == 0) {
//            if(!!(fbits & mask))
//                put_bit(&dec1, 127, 1);
//        }
//        if(i > 0 && i < 9) {
//            if(!!(fbits & mask))
//                put_bit(&dec1, 120-i, 1);
//            else
//                put_bit(&dec1, 120-i, 0);
//               
//           
//            }
//        unsigned int 
//        printf("%d", !(fbits&mask));
//
//    }
//
//    printf("\nscale = %d\n", scale(f));

//    printf("start\n");
//
//    for (unsigned int mask = 2147483648; mask; mask >>= 1) 
//        printf("%d", !!(fbits&mask));
//    printf("\nend\n");


//
//
//    for (unsigned int mask = 0x80000000, scale = 1; mask; mask >>= 1, scale++) {
//        if (!!(fbits & mask))
//            res += pow(2, scale);
//        else
//            continue;
//        }

    
//        printf("%d", !!(fbits&mask));
 
//    printf("res = %d\n\n", res);
//    put_exp(&dec1, 2);
    //put_bit(&dec1, 127, 0);

    //s21_decimal dec2 = {{0, 1, 0, 0}};
    //put_exp(&dec2, 0);
    //put_bit(&dec2, 127, 1);
//    printf("res =%d\n", s21_is_greater(dec1, dec2));


//    printf("is_less = %d\n", s21_is_less(dec1, dec2));
//    printf("is_less_or_eq  = %d\n",   s21_is_less_or_equal(dec1, dec2));
      print_bits(dec1);
//    print_bits(dec2);
//
    char* f1 = dec_to_str(dec1);
    printf("dec1 || %s\n", f1);
    free(f1);
//
//    char* f2 = dec_to_str(dec2);
//    printf("dec2 || %s\n", f2);
//    free(f2);
//
//    centering(&dec1, &dec2);
//     
//    print_bits(dec1);
//    print_bits(dec2);
//
//    char* f11 = dec_to_str(dec1);
//    printf("dec1 || %s\n", f11);
//    free(f11);
//
//    char* f22 = dec_to_str(dec2);
//    printf("dec2 || %s\n", f22);
//    free(f22);
//



//    s21_decimal dec1 = {{604814663, 4576, MAX_INT, 0}};
//    put_exp(&dec1, 28);
//    put_bit(&dec1, 127, 0);
//
//    s21_decimal dec2 = {{445476587, 99759684, 687413000, 0}};
//    put_exp(&dec2, 28);
//    put_bit(&dec2, 127, 0);
//    
//    s21_decimal dec3 = {{0, 0, 0, 0}};
//    s21_decimal dec4 = {{0, 0, 0, 0}};
//
//    printf("SUB %d\n", s21_mul(dec1, dec2, &dec4));
//
//    print_bits(dec1);
//    print_bits(dec2);
//    print_bits(dec3);
//    print_bits(dec4);
//
//    char* f1 = dec_to_str(dec1);
//    printf("dec1 || %s\n", f1);
//    free(f1);
//
//    char* f2 = dec_to_str(dec2);
//    printf("dec2 || %s\n", f2);
//    free(f2);
//
//    char* f3 = dec_to_str(dec3);
//    printf("res1 || %s\n", f3);
//    free(f3);
//
//    char* f4 = dec_to_str(dec4);
//    printf("%s\n", f4);
//    free(f4);
//
    return 0;
}
