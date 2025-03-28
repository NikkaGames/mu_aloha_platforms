## @file
#
#  Copyright (c) 2011-2015, ARM Limited. All rights reserved.
#  Copyright (c) 2014, Linaro Limited. All rights reserved.
#  Copyright (c) 2015 - 2016, Intel Corporation. All rights reserved.
#  Copyright (c) 2018 - 2019, Bingxing Wang. All rights reserved.
#
#  SPDX-License-Identifier: BSD-2-Clause-Patent
#
##

[BuildOptions.common]
  *_*_*_CC_FLAGS = -march=armv8-a+crypto+rcpc 

[PcdsFixedAtBuild.common]
  gArmTokenSpaceGuid.PcdSystemMemoryBase|0x80000000         # Starting address, 2GB Base
  gArmTokenSpaceGuid.PcdCpuVectorBaseAddress|0x80c40000
  gArmTokenSpaceGuid.PcdArmArchTimerFreqInHz|19200000
  gArmTokenSpaceGuid.PcdArmArchTimerSecIntrNum|29
  gArmTokenSpaceGuid.PcdArmArchTimerIntrNum|30
  gArmTokenSpaceGuid.PcdArmArchTimerVirtIntrNum|27
  gArmTokenSpaceGuid.PcdArmArchTimerHypIntrNum|26
  gArmTokenSpaceGuid.PcdGicDistributorBase|0x09bc0000
  gArmTokenSpaceGuid.PcdGicRedistributorsBase|0x09c00000
  gArmTokenSpaceGuid.PcdGicInterruptInterfaceBase|0x065c0000

  gEfiMdeModulePkgTokenSpaceGuid.PcdAcpiDefaultOemRevision|0x00008996
  gEmbeddedTokenSpaceGuid.PcdPrePiStackBase|0x80c00000
  gEmbeddedTokenSpaceGuid.PcdPrePiStackSize|0x00040000      # 256K stack
  gEmbeddedTokenSpaceGuid.PcdInterruptBaseAddress|0x09bc0000
  gEmbeddedTokenSpaceGuid.PcdPrePiCpuIoSize|16

  gAndromedaPkgTokenSpaceGuid.PcdSmbiosProcessorModel|"Qualcomm Snapdragon 820 (8996)"
  gAndromedaPkgTokenSpaceGuid.PcdSmbiosProcessorRetailModel|"MSM8996"

  gArmPlatformTokenSpaceGuid.PcdCoreCount|4
  gArmPlatformTokenSpaceGuid.PcdClusterCount|1

  # UART
  gAndromedaPkgTokenSpaceGuid.PcdUartSerialBase|0x075b0000

[LibraryClasses.common]
  # Move PlatformMemoryMapLib to Device/<device>/Library
  # And moved this Line to SurfaceDuo1.dsc
  #  PlatformMemoryMapLib|QcomPkg/Library/PlatformMemoryMapLib/PlatformMemoryMapLib.inf

  # Move PlatformConfigurationMapLib to Device/<device>/Library
  # And moved this Line to SurfaceDuo1.dsc
  #  PlatformConfigurationMapLib|QcomPkg/Library/PlatformConfigurationMapLib/PlatformConfigurationMapLib.inf

  PlatformPeiLib|QcomPkg/PlatformPei/PlatformPeiLib.inf
  PlatformPrePiLib|QcomPkg/Library/PlatformPrePiLib/PlatformPrePiLib.inf
  AslUpdateLib|AndromedaPkg/Library/DxeAslUpdateLib/DxeAslUpdateLib.inf

  AcpiPlatformUpdateLib|QcomPkg/Library/AcpiPlatformUpdateLib/AcpiPlatformUpdateLib.inf
  PlatformThemeLib|QcomPkg/Library/PlatformThemeLib/PlatformThemeLib.inf

  ConsoleMsgLib|PcBdsPkg/Library/ConsoleMsgLibNull/ConsoleMsgLibNull.inf
  
  ArmPlatformLib|AndromedaPkg/Library/ArmPlatformLib/ArmPlatformLib.inf

[Components.common]
 AndromedaPkg/Driver/RamPartitionDxe/RamPartitionDxe.inf