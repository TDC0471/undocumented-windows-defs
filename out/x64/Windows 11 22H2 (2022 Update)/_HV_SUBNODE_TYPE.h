#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _HV_SUBNODE_TYPE
{
    HvSubnodeAny = 0,
    HvSubnodeSocket = 1,
    HvSubnodeAmdNode = 2,
    HvSubnodeL3 = 3,
    HvSubnodeCount = 4,
    HvSubnodeInvalid = -1
};
