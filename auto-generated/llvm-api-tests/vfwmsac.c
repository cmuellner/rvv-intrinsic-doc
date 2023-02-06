// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat32mf2_t test_vfwmsac_vv_f32mf2(vfloat32mf2_t vd, vfloat16mf4_t vs1, vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwmsac_vv_f32mf2(vd, vs1, vs2, vl);
}

vfloat32mf2_t test_vfwmsac_vf_f32mf2(vfloat32mf2_t vd, _Float16 vs1, vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwmsac_vf_f32mf2(vd, vs1, vs2, vl);
}

vfloat32m1_t test_vfwmsac_vv_f32m1(vfloat32m1_t vd, vfloat16mf2_t vs1, vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwmsac_vv_f32m1(vd, vs1, vs2, vl);
}

vfloat32m1_t test_vfwmsac_vf_f32m1(vfloat32m1_t vd, _Float16 vs1, vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwmsac_vf_f32m1(vd, vs1, vs2, vl);
}

vfloat32m2_t test_vfwmsac_vv_f32m2(vfloat32m2_t vd, vfloat16m1_t vs1, vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwmsac_vv_f32m2(vd, vs1, vs2, vl);
}

vfloat32m2_t test_vfwmsac_vf_f32m2(vfloat32m2_t vd, _Float16 vs1, vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwmsac_vf_f32m2(vd, vs1, vs2, vl);
}

vfloat32m4_t test_vfwmsac_vv_f32m4(vfloat32m4_t vd, vfloat16m2_t vs1, vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwmsac_vv_f32m4(vd, vs1, vs2, vl);
}

vfloat32m4_t test_vfwmsac_vf_f32m4(vfloat32m4_t vd, _Float16 vs1, vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwmsac_vf_f32m4(vd, vs1, vs2, vl);
}

vfloat32m8_t test_vfwmsac_vv_f32m8(vfloat32m8_t vd, vfloat16m4_t vs1, vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwmsac_vv_f32m8(vd, vs1, vs2, vl);
}

vfloat32m8_t test_vfwmsac_vf_f32m8(vfloat32m8_t vd, _Float16 vs1, vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwmsac_vf_f32m8(vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfwmsac_vv_f64m1(vfloat64m1_t vd, vfloat32mf2_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwmsac_vv_f64m1(vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfwmsac_vf_f64m1(vfloat64m1_t vd, float vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwmsac_vf_f64m1(vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfwmsac_vv_f64m2(vfloat64m2_t vd, vfloat32m1_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwmsac_vv_f64m2(vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfwmsac_vf_f64m2(vfloat64m2_t vd, float vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwmsac_vf_f64m2(vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfwmsac_vv_f64m4(vfloat64m4_t vd, vfloat32m2_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwmsac_vv_f64m4(vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfwmsac_vf_f64m4(vfloat64m4_t vd, float vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwmsac_vf_f64m4(vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfwmsac_vv_f64m8(vfloat64m8_t vd, vfloat32m4_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwmsac_vv_f64m8(vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfwmsac_vf_f64m8(vfloat64m8_t vd, float vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwmsac_vf_f64m8(vd, vs1, vs2, vl);
}

vfloat32mf2_t test_vfwmsac_vv_f32mf2_m(vbool64_t mask, vfloat32mf2_t vd, vfloat16mf4_t vs1, vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwmsac_vv_f32mf2_m(mask, vd, vs1, vs2, vl);
}

vfloat32mf2_t test_vfwmsac_vf_f32mf2_m(vbool64_t mask, vfloat32mf2_t vd, _Float16 vs1, vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwmsac_vf_f32mf2_m(mask, vd, vs1, vs2, vl);
}

vfloat32m1_t test_vfwmsac_vv_f32m1_m(vbool32_t mask, vfloat32m1_t vd, vfloat16mf2_t vs1, vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwmsac_vv_f32m1_m(mask, vd, vs1, vs2, vl);
}

vfloat32m1_t test_vfwmsac_vf_f32m1_m(vbool32_t mask, vfloat32m1_t vd, _Float16 vs1, vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwmsac_vf_f32m1_m(mask, vd, vs1, vs2, vl);
}

vfloat32m2_t test_vfwmsac_vv_f32m2_m(vbool16_t mask, vfloat32m2_t vd, vfloat16m1_t vs1, vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwmsac_vv_f32m2_m(mask, vd, vs1, vs2, vl);
}

vfloat32m2_t test_vfwmsac_vf_f32m2_m(vbool16_t mask, vfloat32m2_t vd, _Float16 vs1, vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwmsac_vf_f32m2_m(mask, vd, vs1, vs2, vl);
}

vfloat32m4_t test_vfwmsac_vv_f32m4_m(vbool8_t mask, vfloat32m4_t vd, vfloat16m2_t vs1, vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwmsac_vv_f32m4_m(mask, vd, vs1, vs2, vl);
}

vfloat32m4_t test_vfwmsac_vf_f32m4_m(vbool8_t mask, vfloat32m4_t vd, _Float16 vs1, vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwmsac_vf_f32m4_m(mask, vd, vs1, vs2, vl);
}

vfloat32m8_t test_vfwmsac_vv_f32m8_m(vbool4_t mask, vfloat32m8_t vd, vfloat16m4_t vs1, vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwmsac_vv_f32m8_m(mask, vd, vs1, vs2, vl);
}

vfloat32m8_t test_vfwmsac_vf_f32m8_m(vbool4_t mask, vfloat32m8_t vd, _Float16 vs1, vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwmsac_vf_f32m8_m(mask, vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfwmsac_vv_f64m1_m(vbool64_t mask, vfloat64m1_t vd, vfloat32mf2_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwmsac_vv_f64m1_m(mask, vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfwmsac_vf_f64m1_m(vbool64_t mask, vfloat64m1_t vd, float vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwmsac_vf_f64m1_m(mask, vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfwmsac_vv_f64m2_m(vbool32_t mask, vfloat64m2_t vd, vfloat32m1_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwmsac_vv_f64m2_m(mask, vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfwmsac_vf_f64m2_m(vbool32_t mask, vfloat64m2_t vd, float vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwmsac_vf_f64m2_m(mask, vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfwmsac_vv_f64m4_m(vbool16_t mask, vfloat64m4_t vd, vfloat32m2_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwmsac_vv_f64m4_m(mask, vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfwmsac_vf_f64m4_m(vbool16_t mask, vfloat64m4_t vd, float vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwmsac_vf_f64m4_m(mask, vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfwmsac_vv_f64m8_m(vbool8_t mask, vfloat64m8_t vd, vfloat32m4_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwmsac_vv_f64m8_m(mask, vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfwmsac_vf_f64m8_m(vbool8_t mask, vfloat64m8_t vd, float vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwmsac_vf_f64m8_m(mask, vd, vs1, vs2, vl);
}
