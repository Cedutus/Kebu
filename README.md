# Kebu
A Ortholinear keyboard that supports multiple layouts, including 4row and 5row options.
![Kebu](/assets/kebu.jpg)
# Parts
 - 47-61x Hotswap sockets (MX or Choc)
 - 47-61x SMD Diodes depending on layout chosen.
 - 1x Blackpill controller  (F401 or F411)
 - 6x 5mm or shorter M2 screws
 - 2x 12mm M2 spacer
 - 4x 10mm M2 spacer
 - Rotary encoder & cap
 - Optional: 2u Stabilizer

# Build guide
 - First choose a layout
 - Solder diodes on the PCB
 - Solder hotswap sockets on the PCB
 - Solder Blackpills with the buttons facing up. B12 to Square pad
 - Optional: Solder rotary encoders
 - Optional: Install stabilizer

Firmware is not included in QMK repo, you will have to compile it yourself. Most of the code is copied and stripped down from Vattern's Grandiceps keyboard.
Blackpill bootloader: hold down the boot button on the blackpill, then press NRST. it might take some tries.
