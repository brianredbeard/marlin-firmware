# Marlin 3D Printer Firmware
<img align="right" src="https://github.com/MarlinFirmware/Marlin/raw/1.1.x/buildroot/share/pixmaps/logo/marlin-250.png" />

## About

This repository contains modifications to the Marlin 3D printer firmware.
Different branches are maintained for the purpose of easily deploying the
firmware.

## Ideology

The wonderful folks on the Marlin project have been doing all of their work
(naturally) in source control.  Seemingly though, many community users don't
understand the value of a commit history, the ability to cherry-pick, use
pull/change requests, etc.

All work done in this repository is done as follows:

1) Commits originating in this repository comprise work focused on a single
feature.
2) All work for a feature is rebased/squashed into a single commit.
3) If a branch is published in this readme it should be considered a "stable"
feature branch.
4) This repository is only a source of truth for the _features_ being used, not
Marlin itself.
5) While published branches will always attempt to be operated in a friendly way
_occasionally_ there may be the need to force push changes which result in a
state which can not be fast forwarded.
6) While leaving a branch (as per #5) in a state which cannot be fast forwarded
is considered abhorrent, the general state of many Marlin forks of having no
usable history or isolated commits is even worse.

## Branches

### [tam-series-1][tam-series-1]

One of the early "commercial" 3D printers was the Type A Machines Series 1
Revision A.

The TAM Series 1 was an "open source" laser cut plywood device running a RAMPS
1.4 board with a dual Y axis unit.

This branch is used to maintain modified firmware serial number 26.

### [ender3-bltouch-1.1.x][ender3-bltouch-1.1.x]

The [Ender 3][ender3] is a unit manufactured by the Shenzen company Creality.
It is an V-Slot aluminum extrusion 3d printer.  

This branch features a commit which sets up the various changes needed for the
[BLtouch][bltouch] unit sold by Creality.



[ender3]: https://www.creality3dofficial.com/collections/ender-series/products/official-creality-ender-3-3d-printer
[bltouch]: https://www.creality3dofficial.com/products/creality-bl-touch
[tam-series-1]: https://github.com/brianredbeard/marlin-firmware/tree/tam-series-1
[ender3-bltouch-1.1.x]: https://github.com/brianredbeard/marlin-firmware/tree/ender3-bltouch-1.1.x
<!--
vim: ts=2 sw=2 et tw=80
-->
