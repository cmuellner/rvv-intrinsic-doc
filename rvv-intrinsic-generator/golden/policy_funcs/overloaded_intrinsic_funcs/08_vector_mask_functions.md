
## Vector Mask Functions:

### [Vector Mask Load/Store Functions](../rvv-intrinsic-api.md#74-vector-unit-stride-operations):
This operation don't have Policy Intrinsic Functions.

### [Vector Mask-Register Logical Functions](../rvv-intrinsic-api.md#161-vector-mask-register-logical-operations):
This operation don't have Policy Intrinsic Functions.

### [Vector count population in mask Functions](../rvv-intrinsic-api.md#162-vector-count-population-in-mask-vcpopm):
This operation don't have Policy Intrinsic Functions.

### [Find-first-set mask bit Functions](../rvv-intrinsic-api.md#163-vfirst-find-first-set-mask-bit):
This operation don't have Policy Intrinsic Functions.

### [Set-before-first mask bit Functions](../rvv-intrinsic-api.md#164-vmsbfm-set-before-first-mask-bit):

**Prototypes:**
``` C
// masked functions
vbool1_t vmsbf_ma (vbool1_t mask, vbool1_t op1, size_t vl);
vbool2_t vmsbf_ma (vbool2_t mask, vbool2_t op1, size_t vl);
vbool4_t vmsbf_ma (vbool4_t mask, vbool4_t op1, size_t vl);
vbool8_t vmsbf_ma (vbool8_t mask, vbool8_t op1, size_t vl);
vbool16_t vmsbf_ma (vbool16_t mask, vbool16_t op1, size_t vl);
vbool32_t vmsbf_ma (vbool32_t mask, vbool32_t op1, size_t vl);
vbool64_t vmsbf_ma (vbool64_t mask, vbool64_t op1, size_t vl);
// masked functions
vbool1_t vmsbf_mu (vbool1_t mask, vbool1_t maskedoff, vbool1_t op1, size_t vl);
vbool2_t vmsbf_mu (vbool2_t mask, vbool2_t maskedoff, vbool2_t op1, size_t vl);
vbool4_t vmsbf_mu (vbool4_t mask, vbool4_t maskedoff, vbool4_t op1, size_t vl);
vbool8_t vmsbf_mu (vbool8_t mask, vbool8_t maskedoff, vbool8_t op1, size_t vl);
vbool16_t vmsbf_mu (vbool16_t mask, vbool16_t maskedoff, vbool16_t op1, size_t vl);
vbool32_t vmsbf_mu (vbool32_t mask, vbool32_t maskedoff, vbool32_t op1, size_t vl);
vbool64_t vmsbf_mu (vbool64_t mask, vbool64_t maskedoff, vbool64_t op1, size_t vl);
```

### [Set-including-first mask bit Functions](../rvv-intrinsic-api.md#165-vmsifm-set-including-first-mask-bit):

**Prototypes:**
``` C
// masked functions
vbool1_t vmsif_ma (vbool1_t mask, vbool1_t op1, size_t vl);
vbool2_t vmsif_ma (vbool2_t mask, vbool2_t op1, size_t vl);
vbool4_t vmsif_ma (vbool4_t mask, vbool4_t op1, size_t vl);
vbool8_t vmsif_ma (vbool8_t mask, vbool8_t op1, size_t vl);
vbool16_t vmsif_ma (vbool16_t mask, vbool16_t op1, size_t vl);
vbool32_t vmsif_ma (vbool32_t mask, vbool32_t op1, size_t vl);
vbool64_t vmsif_ma (vbool64_t mask, vbool64_t op1, size_t vl);
// masked functions
vbool1_t vmsif_mu (vbool1_t mask, vbool1_t maskedoff, vbool1_t op1, size_t vl);
vbool2_t vmsif_mu (vbool2_t mask, vbool2_t maskedoff, vbool2_t op1, size_t vl);
vbool4_t vmsif_mu (vbool4_t mask, vbool4_t maskedoff, vbool4_t op1, size_t vl);
vbool8_t vmsif_mu (vbool8_t mask, vbool8_t maskedoff, vbool8_t op1, size_t vl);
vbool16_t vmsif_mu (vbool16_t mask, vbool16_t maskedoff, vbool16_t op1, size_t vl);
vbool32_t vmsif_mu (vbool32_t mask, vbool32_t maskedoff, vbool32_t op1, size_t vl);
vbool64_t vmsif_mu (vbool64_t mask, vbool64_t maskedoff, vbool64_t op1, size_t vl);
```

### [Set-only-first mask bit Functions](../rvv-intrinsic-api.md#166-vmsofm-set-only-first-mask-bit):

**Prototypes:**
``` C
// masked functions
vbool1_t vmsof_ma (vbool1_t mask, vbool1_t op1, size_t vl);
vbool2_t vmsof_ma (vbool2_t mask, vbool2_t op1, size_t vl);
vbool4_t vmsof_ma (vbool4_t mask, vbool4_t op1, size_t vl);
vbool8_t vmsof_ma (vbool8_t mask, vbool8_t op1, size_t vl);
vbool16_t vmsof_ma (vbool16_t mask, vbool16_t op1, size_t vl);
vbool32_t vmsof_ma (vbool32_t mask, vbool32_t op1, size_t vl);
vbool64_t vmsof_ma (vbool64_t mask, vbool64_t op1, size_t vl);
// masked functions
vbool1_t vmsof_mu (vbool1_t mask, vbool1_t maskedoff, vbool1_t op1, size_t vl);
vbool2_t vmsof_mu (vbool2_t mask, vbool2_t maskedoff, vbool2_t op1, size_t vl);
vbool4_t vmsof_mu (vbool4_t mask, vbool4_t maskedoff, vbool4_t op1, size_t vl);
vbool8_t vmsof_mu (vbool8_t mask, vbool8_t maskedoff, vbool8_t op1, size_t vl);
vbool16_t vmsof_mu (vbool16_t mask, vbool16_t maskedoff, vbool16_t op1, size_t vl);
vbool32_t vmsof_mu (vbool32_t mask, vbool32_t maskedoff, vbool32_t op1, size_t vl);
vbool64_t vmsof_mu (vbool64_t mask, vbool64_t maskedoff, vbool64_t op1, size_t vl);
```

### [Vector Iota Functions](../rvv-intrinsic-api.md#168-vector-iota-operations):

**Prototypes:**
``` C
vuint8mf8_t viota_tu (vuint8mf8_t maskedoff, vbool64_t op1, size_t vl);
vuint8mf4_t viota_tu (vuint8mf4_t maskedoff, vbool32_t op1, size_t vl);
vuint8mf2_t viota_tu (vuint8mf2_t maskedoff, vbool16_t op1, size_t vl);
vuint8m1_t viota_tu (vuint8m1_t maskedoff, vbool8_t op1, size_t vl);
vuint8m2_t viota_tu (vuint8m2_t maskedoff, vbool4_t op1, size_t vl);
vuint8m4_t viota_tu (vuint8m4_t maskedoff, vbool2_t op1, size_t vl);
vuint8m8_t viota_tu (vuint8m8_t maskedoff, vbool1_t op1, size_t vl);
vuint16mf4_t viota_tu (vuint16mf4_t maskedoff, vbool64_t op1, size_t vl);
vuint16mf2_t viota_tu (vuint16mf2_t maskedoff, vbool32_t op1, size_t vl);
vuint16m1_t viota_tu (vuint16m1_t maskedoff, vbool16_t op1, size_t vl);
vuint16m2_t viota_tu (vuint16m2_t maskedoff, vbool8_t op1, size_t vl);
vuint16m4_t viota_tu (vuint16m4_t maskedoff, vbool4_t op1, size_t vl);
vuint16m8_t viota_tu (vuint16m8_t maskedoff, vbool2_t op1, size_t vl);
vuint32mf2_t viota_tu (vuint32mf2_t maskedoff, vbool64_t op1, size_t vl);
vuint32m1_t viota_tu (vuint32m1_t maskedoff, vbool32_t op1, size_t vl);
vuint32m2_t viota_tu (vuint32m2_t maskedoff, vbool16_t op1, size_t vl);
vuint32m4_t viota_tu (vuint32m4_t maskedoff, vbool8_t op1, size_t vl);
vuint32m8_t viota_tu (vuint32m8_t maskedoff, vbool4_t op1, size_t vl);
vuint64m1_t viota_tu (vuint64m1_t maskedoff, vbool64_t op1, size_t vl);
vuint64m2_t viota_tu (vuint64m2_t maskedoff, vbool32_t op1, size_t vl);
vuint64m4_t viota_tu (vuint64m4_t maskedoff, vbool16_t op1, size_t vl);
vuint64m8_t viota_tu (vuint64m8_t maskedoff, vbool8_t op1, size_t vl);
vuint8mf8_t viota_m_u8mf8_ta (vbool64_t op1, size_t vl);
vuint8mf4_t viota_m_u8mf4_ta (vbool32_t op1, size_t vl);
vuint8mf2_t viota_m_u8mf2_ta (vbool16_t op1, size_t vl);
vuint8m1_t viota_m_u8m1_ta (vbool8_t op1, size_t vl);
vuint8m2_t viota_m_u8m2_ta (vbool4_t op1, size_t vl);
vuint8m4_t viota_m_u8m4_ta (vbool2_t op1, size_t vl);
vuint8m8_t viota_m_u8m8_ta (vbool1_t op1, size_t vl);
vuint16mf4_t viota_m_u16mf4_ta (vbool64_t op1, size_t vl);
vuint16mf2_t viota_m_u16mf2_ta (vbool32_t op1, size_t vl);
vuint16m1_t viota_m_u16m1_ta (vbool16_t op1, size_t vl);
vuint16m2_t viota_m_u16m2_ta (vbool8_t op1, size_t vl);
vuint16m4_t viota_m_u16m4_ta (vbool4_t op1, size_t vl);
vuint16m8_t viota_m_u16m8_ta (vbool2_t op1, size_t vl);
vuint32mf2_t viota_m_u32mf2_ta (vbool64_t op1, size_t vl);
vuint32m1_t viota_m_u32m1_ta (vbool32_t op1, size_t vl);
vuint32m2_t viota_m_u32m2_ta (vbool16_t op1, size_t vl);
vuint32m4_t viota_m_u32m4_ta (vbool8_t op1, size_t vl);
vuint32m8_t viota_m_u32m8_ta (vbool4_t op1, size_t vl);
vuint64m1_t viota_m_u64m1_ta (vbool64_t op1, size_t vl);
vuint64m2_t viota_m_u64m2_ta (vbool32_t op1, size_t vl);
vuint64m4_t viota_m_u64m4_ta (vbool16_t op1, size_t vl);
vuint64m8_t viota_m_u64m8_ta (vbool8_t op1, size_t vl);
// masked functions
vuint8mf8_t viota_tuma (vbool64_t mask, vuint8mf8_t maskedoff, vbool64_t op1, size_t vl);
vuint8mf4_t viota_tuma (vbool32_t mask, vuint8mf4_t maskedoff, vbool32_t op1, size_t vl);
vuint8mf2_t viota_tuma (vbool16_t mask, vuint8mf2_t maskedoff, vbool16_t op1, size_t vl);
vuint8m1_t viota_tuma (vbool8_t mask, vuint8m1_t maskedoff, vbool8_t op1, size_t vl);
vuint8m2_t viota_tuma (vbool4_t mask, vuint8m2_t maskedoff, vbool4_t op1, size_t vl);
vuint8m4_t viota_tuma (vbool2_t mask, vuint8m4_t maskedoff, vbool2_t op1, size_t vl);
vuint8m8_t viota_tuma (vbool1_t mask, vuint8m8_t maskedoff, vbool1_t op1, size_t vl);
vuint16mf4_t viota_tuma (vbool64_t mask, vuint16mf4_t maskedoff, vbool64_t op1, size_t vl);
vuint16mf2_t viota_tuma (vbool32_t mask, vuint16mf2_t maskedoff, vbool32_t op1, size_t vl);
vuint16m1_t viota_tuma (vbool16_t mask, vuint16m1_t maskedoff, vbool16_t op1, size_t vl);
vuint16m2_t viota_tuma (vbool8_t mask, vuint16m2_t maskedoff, vbool8_t op1, size_t vl);
vuint16m4_t viota_tuma (vbool4_t mask, vuint16m4_t maskedoff, vbool4_t op1, size_t vl);
vuint16m8_t viota_tuma (vbool2_t mask, vuint16m8_t maskedoff, vbool2_t op1, size_t vl);
vuint32mf2_t viota_tuma (vbool64_t mask, vuint32mf2_t maskedoff, vbool64_t op1, size_t vl);
vuint32m1_t viota_tuma (vbool32_t mask, vuint32m1_t maskedoff, vbool32_t op1, size_t vl);
vuint32m2_t viota_tuma (vbool16_t mask, vuint32m2_t maskedoff, vbool16_t op1, size_t vl);
vuint32m4_t viota_tuma (vbool8_t mask, vuint32m4_t maskedoff, vbool8_t op1, size_t vl);
vuint32m8_t viota_tuma (vbool4_t mask, vuint32m8_t maskedoff, vbool4_t op1, size_t vl);
vuint64m1_t viota_tuma (vbool64_t mask, vuint64m1_t maskedoff, vbool64_t op1, size_t vl);
vuint64m2_t viota_tuma (vbool32_t mask, vuint64m2_t maskedoff, vbool32_t op1, size_t vl);
vuint64m4_t viota_tuma (vbool16_t mask, vuint64m4_t maskedoff, vbool16_t op1, size_t vl);
vuint64m8_t viota_tuma (vbool8_t mask, vuint64m8_t maskedoff, vbool8_t op1, size_t vl);
// masked functions
vuint8mf8_t viota_tumu (vbool64_t mask, vuint8mf8_t maskedoff, vbool64_t op1, size_t vl);
vuint8mf4_t viota_tumu (vbool32_t mask, vuint8mf4_t maskedoff, vbool32_t op1, size_t vl);
vuint8mf2_t viota_tumu (vbool16_t mask, vuint8mf2_t maskedoff, vbool16_t op1, size_t vl);
vuint8m1_t viota_tumu (vbool8_t mask, vuint8m1_t maskedoff, vbool8_t op1, size_t vl);
vuint8m2_t viota_tumu (vbool4_t mask, vuint8m2_t maskedoff, vbool4_t op1, size_t vl);
vuint8m4_t viota_tumu (vbool2_t mask, vuint8m4_t maskedoff, vbool2_t op1, size_t vl);
vuint8m8_t viota_tumu (vbool1_t mask, vuint8m8_t maskedoff, vbool1_t op1, size_t vl);
vuint16mf4_t viota_tumu (vbool64_t mask, vuint16mf4_t maskedoff, vbool64_t op1, size_t vl);
vuint16mf2_t viota_tumu (vbool32_t mask, vuint16mf2_t maskedoff, vbool32_t op1, size_t vl);
vuint16m1_t viota_tumu (vbool16_t mask, vuint16m1_t maskedoff, vbool16_t op1, size_t vl);
vuint16m2_t viota_tumu (vbool8_t mask, vuint16m2_t maskedoff, vbool8_t op1, size_t vl);
vuint16m4_t viota_tumu (vbool4_t mask, vuint16m4_t maskedoff, vbool4_t op1, size_t vl);
vuint16m8_t viota_tumu (vbool2_t mask, vuint16m8_t maskedoff, vbool2_t op1, size_t vl);
vuint32mf2_t viota_tumu (vbool64_t mask, vuint32mf2_t maskedoff, vbool64_t op1, size_t vl);
vuint32m1_t viota_tumu (vbool32_t mask, vuint32m1_t maskedoff, vbool32_t op1, size_t vl);
vuint32m2_t viota_tumu (vbool16_t mask, vuint32m2_t maskedoff, vbool16_t op1, size_t vl);
vuint32m4_t viota_tumu (vbool8_t mask, vuint32m4_t maskedoff, vbool8_t op1, size_t vl);
vuint32m8_t viota_tumu (vbool4_t mask, vuint32m8_t maskedoff, vbool4_t op1, size_t vl);
vuint64m1_t viota_tumu (vbool64_t mask, vuint64m1_t maskedoff, vbool64_t op1, size_t vl);
vuint64m2_t viota_tumu (vbool32_t mask, vuint64m2_t maskedoff, vbool32_t op1, size_t vl);
vuint64m4_t viota_tumu (vbool16_t mask, vuint64m4_t maskedoff, vbool16_t op1, size_t vl);
vuint64m8_t viota_tumu (vbool8_t mask, vuint64m8_t maskedoff, vbool8_t op1, size_t vl);
// masked functions
vuint8mf8_t viota_m_u8mf8_tama (vbool64_t mask, vbool64_t op1, size_t vl);
vuint8mf4_t viota_m_u8mf4_tama (vbool32_t mask, vbool32_t op1, size_t vl);
vuint8mf2_t viota_m_u8mf2_tama (vbool16_t mask, vbool16_t op1, size_t vl);
vuint8m1_t viota_m_u8m1_tama (vbool8_t mask, vbool8_t op1, size_t vl);
vuint8m2_t viota_m_u8m2_tama (vbool4_t mask, vbool4_t op1, size_t vl);
vuint8m4_t viota_m_u8m4_tama (vbool2_t mask, vbool2_t op1, size_t vl);
vuint8m8_t viota_m_u8m8_tama (vbool1_t mask, vbool1_t op1, size_t vl);
vuint16mf4_t viota_m_u16mf4_tama (vbool64_t mask, vbool64_t op1, size_t vl);
vuint16mf2_t viota_m_u16mf2_tama (vbool32_t mask, vbool32_t op1, size_t vl);
vuint16m1_t viota_m_u16m1_tama (vbool16_t mask, vbool16_t op1, size_t vl);
vuint16m2_t viota_m_u16m2_tama (vbool8_t mask, vbool8_t op1, size_t vl);
vuint16m4_t viota_m_u16m4_tama (vbool4_t mask, vbool4_t op1, size_t vl);
vuint16m8_t viota_m_u16m8_tama (vbool2_t mask, vbool2_t op1, size_t vl);
vuint32mf2_t viota_m_u32mf2_tama (vbool64_t mask, vbool64_t op1, size_t vl);
vuint32m1_t viota_m_u32m1_tama (vbool32_t mask, vbool32_t op1, size_t vl);
vuint32m2_t viota_m_u32m2_tama (vbool16_t mask, vbool16_t op1, size_t vl);
vuint32m4_t viota_m_u32m4_tama (vbool8_t mask, vbool8_t op1, size_t vl);
vuint32m8_t viota_m_u32m8_tama (vbool4_t mask, vbool4_t op1, size_t vl);
vuint64m1_t viota_m_u64m1_tama (vbool64_t mask, vbool64_t op1, size_t vl);
vuint64m2_t viota_m_u64m2_tama (vbool32_t mask, vbool32_t op1, size_t vl);
vuint64m4_t viota_m_u64m4_tama (vbool16_t mask, vbool16_t op1, size_t vl);
vuint64m8_t viota_m_u64m8_tama (vbool8_t mask, vbool8_t op1, size_t vl);
// masked functions
vuint8mf8_t viota_tamu (vbool64_t mask, vuint8mf8_t maskedoff, vbool64_t op1, size_t vl);
vuint8mf4_t viota_tamu (vbool32_t mask, vuint8mf4_t maskedoff, vbool32_t op1, size_t vl);
vuint8mf2_t viota_tamu (vbool16_t mask, vuint8mf2_t maskedoff, vbool16_t op1, size_t vl);
vuint8m1_t viota_tamu (vbool8_t mask, vuint8m1_t maskedoff, vbool8_t op1, size_t vl);
vuint8m2_t viota_tamu (vbool4_t mask, vuint8m2_t maskedoff, vbool4_t op1, size_t vl);
vuint8m4_t viota_tamu (vbool2_t mask, vuint8m4_t maskedoff, vbool2_t op1, size_t vl);
vuint8m8_t viota_tamu (vbool1_t mask, vuint8m8_t maskedoff, vbool1_t op1, size_t vl);
vuint16mf4_t viota_tamu (vbool64_t mask, vuint16mf4_t maskedoff, vbool64_t op1, size_t vl);
vuint16mf2_t viota_tamu (vbool32_t mask, vuint16mf2_t maskedoff, vbool32_t op1, size_t vl);
vuint16m1_t viota_tamu (vbool16_t mask, vuint16m1_t maskedoff, vbool16_t op1, size_t vl);
vuint16m2_t viota_tamu (vbool8_t mask, vuint16m2_t maskedoff, vbool8_t op1, size_t vl);
vuint16m4_t viota_tamu (vbool4_t mask, vuint16m4_t maskedoff, vbool4_t op1, size_t vl);
vuint16m8_t viota_tamu (vbool2_t mask, vuint16m8_t maskedoff, vbool2_t op1, size_t vl);
vuint32mf2_t viota_tamu (vbool64_t mask, vuint32mf2_t maskedoff, vbool64_t op1, size_t vl);
vuint32m1_t viota_tamu (vbool32_t mask, vuint32m1_t maskedoff, vbool32_t op1, size_t vl);
vuint32m2_t viota_tamu (vbool16_t mask, vuint32m2_t maskedoff, vbool16_t op1, size_t vl);
vuint32m4_t viota_tamu (vbool8_t mask, vuint32m4_t maskedoff, vbool8_t op1, size_t vl);
vuint32m8_t viota_tamu (vbool4_t mask, vuint32m8_t maskedoff, vbool4_t op1, size_t vl);
vuint64m1_t viota_tamu (vbool64_t mask, vuint64m1_t maskedoff, vbool64_t op1, size_t vl);
vuint64m2_t viota_tamu (vbool32_t mask, vuint64m2_t maskedoff, vbool32_t op1, size_t vl);
vuint64m4_t viota_tamu (vbool16_t mask, vuint64m4_t maskedoff, vbool16_t op1, size_t vl);
vuint64m8_t viota_tamu (vbool8_t mask, vuint64m8_t maskedoff, vbool8_t op1, size_t vl);
```

### [Vector Element Index Functions](../rvv-intrinsic-api.md#169-vector-element-index-operations):

**Prototypes:**
``` C
vuint8mf8_t vid_tu (vuint8mf8_t maskedoff, size_t vl);
vuint8mf4_t vid_tu (vuint8mf4_t maskedoff, size_t vl);
vuint8mf2_t vid_tu (vuint8mf2_t maskedoff, size_t vl);
vuint8m1_t vid_tu (vuint8m1_t maskedoff, size_t vl);
vuint8m2_t vid_tu (vuint8m2_t maskedoff, size_t vl);
vuint8m4_t vid_tu (vuint8m4_t maskedoff, size_t vl);
vuint8m8_t vid_tu (vuint8m8_t maskedoff, size_t vl);
vuint16mf4_t vid_tu (vuint16mf4_t maskedoff, size_t vl);
vuint16mf2_t vid_tu (vuint16mf2_t maskedoff, size_t vl);
vuint16m1_t vid_tu (vuint16m1_t maskedoff, size_t vl);
vuint16m2_t vid_tu (vuint16m2_t maskedoff, size_t vl);
vuint16m4_t vid_tu (vuint16m4_t maskedoff, size_t vl);
vuint16m8_t vid_tu (vuint16m8_t maskedoff, size_t vl);
vuint32mf2_t vid_tu (vuint32mf2_t maskedoff, size_t vl);
vuint32m1_t vid_tu (vuint32m1_t maskedoff, size_t vl);
vuint32m2_t vid_tu (vuint32m2_t maskedoff, size_t vl);
vuint32m4_t vid_tu (vuint32m4_t maskedoff, size_t vl);
vuint32m8_t vid_tu (vuint32m8_t maskedoff, size_t vl);
vuint64m1_t vid_tu (vuint64m1_t maskedoff, size_t vl);
vuint64m2_t vid_tu (vuint64m2_t maskedoff, size_t vl);
vuint64m4_t vid_tu (vuint64m4_t maskedoff, size_t vl);
vuint64m8_t vid_tu (vuint64m8_t maskedoff, size_t vl);
vuint8mf8_t vid_v_u8mf8_ta (size_t vl);
vuint8mf4_t vid_v_u8mf4_ta (size_t vl);
vuint8mf2_t vid_v_u8mf2_ta (size_t vl);
vuint8m1_t vid_v_u8m1_ta (size_t vl);
vuint8m2_t vid_v_u8m2_ta (size_t vl);
vuint8m4_t vid_v_u8m4_ta (size_t vl);
vuint8m8_t vid_v_u8m8_ta (size_t vl);
vuint16mf4_t vid_v_u16mf4_ta (size_t vl);
vuint16mf2_t vid_v_u16mf2_ta (size_t vl);
vuint16m1_t vid_v_u16m1_ta (size_t vl);
vuint16m2_t vid_v_u16m2_ta (size_t vl);
vuint16m4_t vid_v_u16m4_ta (size_t vl);
vuint16m8_t vid_v_u16m8_ta (size_t vl);
vuint32mf2_t vid_v_u32mf2_ta (size_t vl);
vuint32m1_t vid_v_u32m1_ta (size_t vl);
vuint32m2_t vid_v_u32m2_ta (size_t vl);
vuint32m4_t vid_v_u32m4_ta (size_t vl);
vuint32m8_t vid_v_u32m8_ta (size_t vl);
vuint64m1_t vid_v_u64m1_ta (size_t vl);
vuint64m2_t vid_v_u64m2_ta (size_t vl);
vuint64m4_t vid_v_u64m4_ta (size_t vl);
vuint64m8_t vid_v_u64m8_ta (size_t vl);
// masked functions
vuint8mf8_t vid_tuma (vbool64_t mask, vuint8mf8_t maskedoff, size_t vl);
vuint8mf4_t vid_tuma (vbool32_t mask, vuint8mf4_t maskedoff, size_t vl);
vuint8mf2_t vid_tuma (vbool16_t mask, vuint8mf2_t maskedoff, size_t vl);
vuint8m1_t vid_tuma (vbool8_t mask, vuint8m1_t maskedoff, size_t vl);
vuint8m2_t vid_tuma (vbool4_t mask, vuint8m2_t maskedoff, size_t vl);
vuint8m4_t vid_tuma (vbool2_t mask, vuint8m4_t maskedoff, size_t vl);
vuint8m8_t vid_tuma (vbool1_t mask, vuint8m8_t maskedoff, size_t vl);
vuint16mf4_t vid_tuma (vbool64_t mask, vuint16mf4_t maskedoff, size_t vl);
vuint16mf2_t vid_tuma (vbool32_t mask, vuint16mf2_t maskedoff, size_t vl);
vuint16m1_t vid_tuma (vbool16_t mask, vuint16m1_t maskedoff, size_t vl);
vuint16m2_t vid_tuma (vbool8_t mask, vuint16m2_t maskedoff, size_t vl);
vuint16m4_t vid_tuma (vbool4_t mask, vuint16m4_t maskedoff, size_t vl);
vuint16m8_t vid_tuma (vbool2_t mask, vuint16m8_t maskedoff, size_t vl);
vuint32mf2_t vid_tuma (vbool64_t mask, vuint32mf2_t maskedoff, size_t vl);
vuint32m1_t vid_tuma (vbool32_t mask, vuint32m1_t maskedoff, size_t vl);
vuint32m2_t vid_tuma (vbool16_t mask, vuint32m2_t maskedoff, size_t vl);
vuint32m4_t vid_tuma (vbool8_t mask, vuint32m4_t maskedoff, size_t vl);
vuint32m8_t vid_tuma (vbool4_t mask, vuint32m8_t maskedoff, size_t vl);
vuint64m1_t vid_tuma (vbool64_t mask, vuint64m1_t maskedoff, size_t vl);
vuint64m2_t vid_tuma (vbool32_t mask, vuint64m2_t maskedoff, size_t vl);
vuint64m4_t vid_tuma (vbool16_t mask, vuint64m4_t maskedoff, size_t vl);
vuint64m8_t vid_tuma (vbool8_t mask, vuint64m8_t maskedoff, size_t vl);
// masked functions
vuint8mf8_t vid_tumu (vbool64_t mask, vuint8mf8_t maskedoff, size_t vl);
vuint8mf4_t vid_tumu (vbool32_t mask, vuint8mf4_t maskedoff, size_t vl);
vuint8mf2_t vid_tumu (vbool16_t mask, vuint8mf2_t maskedoff, size_t vl);
vuint8m1_t vid_tumu (vbool8_t mask, vuint8m1_t maskedoff, size_t vl);
vuint8m2_t vid_tumu (vbool4_t mask, vuint8m2_t maskedoff, size_t vl);
vuint8m4_t vid_tumu (vbool2_t mask, vuint8m4_t maskedoff, size_t vl);
vuint8m8_t vid_tumu (vbool1_t mask, vuint8m8_t maskedoff, size_t vl);
vuint16mf4_t vid_tumu (vbool64_t mask, vuint16mf4_t maskedoff, size_t vl);
vuint16mf2_t vid_tumu (vbool32_t mask, vuint16mf2_t maskedoff, size_t vl);
vuint16m1_t vid_tumu (vbool16_t mask, vuint16m1_t maskedoff, size_t vl);
vuint16m2_t vid_tumu (vbool8_t mask, vuint16m2_t maskedoff, size_t vl);
vuint16m4_t vid_tumu (vbool4_t mask, vuint16m4_t maskedoff, size_t vl);
vuint16m8_t vid_tumu (vbool2_t mask, vuint16m8_t maskedoff, size_t vl);
vuint32mf2_t vid_tumu (vbool64_t mask, vuint32mf2_t maskedoff, size_t vl);
vuint32m1_t vid_tumu (vbool32_t mask, vuint32m1_t maskedoff, size_t vl);
vuint32m2_t vid_tumu (vbool16_t mask, vuint32m2_t maskedoff, size_t vl);
vuint32m4_t vid_tumu (vbool8_t mask, vuint32m4_t maskedoff, size_t vl);
vuint32m8_t vid_tumu (vbool4_t mask, vuint32m8_t maskedoff, size_t vl);
vuint64m1_t vid_tumu (vbool64_t mask, vuint64m1_t maskedoff, size_t vl);
vuint64m2_t vid_tumu (vbool32_t mask, vuint64m2_t maskedoff, size_t vl);
vuint64m4_t vid_tumu (vbool16_t mask, vuint64m4_t maskedoff, size_t vl);
vuint64m8_t vid_tumu (vbool8_t mask, vuint64m8_t maskedoff, size_t vl);
// masked functions
vuint8mf8_t vid_v_u8mf8_tama (vbool64_t mask, size_t vl);
vuint8mf4_t vid_v_u8mf4_tama (vbool32_t mask, size_t vl);
vuint8mf2_t vid_v_u8mf2_tama (vbool16_t mask, size_t vl);
vuint8m1_t vid_v_u8m1_tama (vbool8_t mask, size_t vl);
vuint8m2_t vid_v_u8m2_tama (vbool4_t mask, size_t vl);
vuint8m4_t vid_v_u8m4_tama (vbool2_t mask, size_t vl);
vuint8m8_t vid_v_u8m8_tama (vbool1_t mask, size_t vl);
vuint16mf4_t vid_v_u16mf4_tama (vbool64_t mask, size_t vl);
vuint16mf2_t vid_v_u16mf2_tama (vbool32_t mask, size_t vl);
vuint16m1_t vid_v_u16m1_tama (vbool16_t mask, size_t vl);
vuint16m2_t vid_v_u16m2_tama (vbool8_t mask, size_t vl);
vuint16m4_t vid_v_u16m4_tama (vbool4_t mask, size_t vl);
vuint16m8_t vid_v_u16m8_tama (vbool2_t mask, size_t vl);
vuint32mf2_t vid_v_u32mf2_tama (vbool64_t mask, size_t vl);
vuint32m1_t vid_v_u32m1_tama (vbool32_t mask, size_t vl);
vuint32m2_t vid_v_u32m2_tama (vbool16_t mask, size_t vl);
vuint32m4_t vid_v_u32m4_tama (vbool8_t mask, size_t vl);
vuint32m8_t vid_v_u32m8_tama (vbool4_t mask, size_t vl);
vuint64m1_t vid_v_u64m1_tama (vbool64_t mask, size_t vl);
vuint64m2_t vid_v_u64m2_tama (vbool32_t mask, size_t vl);
vuint64m4_t vid_v_u64m4_tama (vbool16_t mask, size_t vl);
vuint64m8_t vid_v_u64m8_tama (vbool8_t mask, size_t vl);
// masked functions
vuint8mf8_t vid_tamu (vbool64_t mask, vuint8mf8_t maskedoff, size_t vl);
vuint8mf4_t vid_tamu (vbool32_t mask, vuint8mf4_t maskedoff, size_t vl);
vuint8mf2_t vid_tamu (vbool16_t mask, vuint8mf2_t maskedoff, size_t vl);
vuint8m1_t vid_tamu (vbool8_t mask, vuint8m1_t maskedoff, size_t vl);
vuint8m2_t vid_tamu (vbool4_t mask, vuint8m2_t maskedoff, size_t vl);
vuint8m4_t vid_tamu (vbool2_t mask, vuint8m4_t maskedoff, size_t vl);
vuint8m8_t vid_tamu (vbool1_t mask, vuint8m8_t maskedoff, size_t vl);
vuint16mf4_t vid_tamu (vbool64_t mask, vuint16mf4_t maskedoff, size_t vl);
vuint16mf2_t vid_tamu (vbool32_t mask, vuint16mf2_t maskedoff, size_t vl);
vuint16m1_t vid_tamu (vbool16_t mask, vuint16m1_t maskedoff, size_t vl);
vuint16m2_t vid_tamu (vbool8_t mask, vuint16m2_t maskedoff, size_t vl);
vuint16m4_t vid_tamu (vbool4_t mask, vuint16m4_t maskedoff, size_t vl);
vuint16m8_t vid_tamu (vbool2_t mask, vuint16m8_t maskedoff, size_t vl);
vuint32mf2_t vid_tamu (vbool64_t mask, vuint32mf2_t maskedoff, size_t vl);
vuint32m1_t vid_tamu (vbool32_t mask, vuint32m1_t maskedoff, size_t vl);
vuint32m2_t vid_tamu (vbool16_t mask, vuint32m2_t maskedoff, size_t vl);
vuint32m4_t vid_tamu (vbool8_t mask, vuint32m4_t maskedoff, size_t vl);
vuint32m8_t vid_tamu (vbool4_t mask, vuint32m8_t maskedoff, size_t vl);
vuint64m1_t vid_tamu (vbool64_t mask, vuint64m1_t maskedoff, size_t vl);
vuint64m2_t vid_tamu (vbool32_t mask, vuint64m2_t maskedoff, size_t vl);
vuint64m4_t vid_tamu (vbool16_t mask, vuint64m4_t maskedoff, size_t vl);
vuint64m8_t vid_tamu (vbool8_t mask, vuint64m8_t maskedoff, size_t vl);
```