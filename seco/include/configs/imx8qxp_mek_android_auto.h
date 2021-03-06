/*
 * Copyright 2017 NXP
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef IMX8QXP_MEK_ANDROID_AUTO_H
#define IMX8QXP_MEK_ANDROID_AUTO_H

#define CONFIG_USBD_HS

#define CONFIG_BCB_SUPPORT
#define CONFIG_CMD_READ
#define CONFIG_USB_GADGET_VBUS_DRAW	2

#ifdef CONFIG_IMX_TRUSTY_OS
#define NS_ARCH_ARM64 1
#endif

/* USB OTG controller configs */
#ifdef CONFIG_USB_EHCI_HCD
#ifndef CONFIG_MXC_USB_PORTSC
#define CONFIG_MXC_USB_PORTSC		(PORT_PTS_UTMI | PORT_PTS_PTW)
#endif
#endif

#define CONFIG_ANDROID_AB_SUPPORT
#define CONFIG_AVB_SUPPORT
#define CONFIG_SUPPORT_EMMC_RPMB
#define CONFIG_SYSTEM_RAMDISK_SUPPORT
#define CONFIG_AVB_FUSE_BANK_SIZEW 0
#define CONFIG_AVB_FUSE_BANK_START 0
#define CONFIG_AVB_FUSE_BANK_END 0
#define CONFIG_FASTBOOT_LOCK
#define FSL_FASTBOOT_FB_DEV "mmc"

#ifdef CONFIG_SYS_MALLOC_LEN
#undef CONFIG_SYS_MALLOC_LEN
#define CONFIG_SYS_MALLOC_LEN           (96 * SZ_1M)
#endif

#define CONFIG_USB_FUNCTION_FASTBOOT
#define CONFIG_CMD_FASTBOOT

#define CONFIG_ANDROID_BOOT_IMAGE
#define CONFIG_FASTBOOT_FLASH

#define CONFIG_SKIP_RESOURCE_CHECING
#define CONFIG_FSL_FASTBOOT
#define CONFIG_FASTBOOT_USB_DEV 1
#define CONFIG_ANDROID_RECOVERY

#if defined CONFIG_SYS_BOOT_SATA
#define CONFIG_FASTBOOT_STORAGE_SATA
#define CONFIG_FASTBOOT_SATA_NO 0
#else
#define CONFIG_FASTBOOT_STORAGE_MMC
#endif

#define CONFIG_CMD_BOOTA
#define CONFIG_SUPPORT_RAW_INITRD
#define CONFIG_SERIAL_TAG

#undef CONFIG_EXTRA_ENV_SETTINGS
#undef CONFIG_BOOTCOMMAND

#define CONFIG_EXTRA_ENV_SETTINGS					\
	"splashpos=m,m\0"	  \
	"fdt_high=0xffffffffffffffff\0"	  \
	"initrd_high=0xffffffffffffffff\0" \

#define CONFIG_FASTBOOT_BUF_ADDR   0x98000000
#define CONFIG_FASTBOOT_BUF_SIZE   0x19000000

/* Undefine some macros to save boot time */
#undef CONFIG_ARCH_MISC_INIT
#undef CONFIG_FSL_HSIO
#undef CONFIG_CMD_PCI
#undef CONFIG_PCI
#undef CONFIG_PCIE_IMX8X
#undef CONFIG_PCI_PNP
#undef CONFIG_PCI_SCAN_SHOW
#undef CONFIG_CMD_FUSE
#undef CONFIG_MXC_GPIO
#undef CONFIG_MII
#undef CONFIG_FEC_MXC
#undef CONFIG_PHYLIB
#undef CONFIG_PHY_ATHEROS
#undef CONFIG_SYS_LONGHELP
#undef CONFIG_HUSH_PARSER
#undef CONFIG_AUTO_COMPLETE
#undef CONFIG_USB_HOST_ETHER
#undef CONFIG_USB_FUNCTION_MASS_STORAGE

#define AVB_AB_I_UNDERSTAND_LIBAVB_AB_IS_DEPRECATED

#endif /* IMX8QXP_MEK_ANDROID_AUTO_H */
