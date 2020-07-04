#ifndef MACROS_H
#define MACROS_H 1

#define inc(dest) \
    dest.bit1 = !dest.bit1; \
    if (!dest.bit1) { \
        dest.bit2 = !dest.bit2; \
        if (!dest.bit2) { \
            dest.bit3 = !dest.bit3; \
            if (!dest.bit3) { \
                dest.bit4 = !dest.bit4; \
                if (!dest.bit4) { \
                    dest.bit5 = !dest.bit5; \
                    if (!dest.bit5) { \
                        dest.bit6 = !dest.bit6; \
                        if (!dest.bit6) { \
                            dest.bit7 = !dest.bit7; \
                            if (!dest.bit7) { \
                                dest.bit8 = !dest.bit8; \
                            } \
                        } \
                    } \
                } \
            } \
        } \
    }

#define isz(reg) \
    !(reg.bit1 || reg.bit2 || reg.bit3 || reg.bit4 || reg.bit5 || reg.bit6 || reg.bit7 || reg.bit8)

#define inv(dest) \
    dest.bit1 = !dest.bit1; \
    dest.bit2 = !dest.bit2; \
    dest.bit3 = !dest.bit3; \
    dest.bit4 = !dest.bit4; \
    dest.bit5 = !dest.bit5; \
    dest.bit6 = !dest.bit6; \
    dest.bit7 = !dest.bit7; \
    dest.bit8 = !dest.bit8;

#define zero(dest) \
    dest.bit1 = 0; \
    dest.bit2 = 0; \
    dest.bit3 = 0; \
    dest.bit4 = 0; \
    dest.bit5 = 0; \
    dest.bit6 = 0; \
    dest.bit7 = 0; \
    dest.bit8 = 0;

#define neg(dest) \
    inv(dest); \
    inc(dest)

#define mov(dest, src) \
    dest.bit1 = src.bit1; \
    dest.bit2 = src.bit2; \
    dest.bit3 = src.bit3; \
    dest.bit4 = src.bit4; \
    dest.bit5 = src.bit5; \
    dest.bit6 = src.bit6; \
    dest.bit7 = src.bit7; \
    dest.bit8 = src.bit8; \

#define add(dest, src) \
    if (src.bit1) { \
        dest.bit1 = !dest.bit1; \
        if (!dest.bit1) { \
            dest.bit2 = !dest.bit2; \
            if (!dest.bit2) { \
                dest.bit3 = !dest.bit3; \
                if (!dest.bit3) { \
                    dest.bit4 = !dest.bit4; \
                    if (!dest.bit4) { \
                        dest.bit5 = !dest.bit5; \
                        if (!dest.bit5) { \
                            dest.bit6 = !dest.bit6; \
                            if (!dest.bit6) { \
                                dest.bit7 = !dest.bit7; \
                                if (!dest.bit7) { \
                                    dest.bit8 = !dest.bit8; \
                                } \
                            } \
                        } \
                    } \
                } \
            } \
        } \
    } \
    if (src.bit2) { \
        dest.bit2 = !dest.bit2; \
        if (!dest.bit2) { \
            dest.bit3 = !dest.bit3; \
            if (!dest.bit3) { \
                dest.bit4 = !dest.bit4; \
                if (!dest.bit4) { \
                    dest.bit5 = !dest.bit5; \
                    if (!dest.bit5) { \
                        dest.bit6 = !dest.bit6; \
                        if (!dest.bit6) { \
                            dest.bit7 = !dest.bit7; \
                            if (!dest.bit7) { \
                                dest.bit8 = !dest.bit8; \
                            } \
                        } \
                    } \
                } \
            } \
        } \
    } \
    if (src.bit3) { \
        dest.bit3 = !dest.bit3; \
        if (!dest.bit3) { \
            dest.bit4 = !dest.bit4; \
            if (!dest.bit4) { \
                dest.bit5 = !dest.bit5; \
                if (!dest.bit5) { \
                    dest.bit6 = !dest.bit6; \
                    if (!dest.bit6) { \
                        dest.bit7 = !dest.bit7; \
                        if (!dest.bit7) { \
                            dest.bit8 = !dest.bit8; \
                        } \
                    } \
                } \
            } \
        } \
    } \
    if (src.bit4) { \
        dest.bit4 = !dest.bit4; \
        if (!dest.bit4) { \
            dest.bit5 = !dest.bit5; \
            if (!dest.bit5) { \
                dest.bit6 = !dest.bit6; \
                if (!dest.bit6) { \
                    dest.bit7 = !dest.bit7; \
                    if (!dest.bit7) { \
                        dest.bit8 = !dest.bit8; \
                    } \
                } \
            } \
        } \
    } \
    if (src.bit5) { \
        dest.bit5 = !dest.bit5; \
        if (!dest.bit5) { \
            dest.bit6 = !dest.bit6; \
            if (!dest.bit6) { \
                dest.bit7 = !dest.bit7; \
                if (!dest.bit7) { \
                    dest.bit8 = !dest.bit8; \
                } \
            } \
        } \
    } \
    if (src.bit6) { \
        dest.bit6 = !dest.bit6; \
        if (!dest.bit6) { \
            dest.bit7 = !dest.bit7; \
            if (!dest.bit7) { \
                dest.bit8 = !dest.bit8; \
            } \
        } \
    } \
    if (src.bit7) { \
        dest.bit7 = !dest.bit7; \
        if (!dest.bit7) { \
            dest.bit8 = !dest.bit8; \
        } \
    } \
    if (src.bit8) { \
        dest.bit8 = !dest.bit8; \
    }

#define sub(dest, src) \
    neg(dest); \
    add(dest, src); \
    neg(dest);

#endif
