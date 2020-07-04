#ifndef MULT_H
#define MULT_H 1

#include "macros.h"

#define mult(dest, src) \
if (dest.bit8) { \
    dest.bit8 = 0; \
    if (src.bit1) { \
        dest.bit8 = !dest.bit8; \
    } \
} \
if (dest.bit7) { \
    dest.bit7 = 0; \
    if (src.bit1) { \
        dest.bit7 = !dest.bit7; \
        if (!dest.bit7) { \
            dest.bit8 = !dest.bit8; \
        } \
    } \
    if (src.bit2) { \
        dest.bit8 = !dest.bit8; \
    } \
} \
if (dest.bit6) { \
    dest.bit6 = 0; \
    if (src.bit1) { \
        dest.bit6 = !dest.bit6; \
        if (!dest.bit6) { \
            dest.bit7 = !dest.bit7; \
            if (!dest.bit7) { \
                dest.bit8 = !dest.bit8; \
            } \
        } \
    } \
    if (src.bit2) { \
        dest.bit7 = !dest.bit7; \
        if (!dest.bit7) { \
            dest.bit8 = !dest.bit8; \
        } \
    } \
    if (src.bit3) { \
        dest.bit8 = !dest.bit8; \
    } \
} \
if (dest.bit5) { \
    dest.bit5 = 0; \
    if (src.bit1) { \
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
    if (src.bit2) { \
        dest.bit6 = !dest.bit6; \
        if (!dest.bit6) { \
            dest.bit7 = !dest.bit7; \
            if (!dest.bit7) { \
                dest.bit8 = !dest.bit8; \
            } \
        } \
    } \
    if (src.bit3) { \
        dest.bit7 = !dest.bit7; \
        if (!dest.bit7) { \
            dest.bit8 = !dest.bit8; \
        } \
    } \
    if (src.bit4) { \
        dest.bit8 = !dest.bit8; \
    } \
} \
if (dest.bit4) { \
    dest.bit4 = 0; \
    if (src.bit1) { \
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
    if (src.bit2) { \
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
    if (src.bit3) { \
        dest.bit6 = !dest.bit6; \
        if (!dest.bit6) { \
            dest.bit7 = !dest.bit7; \
            if (!dest.bit7) { \
                dest.bit8 = !dest.bit8; \
            } \
        } \
    } \
    if (src.bit4) { \
        dest.bit7 = !dest.bit7; \
        if (!dest.bit7) { \
            dest.bit8 = !dest.bit8; \
        } \
    } \
    if (src.bit5) { \
        dest.bit8 = !dest.bit8; \
    } \
} \
if (dest.bit3) { \
    dest.bit3 = 0; \
    if (src.bit1) { \
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
    if (src.bit2) { \
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
    if (src.bit3) { \
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
    if (src.bit4) { \
        dest.bit6 = !dest.bit6; \
        if (!dest.bit6) { \
            dest.bit7 = !dest.bit7; \
            if (!dest.bit7) { \
                dest.bit8 = !dest.bit8; \
            } \
        } \
    } \
    if (src.bit5) { \
        dest.bit7 = !dest.bit7; \
        if (!dest.bit7) { \
            dest.bit8 = !dest.bit8; \
        } \
    } \
    if (src.bit6) { \
        dest.bit8 = !dest.bit8; \
    } \
} \
if (dest.bit2) { \
    dest.bit2 = 0; \
    if (src.bit1) { \
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
    if (src.bit2) { \
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
    if (src.bit3) { \
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
    if (src.bit4) { \
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
    if (src.bit5) { \
        dest.bit6 = !dest.bit6; \
        if (!dest.bit6) { \
            dest.bit7 = !dest.bit7; \
            if (!dest.bit7) { \
                dest.bit8 = !dest.bit8; \
            } \
        } \
    } \
    if (src.bit6) { \
        dest.bit7 = !dest.bit7; \
        if (!dest.bit7) { \
            dest.bit8 = !dest.bit8; \
        } \
    } \
    if (src.bit7) { \
        dest.bit8 = !dest.bit8; \
    } \
} \
if (dest.bit1) { \
    dest.bit1 = 0; \
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
    } \
}

#define mult10(dest) \
if (dest.bit8) { \
    dest.bit8 = 0; \
} \
if (dest.bit7) { \
    dest.bit7 = 0; \
        dest.bit8 = !dest.bit8; \
} \
if (dest.bit6) { \
    dest.bit6 = 0; \
        dest.bit7 = !dest.bit7; \
        if (!dest.bit7) { \
            dest.bit8 = !dest.bit8; \
        } \
} \
if (dest.bit5) { \
    dest.bit5 = 0; \
        dest.bit6 = !dest.bit6; \
        if (!dest.bit6) { \
            dest.bit7 = !dest.bit7; \
            if (!dest.bit7) { \
                dest.bit8 = !dest.bit8; \
            } \
        } \
        dest.bit8 = !dest.bit8; \
} \
if (dest.bit4) { \
    dest.bit4 = 0; \
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
        dest.bit7 = !dest.bit7; \
        if (!dest.bit7) { \
            dest.bit8 = !dest.bit8; \
        } \
} \
if (dest.bit3) { \
    dest.bit3 = 0; \
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
        dest.bit6 = !dest.bit6; \
        if (!dest.bit6) { \
            dest.bit7 = !dest.bit7; \
            if (!dest.bit7) { \
                dest.bit8 = !dest.bit8; \
            } \
        } \
} \
if (dest.bit2) { \
    dest.bit2 = 0; \
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
if (dest.bit1) { \
    dest.bit1 = 0; \
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
}

#endif
