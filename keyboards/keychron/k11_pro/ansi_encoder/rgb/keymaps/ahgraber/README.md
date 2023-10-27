# Quickstart

This keymap is defined [in the `bluetooth_playground` branch of keychron/qmk_firmware](https://github.com/Keychron/qmk_firmware/tree/bluetooth_playground)

Compiling may require cloning the keychron/qmk_firmware repo as it may not be up to date
with upstream qmk/qmk_firmware.

## Install

```sh
brew install qmk/qmk/qmk
```

## [Load / update git repo](https://docs.qmk.fm/#/newbs_git_best_practices)

* clone
  
  ```sh
  git clone ahgraber/qmk_firmware
  cd <clone location>
  ```

* update fork main

  ```sh
  git pull upstream master
  git push origin main
  # or, use button in ahgraber/qmk_firmware/tree/main
  ```

<!--   
  ```sh
  # get updates from qmk main
  git fetch upstream
  # resync dev branch with qmk
  git reset --hard upstream/master
  # resync fork, overriding remote changes not reflected in local repo
  git push --force-with-lease
  ``` -->

## Compile

ex: KeyChron K11 Pro ANSI Encoder

```sh
KEYBOARD='keychron/k11_pro/ansi_encoder/rgb'
QMK_USER='ahgraber'
qmk config user.keyboard="$KEYBOARD"
qmk config user.keymap="$QMK_USER"
qmk compile -kb "$KEYBOARD" -km "$QMK_USER" -j 8 --clean
```

## Flash

1. Launch QMK toolbox
2. [Put board into DFU bootloader mode](https://www.keychron.com/blogs/archived/k11-pro-factory-reset-and-firmware-flash):

   > *Shortcuts*
   > KeyChron K11
   >   1. Remove spacebar to expose reset button.
   >   2. Ensure toggle switch on the back of the keyboard is set to "Off".
   >   3. Connect the USB cable.
   >   4. Hold down the "Reset" button under the space bar, and then slide the toggle to "Cable".
   > KeyChron K11 - QMK custom keymap: `fn + cmd`

3. Select board, chip, and fimware in QMK toolbox

   > *Chip*
   > GMMK Pro - atmega32u2

4. Flash - firmware will be in repo root after compilation
