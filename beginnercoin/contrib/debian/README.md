
Debian
====================
This directory contains files used to package beginnercoind/beginnercoin-qt
for Debian-based Linux systems. If you compile beginnercoind/beginnercoin-qt yourself, there are some useful files here.

## beginnercoin: URI support ##


beginnercoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install beginnercoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your beginnercoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/beginnercoin128.png` to `/usr/share/pixmaps`

beginnercoin-qt.protocol (KDE)

