#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _EXT_IOMMU_INTERRUPT_REMAPPING_POLICY
{
    ExtIommuInterruptRemappingPolicyDisable = 0,
    ExtIommuInterruptRemappingPolicyEnableLoose = 1,
    ExtIommuInterruptRemappingPolicyEnableStrict = 2
};
/* Used in */
// _EXT_IOMMU_SETTINGS

