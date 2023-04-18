# Quickstart

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

ex: KeyChron Q8 ANSI

```sh
KEYBOARD='keychron/q8/ansi'
QMK_USER='ahgraber'
qmk config user.keyboard="$KEYBOARD"
qmk config user.keymap="$QMK_USER"
qmk compile -kb "$KEYBOARD" -km "$QMK_USER" -j 8
```

## Flash

1. Launch QMK toolbox
2. Put board into DFU bootloader mode:

   > *Shortcuts*
   > KeyChron Q8 - factory firmware: hold down `esc` while plugging in
   > KeyChron Q8 - QMK custom keymap: `fn + cmd` 

3. Select board, chip, and fimware in QMK toolbox

   > *Chip*
   > GMMK Pro - atmega32u2

4. Flash - firmware will be in repo root after compilation
