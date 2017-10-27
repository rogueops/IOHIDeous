#include <stdio.h>

#define	NX_ALPHASHIFTMASK	0x00010000
#define	NX_SHIFTMASK		0x00020000
#define	NX_CONTROLMASK		0x00040000
#define	NX_ALTERNATEMASK	0x00080000
#define	NX_COMMANDMASK		0x00100000
#define	NX_NUMERICPADMASK	0x00200000
#define	NX_HELPMASK		0x00400000
#define	NX_SECONDARYFNMASK	0x00800000
#define NX_ALPHASHIFT_STATELESS_MASK    0x01000000

#define	NX_DEVICELCTLKEYMASK	0x00000001
#define	NX_DEVICELSHIFTKEYMASK	0x00000002
#define	NX_DEVICERSHIFTKEYMASK	0x00000004
#define	NX_DEVICELCMDKEYMASK	0x00000008
#define	NX_DEVICERCMDKEYMASK	0x00000010
#define	NX_DEVICELALTKEYMASK	0x00000020
#define	NX_DEVICERALTKEYMASK	0x00000040
#define NX_DEVICE_ALPHASHIFT_STATELESS_MASK 0x00000080
#define NX_DEVICERCTLKEYMASK	0x00002000

#define KEYBOARD_FLAGSMASK \
        (NX_ALPHASHIFTMASK | NX_SHIFTMASK | NX_CONTROLMASK | NX_ALTERNATEMASK \
        | NX_COMMANDMASK | NX_NUMERICPADMASK | NX_HELPMASK | NX_SECONDARYFNMASK\
        | NX_DEVICELSHIFTKEYMASK | NX_DEVICERSHIFTKEYMASK | NX_DEVICELCMDKEYMASK \
        | NX_ALPHASHIFT_STATELESS_MASK | NX_DEVICE_ALPHASHIFT_STATELESS_MASK \
        | NX_DEVICERCMDKEYMASK | NX_DEVICELALTKEYMASK | NX_DEVICERALTKEYMASK\
        | NX_DEVICELCTLKEYMASK | NX_DEVICERCTLKEYMASK)

int main(void)
{
    printf("0x%08x\n", KEYBOARD_FLAGSMASK);
    return 0;
}
