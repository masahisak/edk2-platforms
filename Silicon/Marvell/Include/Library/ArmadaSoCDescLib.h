/**
*
*  Copyright (C) 2018, Marvell International Ltd. and its affiliates
*
*  This program and the accompanying materials are licensed and made available
*  under the terms and conditions of the BSD License which accompanies this
*  distribution. The full text of the license may be found at
*  http://opensource.org/licenses/bsd-license.php
*
*  THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
*  WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.
*
**/
#ifndef __ARMADA_SOC_DESC_LIB_H__
#define __ARMADA_SOC_DESC_LIB_H__

#include <Library/MvComPhyLib.h>
#include <Library/NonDiscoverableDeviceRegistrationLib.h>

//
// ComPhy SoC description
//
typedef struct {
  UINTN ComPhyId;
  UINTN ComPhyBaseAddress;
  UINTN ComPhyHpipe3BaseAddress;
  UINTN ComPhyLaneCount;
  UINTN ComPhyMuxBitCount;
  MV_COMPHY_CHIP_TYPE ComPhyChipType;
} MV_SOC_COMPHY_DESC;

EFI_STATUS
EFIAPI
ArmadaSoCDescComPhyGet (
  IN OUT MV_SOC_COMPHY_DESC  **ComPhyDesc,
  IN OUT UINTN                *DescCount
  );

//
// I2C
//
typedef struct {
  UINTN I2cId;
  UINTN I2cBaseAddress;
} MV_SOC_I2C_DESC;

EFI_STATUS
EFIAPI
ArmadaSoCDescI2cGet (
  IN OUT MV_SOC_I2C_DESC  **I2cDesc,
  IN OUT UINTN             *DescCount
  );

//
// MDIO
//
typedef struct {
  UINTN MdioId;
  UINTN MdioBaseAddress;
} MV_SOC_MDIO_DESC;

EFI_STATUS
EFIAPI
ArmadaSoCDescMdioGet (
  IN OUT MV_SOC_MDIO_DESC  **MdioDesc,
  IN OUT UINTN              *DescCount
  );

//
// NonDiscoverable devices SoC description
//
// AHCI
typedef struct {
  UINTN AhciId;
  UINTN AhciBaseAddress;
  UINTN AhciMemSize;
  NON_DISCOVERABLE_DEVICE_DMA_TYPE AhciDmaType;
} MV_SOC_AHCI_DESC;

EFI_STATUS
EFIAPI
ArmadaSoCDescAhciGet (
  IN OUT MV_SOC_AHCI_DESC  **AhciDesc,
  IN OUT UINTN              *DescCount
  );

// SDMMC
typedef struct {
  UINTN SdMmcBaseAddress;
  UINTN SdMmcMemSize;
  NON_DISCOVERABLE_DEVICE_DMA_TYPE SdMmcDmaType;
} MV_SOC_SDMMC_DESC;

EFI_STATUS
EFIAPI
ArmadaSoCDescSdMmcGet (
  IN OUT MV_SOC_SDMMC_DESC  **SdMmcDesc,
  IN OUT UINTN               *DescCount
  );

// XHCI
typedef struct {
  UINTN XhciBaseAddress;
  UINTN XhciMemSize;
  NON_DISCOVERABLE_DEVICE_DMA_TYPE XhciDmaType;
} MV_SOC_XHCI_DESC;

EFI_STATUS
EFIAPI
ArmadaSoCDescXhciGet (
  IN OUT MV_SOC_XHCI_DESC  **XhciDesc,
  IN OUT UINTN              *DescCount
  );

//
// PP2 NIC devices SoC description
//
typedef struct {
  UINTN Pp2BaseAddress;
  UINTN Pp2ClockFrequency;
} MV_SOC_PP2_DESC;

EFI_STATUS
EFIAPI
ArmadaSoCDescPp2Get (
  IN OUT MV_SOC_PP2_DESC  **Pp2Desc,
  IN OUT UINTN             *DescCount
  );

//
// UTMI PHY devices SoC description
//
typedef struct {
  UINT8 UtmiPhyId;
  UINTN UtmiBaseAddress;
  UINTN UtmiConfigAddress;
  UINTN UsbConfigAddress;
} MV_SOC_UTMI_DESC;

EFI_STATUS
EFIAPI
ArmadaSoCDescUtmiGet (
  IN OUT MV_SOC_UTMI_DESC  **UtmiDesc,
  IN OUT UINTN              *DescCount
  );
#endif /* __ARMADA_SOC_DESC_LIB_H__ */
