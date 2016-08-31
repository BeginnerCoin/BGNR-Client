#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/beginnercoin.png
ICON_DST=../../src/qt/res/icons/beginnercoin.ico
convert ${ICON_SRC} -resize 16x16 beginnercoin-16.png
convert ${ICON_SRC} -resize 32x32 beginnercoin-32.png
convert ${ICON_SRC} -resize 48x48 beginnercoin-48.png
convert beginnercoin-16.png beginnercoin-32.png beginnercoin-48.png ${ICON_DST}

