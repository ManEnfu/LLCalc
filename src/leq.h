#ifndef LEQ_H
#define LEQ_H 1

#define leq(a, b) \
    a.bit8 > b.bit8 ? 0 : ( \
        a.bit8 < b.bit8 ? 1 : ( \
    a.bit7 > b.bit7 ? 0 : ( \
        a.bit7 < b.bit7 ? 1 : ( \
    a.bit6 > b.bit6 ? 0 : ( \
        a.bit6 < b.bit6 ? 1 : ( \
    a.bit5 > b.bit5 ? 0 : ( \
        a.bit5 < b.bit5 ? 1 : ( \
    a.bit4 > b.bit4 ? 0 : ( \
        a.bit4 < b.bit4 ? 1 : ( \
    a.bit3 > b.bit3 ? 0 : ( \
        a.bit3 < b.bit3 ? 1 : ( \
    a.bit2 > b.bit2 ? 0 : ( \
        a.bit2 < b.bit2 ? 1 : ( \
    a.bit1 > b.bit1 ? 0 : 1 \
    ) \
        ) \
    ) \
        ) \
    ) \
        ) \
    ) \
        ) \
    ) \
        ) \
    ) \
        ) \
    ) \
        )

#endif
