#!/bin/bash
# create multiresolution windows icon
ICON_DST=../../src/qt/res/icons/IntuitionCoinCoin.ico

convert ../../src/qt/res/icons/IntuitionCoinCoin-16.png ../../src/qt/res/icons/IntuitionCoinCoin-32.png ../../src/qt/res/icons/IntuitionCoinCoin-48.png ${ICON_DST}
