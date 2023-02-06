// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vlsseg4e64_v_f64m1(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, const double *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e64_v_f64m1(v0, v1, v2, v3, base, bstride, vl);
}

void test_vlsseg4e64_v_f64m2(vfloat64m2_t *v0, vfloat64m2_t *v1, vfloat64m2_t *v2, vfloat64m2_t *v3, const double *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e64_v_f64m2(v0, v1, v2, v3, base, bstride, vl);
}

void test_vlsseg4e64_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e64_v_i64m1(v0, v1, v2, v3, base, bstride, vl);
}

void test_vlsseg4e64_v_i64m2(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vint64m2_t *v3, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e64_v_i64m2(v0, v1, v2, v3, base, bstride, vl);
}

void test_vlsseg4e64_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e64_v_u64m1(v0, v1, v2, v3, base, bstride, vl);
}

void test_vlsseg4e64_v_u64m2(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vuint64m2_t *v3, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e64_v_u64m2(v0, v1, v2, v3, base, bstride, vl);
}

void test_vlsseg4e64_v_f64m1_m(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vbool64_t mask, const double *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e64_v_f64m1_m(v0, v1, v2, v3, mask, base, bstride, vl);
}

void test_vlsseg4e64_v_f64m2_m(vfloat64m2_t *v0, vfloat64m2_t *v1, vfloat64m2_t *v2, vfloat64m2_t *v3, vbool32_t mask, const double *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e64_v_f64m2_m(v0, v1, v2, v3, mask, base, bstride, vl);
}

void test_vlsseg4e64_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vbool64_t mask, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e64_v_i64m1_m(v0, v1, v2, v3, mask, base, bstride, vl);
}

void test_vlsseg4e64_v_i64m2_m(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vint64m2_t *v3, vbool32_t mask, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e64_v_i64m2_m(v0, v1, v2, v3, mask, base, bstride, vl);
}

void test_vlsseg4e64_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vbool64_t mask, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e64_v_u64m1_m(v0, v1, v2, v3, mask, base, bstride, vl);
}

void test_vlsseg4e64_v_u64m2_m(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vuint64m2_t *v3, vbool32_t mask, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e64_v_u64m2_m(v0, v1, v2, v3, mask, base, bstride, vl);
}
