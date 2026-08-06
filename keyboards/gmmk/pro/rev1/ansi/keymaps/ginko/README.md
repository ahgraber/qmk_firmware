# ginko — GMMK Pro (rev1, ANSI)

Keymap for Ginko's GMMK Pro. Based on the `ahgraber` keymap, minus the gaming
tweaks: standard bottom rows, no WASD highlight.

## Layers

| Layer | Purpose | Bottom row |
| ----- | ------- | ---------- |
| 0 | Windows base | `Ctrl` `Win` `Alt` — Space — `AltGr` `Fn` `Ctrl` |
| 1 | Mac base | `Ctrl` `Opt` `Cmd` — Space — `Cmd` `Fn` `Opt` |
| 2 | Fn | see shortcuts below |
| 3 | blank (VIA buffer) | |

## Shortcuts (hold `Fn`)

| Keys | Action |
| ---- | ------ |
| `Fn + 1` | switch to Windows layer |
| `Fn + 2` | switch to Mac layer |
| `Fn + Up` / `Fn + Down` | RGB brightness up / down |
| `Fn + N` | toggle NKRO / 6KRO (persists; use if a KVM/BIOS misbehaves) |
| `Fn + Del` | enter bootloader (for flashing) |
| `Fn + Esc` | reset EEPROM (clears saved settings) |

## Lighting

* **Base:** mint-green breathing across the whole matrix, side strips included
  (default effect; applies on fresh EEPROM or after `Fn + Esc`).
* **Caps Lock on:** alphas + side strips turn gold.
* **Base layer indicator:** `1` key lit grass green on Windows layer, `2` key on Mac layer.
* **Fn held:** highlights the active shortcut keys (`1`/`2` gold, `Esc` green, `Del` blue, `Fn` gold).
* Rotary encoder: volume up/down, press to mute.

## Build

```sh
qmk compile -kb gmmk/pro/rev1/ansi -km ginko
```
