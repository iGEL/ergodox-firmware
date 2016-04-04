This is my fork of [benblazak's Ergodox firmware](https://github.com/benblazak/ergodox-firmware).
It's from a partial rewrite, that's aparently not finished, but I never had any problems with it.

My keyboard layout has four layers:

1. [Workman layout](http://www.workmanlayout.com/blog/)
2. QWERTY
3. Symbol layer
4. Keyboard functions (boot loader)

Find the layout definition
[here](https://github.com/iGEL/ergodox-firmware/blob/master/firmware/keyboard/ergodox/layout/workman--igel.c#L63-L157).
Some key function might not be obvious, so:

function   | explanation
-----------|------------
`nop`      | No op = no function
`lpu1l1`   | Push [layer](https://github.com/benblazak/ergodox-firmware#about-this-project-more-technical) 1
`lpo1l1`   | Pop layer 1
`lpupo2l2` | Push layer 2 while the button is pressed, the pop it (similar to the `shift key`)
`transp`   | Use whatever key at the same position one layer down
`guiL`     | (left) Super / ⌘ / Windows key
`btldr`    | Put the keyboard into bootloader mode (instead of pressing the hardware button)

# Compilation

Install the [required tools](http://pjrc.com/teensy/gcc.html), then:

```sh
cd firmware
make KEYBOARD_LAYOUT=igel--workman
```

Use the teensy software to install the load the `fireware.eep` and `firmware.hex` onto your ErgoDox

# Original README

Please also read the [original readme](original-readme.md).
