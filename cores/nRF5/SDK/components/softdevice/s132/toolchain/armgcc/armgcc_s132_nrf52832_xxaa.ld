/* Linker script to configure memory regions. */

SEARCH_DIR(.)
GROUP(-lgcc -lc -lnosys)

MEMORY
{
  FLASH (rx) : ORIGIN = 0x1c000, LENGTH = 0x64000
  RAM (rwx) :  ORIGIN = 0x20002080, LENGTH = 0xa000
  NOINIT (rwx)   :  ORIGIN = 0x2000c080, LENGTH = 0x3f80
}

SECTIONS
{
   /* No init RAM section in bootloader. Used for app/boot information exchange. */
   .noinit(NOLOAD) :
   {
      *(.noinit*)
   } > NOINIT
}

SECTIONS
{
   .fs_data :
   {
      PROVIDE(__start_fs_data = .);
      KEEP(*(.fs_data))
      PROVIDE(__stop_fs_data = .);
   } > RAM
} INSERT AFTER .data;

INCLUDE "nrf5x_common.ld"
