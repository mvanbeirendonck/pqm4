#ifndef NTT_H
#define NTT_H

#include "SABER_params.h"
#include <stdint.h>

#if SABER_L == 2 // LightSaber
#define RmodM -4378189
#define RinvN 4191613
#define R2invN 8870406
#define MOD 20972417
#define Mprime 1544799103
static const int32_t mul_table[64] = {9259893, -9259893, 7725652, -7725652, -741305, 741305, 5430861, -5430861, 8941483, -8941483, -1904165, 1904165, -1510590, 1510590, 4179776, -4179776, 1087096, -1087096, 5477510, -5477510, 4288247, -4288247, -4589585, 4589585, 4406378, -4406378, -962293, 962293, -4903106, 4903106, -3217734, 3217734, -4768008, 4768008, -10114282, 10114282, -1582389, 1582389, -9352320, 9352320, 2044676, -2044676, -1889742, 1889742, -3496807, 3496807, -5815793, 5815793, -1035446, 1035446, 8431160, -8431160, 563090, -563090, -4899008, 4899008, 9979851, -9979851, -8135419, 8135419, -3075030, 3075030, 7867132, -7867132};
static const int32_t root_table[64] = {1126591, -5474819, -547396, -5772959, 4437632, 2009459, -8766387, 5132106, -9595122, -3921010, 9259893, 7725652, -741305, 5430861, -3392653, 6496586, -9784786, 8941483, -1904165, -1510590, 4179776, 3590343, -8974179, 1102780, 1087096, 5477510, 4288247, -4589585, -245695, 1446745, -440588, 4406378, -962293, -4903106, -3217734, 9479185, 710543, 7712526, -4768008, -10114282, -1582389, -9352320, 1213433, -9241782, -4253525, 2044676, -1889742, -3496807, -5815793, -2968645, -8075200, 9346672, -1035446, 8431160, 563090, -4899008, -5531124, 8159833, 1229943, 9979851, -8135419, -3075030, 7867132};
static const int32_t inv_root_table[65] = {5531124, -1229943, -8159833, -7867132, 3075030, 8135419, -9979851, 2968645, -9346672, 8075200, 4899008, -563090, -8431160, 1035446, -1213433, 4253525, 9241782, 5815793, 3496807, 1889742, -2044676, -9479185, -7712526, -710543, 9352320, 1582389, 10114282, 4768008, 245695, 440588, -1446745, 3217734, 4903106, 962293, -4406378, -3590343, -1102780, 8974179, 4589585, -4288247, -5477510, -1087096, 3392653, 9784786, -6496586, -4179776, 1510590, 1904165, -8941483, -5132106, 3921010, 9595122, -5430861, 741305, -7725652, -9259893, -179895, 547396, 5474819, 8766387, -2009459, -4437632, 5772959, 8870406, RmodM};
#else // Saber, FireSaber
#define RmodM -8432555
#define RinvN -8389379
#define R2invN 7689784
#define MOD 25166081
#define Mprime 41877759
static const int32_t root_table[64] = {2921358, -10203707, -1203107, 6577444, 1776511, -4194664, 5735629, 7301157, -4359117, 5669200, -9600669, 10575964, 8064557, -819256, -9084979, -7944926, 1686897, -588496, -8693794, -7460755, 2723061, -11637995, -4810496, 7146164, 4092287, -3261033, -5563113, -11307548, -7261676, -4293923, -6267356, -9567042, 11980428, 6931502, 2510833, 4034819, -1988985, -8060830, -10319196, -6726360, 10171507, 8693725, 647681, -9344183, 2733537, -42688, 10505644, -9502337, 10910265, 2695651, 11450840, -12030083, 5318976, -1134236, -614272, -6236460, -2559945, -908786, -2665284, 5184115, -1069349, -9233574, 12174351};
static const int32_t mul_table[64] = {-9600669, 9600669, 10575964, -10575964, 8064557, -8064557, -819256, 819256, -588496, 588496, -8693794, 8693794, -7460755, 7460755, 2723061, -2723061, 4092287, -4092287, -3261033, 3261033, -5563113, 5563113, -11307548, 11307548, -9567042, 9567042, 11980428, -11980428, 6931502, -6931502, 2510833, -2510833, -10319196, 10319196, -6726360, 6726360, 10171507, -10171507, 8693725, -8693725, -42688, 42688, 10505644, -10505644, -9502337, 9502337, 10910265, -10910265, 5318976, -5318976, -1134236, 1134236, -614272, 614272, -6236460, 6236460, 5184115, -5184115, -1069349, 1069349, -9233574, 9233574, 12174351, -12174351};
static const int32_t inv_root_table[65] = {2559945, 2665284, 908786, -12174351, 9233574, 1069349, -5184115, -2695651, 12030083, -11450840, 6236460, 614272, 1134236, -5318976, -647681, -2733537, 9344183, -10910265, 9502337, -10505644, 42688, -4034819, 8060830, 1988985, -8693725, -10171507, 6726360, 10319196, 7261676, 6267356, 4293923, -2510833, -6931502, -11980428, 9567042, 11637995, -7146164, 4810496, 11307548, 5563113, 3261033, -4092287, 9084979, -1686897, 7944926, -2723061, 7460755, 8693794, 588496, -7301157, -5669200, 4359117, 819256, -8064557, -10575964, 9600669, -11182464, 1203107, 10203707, -5735629, 4194664, -1776511, -6577444, 7689784, RmodM};
#endif

void _NTT_forward(uint16_t *a, const int32_t *root_table, uint32_t mod, uint32_t modprime, uint32_t *tmp);
void _NTT_forward_inner(uint16_t *a, const int32_t *root_table, uint32_t mod, uint32_t modprime, uint32_t *tmp);
void _NTT_inv(uint32_t *in, const int32_t *inv_root_table, uint32_t mod, uint32_t modprime,  uint16_t *out);
void _NTT_inv_inner(uint32_t *in, const int32_t *inv_root_table, uint32_t mod, uint32_t modprime, uint16_t *out);

#define NTT_inv_inner(in, out) _NTT_inv_inner(&in[0], inv_root_table, MOD, Mprime, &out[0])
#define NTT_forward_inner(in, out) _NTT_forward_inner(&in[0], root_table, MOD, Mprime, &out[0])

#if SABER_L == 4

#define NTT_inv(in, out) _NTT_inv(&in[0][0], inv_root_table, MOD, Mprime, &out[0][0]); \
    _NTT_inv(&in[2][0], inv_root_table, MOD, Mprime, &out[2][0])

#define NTT_forward(in, out) _NTT_forward(&in[0][0], root_table, MOD, Mprime, &out[0][0]); \
    _NTT_forward(&in[2][0], root_table, MOD, Mprime, &out[2][0]);

#else

#define NTT_inv(in, out) _NTT_inv(&in[0][0], inv_root_table, MOD, Mprime, &out[0][0])
#define NTT_forward(in, out) _NTT_forward(&in[0][0], root_table, MOD, Mprime, &out[0][0])

#endif

void mul(uint32_t *poly1, const int32_t *mul_table, uint32_t mod, uint32_t modprime, uint32_t *poly2, uint32_t *res);
// out = in1 * in2
#define NTT_mul(in1, in2, out) mul(in1, mul_table, MOD, Mprime, in2, out);

void mul_acc(uint32_t *poly1, const int32_t *mul_table, uint32_t mod, uint32_t modprime, uint32_t *poly2, uint32_t *res);
// out = out + in1 * in2
#define NTT_mul_acc(in1, in2, out) mul_acc(in1, mul_table, MOD, Mprime, in2, out);


#if SABER_L == 2
    void mul_vec(uint32_t *a, const int32_t *mul_table, uint32_t mod, uint32_t modprime, uint32_t *matrix0, uint32_t *matrix1, uint32_t *res);

    #define NTT_vector_mul(in1, in2, out) mul_vec(&in1[0][0], mul_table, MOD, Mprime, &in2[0][0], &in2[1][0], &out[0])
    #define NTT_matrix_mul_transpose(in1, in2, out, j) mul_vec(&in1[0][0], mul_table, MOD, Mprime, &in2[0][j][0], &in2[1][j][0], &out[j][0])

#elif SABER_L == 3
    void mul_vec(uint32_t *a, const int32_t *mul_table, uint32_t mod, uint32_t modprime, uint32_t *matrix0, uint32_t *matrix1, uint32_t *matrix2, uint32_t *res);

    #define NTT_vector_mul(in1, in2, out) mul_vec(&in1[0][0], mul_table, MOD, Mprime, &in2[0][0], &in2[1][0], &in2[2][0], &out[0])
    #define NTT_matrix_mul_transpose(in1, in2, out, j) mul_vec(&in1[0][0], mul_table, MOD, Mprime, &in2[0][j][0], &in2[1][j][0], &in2[2][j][0], &out[j][0])

#elif SABER_L == 4
    void mul_vec(uint32_t *a, const int32_t *mul_table, uint32_t mod, uint32_t modprime, uint32_t *matrix0, uint32_t *matrix1, uint32_t *matrix2, uint32_t *matrix3, uint32_t *res);

    #define NTT_vector_mul(in1, in2, out) mul_vec(&in1[0][0], mul_table, MOD, Mprime, &in2[0][0], &in2[1][0], &in2[2][0], &in2[3][0], &out[0])
    #define NTT_matrix_mul_transpose(in1, in2, out, j) mul_vec(&in1[0][0], mul_table, MOD, Mprime, &in2[0][j][0], &in2[1][j][0], &in2[2][j][0], &in2[3][j][0], &out[j][0])

#endif


#endif